/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>The action of associating an EC2 resource, such as a subnet or internet
   * gateway, with a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2AssociateRouteTableAction">AWS
   * API Reference</a></p>
   */
  class EC2AssociateRouteTableAction
  {
  public:
    AWS_FMS_API EC2AssociateRouteTableAction();
    AWS_FMS_API EC2AssociateRouteTableAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2AssociateRouteTableAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EC2AssociateRouteTableAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EC2AssociateRouteTableAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EC2AssociateRouteTableAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline const ActionTarget& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const ActionTarget& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(ActionTarget&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline EC2AssociateRouteTableAction& WithRouteTableId(const ActionTarget& value) { SetRouteTableId(value); return *this;}
    inline EC2AssociateRouteTableAction& WithRouteTableId(ActionTarget&& value) { SetRouteTableId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet for the EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline const ActionTarget& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const ActionTarget& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(ActionTarget&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline EC2AssociateRouteTableAction& WithSubnetId(const ActionTarget& value) { SetSubnetId(value); return *this;}
    inline EC2AssociateRouteTableAction& WithSubnetId(ActionTarget&& value) { SetSubnetId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the gateway to be used with the EC2 route table that is associated
     * with the remediation action.</p>
     */
    inline const ActionTarget& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const ActionTarget& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(ActionTarget&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline EC2AssociateRouteTableAction& WithGatewayId(const ActionTarget& value) { SetGatewayId(value); return *this;}
    inline EC2AssociateRouteTableAction& WithGatewayId(ActionTarget&& value) { SetGatewayId(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    ActionTarget m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    ActionTarget m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
