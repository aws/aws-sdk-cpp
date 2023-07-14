﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/GreenFleetProvisioningAction.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the instances that belong to the replacement environment in
   * a blue/green deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GreenFleetProvisioningOption">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GreenFleetProvisioningOption
  {
  public:
    GreenFleetProvisioningOption();
    GreenFleetProvisioningOption(Aws::Utils::Json::JsonView jsonValue);
    GreenFleetProvisioningOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline const GreenFleetProvisioningAction& GetAction() const{ return m_action; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline void SetAction(const GreenFleetProvisioningAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline void SetAction(GreenFleetProvisioningAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline GreenFleetProvisioningOption& WithAction(const GreenFleetProvisioningAction& value) { SetAction(value); return *this;}

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p> <code>DISCOVER_EXISTING</code>: Use instances that already exist or will be
     * created manually.</p> </li> <li> <p> <code>COPY_AUTO_SCALING_GROUP</code>: Use
     * settings from a specified Auto Scaling group to define and create instances in a
     * new Auto Scaling group.</p> </li> </ul>
     */
    inline GreenFleetProvisioningOption& WithAction(GreenFleetProvisioningAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    GreenFleetProvisioningAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
