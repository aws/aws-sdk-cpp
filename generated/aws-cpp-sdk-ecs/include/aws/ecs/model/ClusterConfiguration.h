/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExecuteCommandConfiguration.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The execute command configuration for the cluster.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ClusterConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ClusterConfiguration
  {
  public:
    ClusterConfiguration();
    ClusterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ClusterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline const ExecuteCommandConfiguration& GetExecuteCommandConfiguration() const{ return m_executeCommandConfiguration; }

    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline bool ExecuteCommandConfigurationHasBeenSet() const { return m_executeCommandConfigurationHasBeenSet; }

    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline void SetExecuteCommandConfiguration(const ExecuteCommandConfiguration& value) { m_executeCommandConfigurationHasBeenSet = true; m_executeCommandConfiguration = value; }

    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline void SetExecuteCommandConfiguration(ExecuteCommandConfiguration&& value) { m_executeCommandConfigurationHasBeenSet = true; m_executeCommandConfiguration = std::move(value); }

    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline ClusterConfiguration& WithExecuteCommandConfiguration(const ExecuteCommandConfiguration& value) { SetExecuteCommandConfiguration(value); return *this;}

    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline ClusterConfiguration& WithExecuteCommandConfiguration(ExecuteCommandConfiguration&& value) { SetExecuteCommandConfiguration(std::move(value)); return *this;}

  private:

    ExecuteCommandConfiguration m_executeCommandConfiguration;
    bool m_executeCommandConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
