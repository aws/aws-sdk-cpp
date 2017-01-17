﻿/*
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
   * <p>Describes an attachment change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceAttachmentChanges">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API NetworkInterfaceAttachmentChanges
  {
  public:
    NetworkInterfaceAttachmentChanges();
    NetworkInterfaceAttachmentChanges(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterfaceAttachmentChanges& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline NetworkInterfaceAttachmentChanges& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline NetworkInterfaceAttachmentChanges& WithAttachmentId(Aws::String&& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline NetworkInterfaceAttachmentChanges& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline NetworkInterfaceAttachmentChanges& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

  private:
    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet;
    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
