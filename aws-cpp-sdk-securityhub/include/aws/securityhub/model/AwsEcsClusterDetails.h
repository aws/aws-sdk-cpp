/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsClusterConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsClusterClusterSettingsDetails.h>
#include <aws/securityhub/model/AwsEcsClusterDefaultCapacityProviderStrategyDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Amazon ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterDetails();
    AWS_SECURITYHUB_API AwsEcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">
     * <code>ListServices</code> </a> API operation. </p>
     */
    inline int GetActiveServicesCount() const{ return m_activeServicesCount; }

    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">
     * <code>ListServices</code> </a> API operation. </p>
     */
    inline bool ActiveServicesCountHasBeenSet() const { return m_activeServicesCountHasBeenSet; }

    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">
     * <code>ListServices</code> </a> API operation. </p>
     */
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }

    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">
     * <code>ListServices</code> </a> API operation. </p>
     */
    inline AwsEcsClusterDetails& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}


    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const{ return m_capacityProviders; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline void SetCapacityProviders(const Aws::Vector<Aws::String>& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = value; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline void SetCapacityProviders(Aws::Vector<Aws::String>&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::move(value); }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline AwsEcsClusterDetails& WithCapacityProviders(const Aws::Vector<Aws::String>& value) { SetCapacityProviders(value); return *this;}

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline AwsEcsClusterDetails& WithCapacityProviders(Aws::Vector<Aws::String>&& value) { SetCapacityProviders(std::move(value)); return *this;}

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline AwsEcsClusterDetails& AddCapacityProviders(const Aws::String& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline AwsEcsClusterDetails& AddCapacityProviders(Aws::String&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline AwsEcsClusterDetails& AddCapacityProviders(const char* value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }


    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline const Aws::Vector<AwsEcsClusterClusterSettingsDetails>& GetClusterSettings() const{ return m_clusterSettings; }

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline bool ClusterSettingsHasBeenSet() const { return m_clusterSettingsHasBeenSet; }

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline void SetClusterSettings(const Aws::Vector<AwsEcsClusterClusterSettingsDetails>& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings = value; }

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline void SetClusterSettings(Aws::Vector<AwsEcsClusterClusterSettingsDetails>&& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings = std::move(value); }

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline AwsEcsClusterDetails& WithClusterSettings(const Aws::Vector<AwsEcsClusterClusterSettingsDetails>& value) { SetClusterSettings(value); return *this;}

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline AwsEcsClusterDetails& WithClusterSettings(Aws::Vector<AwsEcsClusterClusterSettingsDetails>&& value) { SetClusterSettings(std::move(value)); return *this;}

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline AwsEcsClusterDetails& AddClusterSettings(const AwsEcsClusterClusterSettingsDetails& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings.push_back(value); return *this; }

    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline AwsEcsClusterDetails& AddClusterSettings(AwsEcsClusterClusterSettingsDetails&& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline const AwsEcsClusterConfigurationDetails& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline void SetConfiguration(const AwsEcsClusterConfigurationDetails& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline void SetConfiguration(AwsEcsClusterConfigurationDetails&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline AwsEcsClusterDetails& WithConfiguration(const AwsEcsClusterConfigurationDetails& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline AwsEcsClusterDetails& WithConfiguration(AwsEcsClusterConfigurationDetails&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline const Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>& GetDefaultCapacityProviderStrategy() const{ return m_defaultCapacityProviderStrategy; }

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(const Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = value; }

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::move(value); }

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline AwsEcsClusterDetails& WithDefaultCapacityProviderStrategy(const Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>& value) { SetDefaultCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline AwsEcsClusterDetails& WithDefaultCapacityProviderStrategy(Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>&& value) { SetDefaultCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline AwsEcsClusterDetails& AddDefaultCapacityProviderStrategy(const AwsEcsClusterDefaultCapacityProviderStrategyDetails& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline AwsEcsClusterDetails& AddDefaultCapacityProviderStrategy(AwsEcsClusterDefaultCapacityProviderStrategyDetails&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline AwsEcsClusterDetails& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status. </p>
     */
    inline int GetRegisteredContainerInstancesCount() const{ return m_registeredContainerInstancesCount; }

    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status. </p>
     */
    inline bool RegisteredContainerInstancesCountHasBeenSet() const { return m_registeredContainerInstancesCountHasBeenSet; }

    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status. </p>
     */
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }

    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status. </p>
     */
    inline AwsEcsClusterDetails& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}


    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state. </p>
     */
    inline int GetRunningTasksCount() const{ return m_runningTasksCount; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state. </p>
     */
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state. </p>
     */
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }

    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state. </p>
     */
    inline AwsEcsClusterDetails& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}


    /**
     * <p>The status of the cluster. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the cluster. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the cluster. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the cluster. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the cluster. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cluster. </p>
     */
    inline AwsEcsClusterDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_activeServicesCount;
    bool m_activeServicesCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<AwsEcsClusterClusterSettingsDetails> m_clusterSettings;
    bool m_clusterSettingsHasBeenSet = false;

    AwsEcsClusterConfigurationDetails m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    int m_registeredContainerInstancesCount;
    bool m_registeredContainerInstancesCountHasBeenSet = false;

    int m_runningTasksCount;
    bool m_runningTasksCountHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
