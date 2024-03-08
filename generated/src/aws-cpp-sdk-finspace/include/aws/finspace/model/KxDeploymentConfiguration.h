/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/KxDeploymentStrategy.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> The configuration that allows you to choose how you want to update the
   * databases on a cluster. Depending on the option you choose, you can reduce the
   * time it takes to update the cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  class KxDeploymentConfiguration
  {
  public:
    AWS_FINSPACE_API KxDeploymentConfiguration();
    AWS_FINSPACE_API KxDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline const KxDeploymentStrategy& GetDeploymentStrategy() const{ return m_deploymentStrategy; }

    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline bool DeploymentStrategyHasBeenSet() const { return m_deploymentStrategyHasBeenSet; }

    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline void SetDeploymentStrategy(const KxDeploymentStrategy& value) { m_deploymentStrategyHasBeenSet = true; m_deploymentStrategy = value; }

    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline void SetDeploymentStrategy(KxDeploymentStrategy&& value) { m_deploymentStrategyHasBeenSet = true; m_deploymentStrategy = std::move(value); }

    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline KxDeploymentConfiguration& WithDeploymentStrategy(const KxDeploymentStrategy& value) { SetDeploymentStrategy(value); return *this;}

    /**
     * <p> The type of deployment that you want on a cluster. </p> <ul> <li> <p>ROLLING
     * – This options updates the cluster by stopping the exiting q process and
     * starting a new q process with updated configuration.</p> </li> <li>
     * <p>NO_RESTART – This option updates the cluster without stopping the running q
     * process. It is only available for <code>HDB</code> type cluster. This option is
     * quicker as it reduces the turn around time to update configuration on a cluster.
     * </p> <p>With this deployment mode, you cannot update the
     * <code>initializationScript</code> and <code>commandLineArguments</code>
     * parameters.</p> </li> </ul>
     */
    inline KxDeploymentConfiguration& WithDeploymentStrategy(KxDeploymentStrategy&& value) { SetDeploymentStrategy(std::move(value)); return *this;}

  private:

    KxDeploymentStrategy m_deploymentStrategy;
    bool m_deploymentStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
