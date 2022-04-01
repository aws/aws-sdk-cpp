/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsClusterConfigurationDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>provides details about an ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEcsClusterDetails
  {
  public:
    AwsEcsClusterDetails();
    AwsEcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet;

    Aws::Vector<AwsEcsClusterClusterSettingsDetails> m_clusterSettings;
    bool m_clusterSettingsHasBeenSet;

    AwsEcsClusterConfigurationDetails m_configuration;
    bool m_configurationHasBeenSet;

    Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
