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
    AWS_EC2_API TransitGatewayAttachmentPropagation();
    AWS_EC2_API TransitGatewayAttachmentPropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayAttachmentPropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline TransitGatewayAttachmentPropagation& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline TransitGatewayAttachmentPropagation& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the propagation route table.</p>
     */
    inline TransitGatewayAttachmentPropagation& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>The state of the propagation route table.</p>
     */
    inline const TransitGatewayPropagationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the propagation route table.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the propagation route table.</p>
     */
    inline void SetState(const TransitGatewayPropagationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the propagation route table.</p>
     */
    inline void SetState(TransitGatewayPropagationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the propagation route table.</p>
     */
    inline TransitGatewayAttachmentPropagation& WithState(const TransitGatewayPropagationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the propagation route table.</p>
     */
    inline TransitGatewayAttachmentPropagation& WithState(TransitGatewayPropagationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    TransitGatewayPropagationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
