/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline const GreenFleetProvisioningAction& GetAction() const{ return m_action; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline void SetAction(const GreenFleetProvisioningAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline void SetAction(GreenFleetProvisioningAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline GreenFleetProvisioningOption& WithAction(const GreenFleetProvisioningAction& value) { SetAction(value); return *this;}

    /**
     * <p>The method used to add instances to a replacement environment.</p> <ul> <li>
     * <p>DISCOVER_EXISTING: Use instances that already exist or will be created
     * manually.</p> </li> <li> <p>COPY_AUTO_SCALING_GROUP: Use settings from a
     * specified Auto Scaling group to define and create instances in a new Auto
     * Scaling group.</p> </li> </ul>
     */
    inline GreenFleetProvisioningOption& WithAction(GreenFleetProvisioningAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    GreenFleetProvisioningAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
