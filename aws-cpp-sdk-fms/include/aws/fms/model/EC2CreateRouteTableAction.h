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
   * <p>Information about the CreateRouteTable action in Amazon EC2.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2CreateRouteTableAction">AWS
   * API Reference</a></p>
   */
  class EC2CreateRouteTableAction
  {
  public:
    AWS_FMS_API EC2CreateRouteTableAction();
    AWS_FMS_API EC2CreateRouteTableAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2CreateRouteTableAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline EC2CreateRouteTableAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline EC2CreateRouteTableAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the CreateRouteTable action.</p>
     */
    inline EC2CreateRouteTableAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline const ActionTarget& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline void SetVpcId(const ActionTarget& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline void SetVpcId(ActionTarget&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline EC2CreateRouteTableAction& WithVpcId(const ActionTarget& value) { SetVpcId(value); return *this;}

    /**
     * <p>Information about the ID of a VPC.</p>
     */
    inline EC2CreateRouteTableAction& WithVpcId(ActionTarget&& value) { SetVpcId(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTarget m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
