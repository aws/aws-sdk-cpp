/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VpcPeeringConnectionStateReasonCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class VpcPeeringConnectionStateReason
  {
  public:
    AWS_EC2_API VpcPeeringConnectionStateReason() = default;
    AWS_EC2_API VpcPeeringConnectionStateReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcPeeringConnectionStateReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStateReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(VpcPeeringConnectionStateReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline VpcPeeringConnectionStateReason& WithCode(VpcPeeringConnectionStateReasonCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides more information about the status, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    VpcPeeringConnectionStateReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    VpcPeeringConnectionStateReasonCode m_code{VpcPeeringConnectionStateReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
