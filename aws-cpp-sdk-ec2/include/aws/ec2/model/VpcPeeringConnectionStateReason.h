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
#include <aws/ec2/model/VpcPeeringConnectionStateReasonCode.h>
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
   * <p>Describes the status of a VPC peering connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnectionStateReason">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpcPeeringConnectionStateReason
  {
  public:
    VpcPeeringConnectionStateReason();
    VpcPeeringConnectionStateReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcPeeringConnectionStateReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionStateReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline void SetCode(const VpcPeeringConnectionStateReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline void SetCode(VpcPeeringConnectionStateReasonCode&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStateReason& WithCode(const VpcPeeringConnectionStateReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStateReason& WithCode(VpcPeeringConnectionStateReasonCode&& value) { SetCode(value); return *this;}

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline VpcPeeringConnectionStateReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline VpcPeeringConnectionStateReason& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline VpcPeeringConnectionStateReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    VpcPeeringConnectionStateReasonCode m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
