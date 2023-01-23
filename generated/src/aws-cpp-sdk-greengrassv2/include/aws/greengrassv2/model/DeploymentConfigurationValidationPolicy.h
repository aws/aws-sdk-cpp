/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about how long a component on a core device can validate
   * its configuration updates before it times out. Components can use the <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetovalidateconfigurationupdates">SubscribeToValidateConfigurationUpdates</a>
   * IPC operation to receive notifications when a deployment specifies a
   * configuration update. Then, components can respond with the <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-sendconfigurationvalidityreport">SendConfigurationValidityReport</a>
   * IPC operation. For more information, see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
   * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeploymentConfigurationValidationPolicy">AWS
   * API Reference</a></p>
   */
  class DeploymentConfigurationValidationPolicy
  {
  public:
    AWS_GREENGRASSV2_API DeploymentConfigurationValidationPolicy();
    AWS_GREENGRASSV2_API DeploymentConfigurationValidationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DeploymentConfigurationValidationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time in seconds that a component can validate its configuration
     * updates. If the validation time exceeds this timeout, then the deployment
     * proceeds for the device.</p> <p>Default: <code>30</code> </p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The amount of time in seconds that a component can validate its configuration
     * updates. If the validation time exceeds this timeout, then the deployment
     * proceeds for the device.</p> <p>Default: <code>30</code> </p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The amount of time in seconds that a component can validate its configuration
     * updates. If the validation time exceeds this timeout, then the deployment
     * proceeds for the device.</p> <p>Default: <code>30</code> </p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The amount of time in seconds that a component can validate its configuration
     * updates. If the validation time exceeds this timeout, then the deployment
     * proceeds for the device.</p> <p>Default: <code>30</code> </p>
     */
    inline DeploymentConfigurationValidationPolicy& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
