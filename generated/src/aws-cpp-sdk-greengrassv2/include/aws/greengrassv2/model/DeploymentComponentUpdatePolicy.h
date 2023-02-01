/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/DeploymentComponentUpdatePolicyAction.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a deployment's policy that defines when components
   * are safe to update.</p> <p>Each component on a device can report whether or not
   * it's ready to update. After a component and its dependencies are ready, they can
   * apply the update in the deployment. You can configure whether or not the
   * deployment notifies components of an update and waits for a response. You
   * specify the amount of time each component has to respond to the update
   * notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeploymentComponentUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class DeploymentComponentUpdatePolicy
  {
  public:
    AWS_GREENGRASSV2_API DeploymentComponentUpdatePolicy();
    AWS_GREENGRASSV2_API DeploymentComponentUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DeploymentComponentUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time in seconds that each component on a device has to report
     * that it's safe to update. If the component waits for longer than this timeout,
     * then the deployment proceeds on the device.</p> <p>Default: <code>60</code> </p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The amount of time in seconds that each component on a device has to report
     * that it's safe to update. If the component waits for longer than this timeout,
     * then the deployment proceeds on the device.</p> <p>Default: <code>60</code> </p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The amount of time in seconds that each component on a device has to report
     * that it's safe to update. If the component waits for longer than this timeout,
     * then the deployment proceeds on the device.</p> <p>Default: <code>60</code> </p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The amount of time in seconds that each component on a device has to report
     * that it's safe to update. If the component waits for longer than this timeout,
     * then the deployment proceeds on the device.</p> <p>Default: <code>60</code> </p>
     */
    inline DeploymentComponentUpdatePolicy& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline const DeploymentComponentUpdatePolicyAction& GetAction() const{ return m_action; }

    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline void SetAction(const DeploymentComponentUpdatePolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline void SetAction(DeploymentComponentUpdatePolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline DeploymentComponentUpdatePolicy& WithAction(const DeploymentComponentUpdatePolicyAction& value) { SetAction(value); return *this;}

    /**
     * <p>Whether or not to notify components and wait for components to become safe to
     * update. Choose from the following options:</p> <ul> <li> <p>
     * <code>NOTIFY_COMPONENTS</code> – The deployment notifies each component before
     * it stops and updates that component. Components can use the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-subscribetocomponentupdates">SubscribeToComponentUpdates</a>
     * IPC operation to receive these notifications. Then, components can respond with
     * the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interprocess-communication.html#ipc-operation-defercomponentupdate">DeferComponentUpdate</a>
     * IPC operation. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
     * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> </li> <li>
     * <p> <code>SKIP_NOTIFY_COMPONENTS</code> – The deployment doesn't notify
     * components or wait for them to be safe to update.</p> </li> </ul> <p>Default:
     * <code>NOTIFY_COMPONENTS</code> </p>
     */
    inline DeploymentComponentUpdatePolicy& WithAction(DeploymentComponentUpdatePolicyAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    DeploymentComponentUpdatePolicyAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
