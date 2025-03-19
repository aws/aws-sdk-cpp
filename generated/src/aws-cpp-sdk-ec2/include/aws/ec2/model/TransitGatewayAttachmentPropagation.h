/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayPropagationState.h>
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
   * <p>Describes a propagation route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayAttachmentPropagation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayAttachmentPropagation
  {
  public:
    AWS_EC2_API TransitGatewayAttachmentPropagation() = default;
    AWS_EC2_API TransitGatewayAttachmentPropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayAttachmentPropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const { return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    void SetTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::forward<TransitGatewayRouteTableIdT>(value); }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    TransitGatewayAttachmentPropagation& WithTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { SetTransitGatewayRouteTableId(std::forward<TransitGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the propagation route table.</p>
     */
    inline TransitGatewayPropagationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayPropagationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayAttachmentPropagation& WithState(TransitGatewayPropagationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    TransitGatewayPropagationState m_state{TransitGatewayPropagationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
