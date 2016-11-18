/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttachmentStatus.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an attachment between a virtual private gateway and a VPC.</p>
   */
  class AWS_EC2_API VpcAttachment
  {
  public:
    VpcAttachment();
    VpcAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcAttachment& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcAttachment& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcAttachment& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The current state of the attachment.</p>
     */
    inline const AttachmentStatus& GetState() const{ return m_state; }

    /**
     * <p>The current state of the attachment.</p>
     */
    inline void SetState(const AttachmentStatus& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the attachment.</p>
     */
    inline void SetState(AttachmentStatus&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the attachment.</p>
     */
    inline VpcAttachment& WithState(const AttachmentStatus& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the attachment.</p>
     */
    inline VpcAttachment& WithState(AttachmentStatus&& value) { SetState(value); return *this;}

  private:
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    AttachmentStatus m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
