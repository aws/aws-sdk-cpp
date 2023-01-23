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
   * <p>An action that copies the EC2 route table for use in
   * remediation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2CopyRouteTableAction">AWS
   * API Reference</a></p>
   */
  class EC2CopyRouteTableAction
  {
  public:
    AWS_FMS_API EC2CopyRouteTableAction();
    AWS_FMS_API EC2CopyRouteTableAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2CopyRouteTableAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline EC2CopyRouteTableAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline EC2CopyRouteTableAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline EC2CopyRouteTableAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline const ActionTarget& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline void SetVpcId(const ActionTarget& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline void SetVpcId(ActionTarget&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline EC2CopyRouteTableAction& WithVpcId(const ActionTarget& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the copied EC2 route table that is associated with the
     * remediation action.</p>
     */
    inline EC2CopyRouteTableAction& WithVpcId(ActionTarget&& value) { SetVpcId(std::move(value)); return *this;}


    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline const ActionTarget& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline void SetRouteTableId(const ActionTarget& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline void SetRouteTableId(ActionTarget&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline EC2CopyRouteTableAction& WithRouteTableId(const ActionTarget& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the copied EC2 route table that is associated with the remediation
     * action.</p>
     */
    inline EC2CopyRouteTableAction& WithRouteTableId(ActionTarget&& value) { SetRouteTableId(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ActionTarget m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
