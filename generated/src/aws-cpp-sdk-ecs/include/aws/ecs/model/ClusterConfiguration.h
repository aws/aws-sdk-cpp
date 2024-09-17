/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExecuteCommandConfiguration.h>
#include <aws/ecs/model/ManagedStorageConfiguration.h>
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
   * <p>The execute command and managed storage configuration for the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ClusterConfiguration">AWS
   * API Reference</a></p>
   */
  class ClusterConfiguration
  {
  public:
    AWS_ECS_API ClusterConfiguration();
    AWS_ECS_API ClusterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ClusterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the execute command configuration.</p>
     */
    inline const ExecuteCommandConfiguration& GetExecuteCommandConfiguration() const{ return m_executeCommandConfiguration; }
    inline bool ExecuteCommandConfigurationHasBeenSet() const { return m_executeCommandConfigurationHasBeenSet; }
    inline void SetExecuteCommandConfiguration(const ExecuteCommandConfiguration& value) { m_executeCommandConfigurationHasBeenSet = true; m_executeCommandConfiguration = value; }
    inline void SetExecuteCommandConfiguration(ExecuteCommandConfiguration&& value) { m_executeCommandConfigurationHasBeenSet = true; m_executeCommandConfiguration = std::move(value); }
    inline ClusterConfiguration& WithExecuteCommandConfiguration(const ExecuteCommandConfiguration& value) { SetExecuteCommandConfiguration(value); return *this;}
    inline ClusterConfiguration& WithExecuteCommandConfiguration(ExecuteCommandConfiguration&& value) { SetExecuteCommandConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the managed storage configuration.</p>
     */
    inline const ManagedStorageConfiguration& GetManagedStorageConfiguration() const{ return m_managedStorageConfiguration; }
    inline bool ManagedStorageConfigurationHasBeenSet() const { return m_managedStorageConfigurationHasBeenSet; }
    inline void SetManagedStorageConfiguration(const ManagedStorageConfiguration& value) { m_managedStorageConfigurationHasBeenSet = true; m_managedStorageConfiguration = value; }
    inline void SetManagedStorageConfiguration(ManagedStorageConfiguration&& value) { m_managedStorageConfigurationHasBeenSet = true; m_managedStorageConfiguration = std::move(value); }
    inline ClusterConfiguration& WithManagedStorageConfiguration(const ManagedStorageConfiguration& value) { SetManagedStorageConfiguration(value); return *this;}
    inline ClusterConfiguration& WithManagedStorageConfiguration(ManagedStorageConfiguration&& value) { SetManagedStorageConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ExecuteCommandConfiguration m_executeCommandConfiguration;
    bool m_executeCommandConfigurationHasBeenSet = false;

    ManagedStorageConfiguration m_managedStorageConfiguration;
    bool m_managedStorageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
