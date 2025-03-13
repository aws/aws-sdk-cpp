/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AttachmentStatus.h>
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
   * <p>Describes the attachment of a VPC to an internet gateway or an egress-only
   * internet gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InternetGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class InternetGatewayAttachment
  {
  public:
    AWS_EC2_API InternetGatewayAttachment() = default;
    AWS_EC2_API InternetGatewayAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InternetGatewayAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the attachment. For an internet gateway, the state is
     * <code>available</code> when attached to a VPC; otherwise, this value is not
     * returned.</p>
     */
    inline AttachmentStatus GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AttachmentStatus value) { m_stateHasBeenSet = true; m_state = value; }
    inline InternetGatewayAttachment& WithState(AttachmentStatus value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    InternetGatewayAttachment& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    AttachmentStatus m_state{AttachmentStatus::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
