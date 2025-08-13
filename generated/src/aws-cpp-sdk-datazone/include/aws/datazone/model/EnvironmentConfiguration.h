/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/AwsAccount.h>
#include <aws/datazone/model/Region.h>
#include <aws/datazone/model/EnvironmentConfigurationParametersDetails.h>
#include <aws/datazone/model/DeploymentMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration of an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfiguration">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfiguration
  {
  public:
    AWS_DATAZONE_API EnvironmentConfiguration() = default;
    AWS_DATAZONE_API EnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account pools used by a custom project profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountPools() const { return m_accountPools; }
    inline bool AccountPoolsHasBeenSet() const { return m_accountPoolsHasBeenSet; }
    template<typename AccountPoolsT = Aws::Vector<Aws::String>>
    void SetAccountPools(AccountPoolsT&& value) { m_accountPoolsHasBeenSet = true; m_accountPools = std::forward<AccountPoolsT>(value); }
    template<typename AccountPoolsT = Aws::Vector<Aws::String>>
    EnvironmentConfiguration& WithAccountPools(AccountPoolsT&& value) { SetAccountPools(std::forward<AccountPoolsT>(value)); return *this;}
    template<typename AccountPoolsT = Aws::String>
    EnvironmentConfiguration& AddAccountPools(AccountPoolsT&& value) { m_accountPoolsHasBeenSet = true; m_accountPools.emplace_back(std::forward<AccountPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account of the environment.</p>
     */
    inline const AwsAccount& GetAwsAccount() const { return m_awsAccount; }
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }
    template<typename AwsAccountT = AwsAccount>
    void SetAwsAccount(AwsAccountT&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::forward<AwsAccountT>(value); }
    template<typename AwsAccountT = AwsAccount>
    EnvironmentConfiguration& WithAwsAccount(AwsAccountT&& value) { SetAwsAccount(std::forward<AwsAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the environment.</p>
     */
    inline const Region& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Region>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Region>
    EnvironmentConfiguration& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters of the environment.</p>
     */
    inline const EnvironmentConfigurationParametersDetails& GetConfigurationParameters() const { return m_configurationParameters; }
    inline bool ConfigurationParametersHasBeenSet() const { return m_configurationParametersHasBeenSet; }
    template<typename ConfigurationParametersT = EnvironmentConfigurationParametersDetails>
    void SetConfigurationParameters(ConfigurationParametersT&& value) { m_configurationParametersHasBeenSet = true; m_configurationParameters = std::forward<ConfigurationParametersT>(value); }
    template<typename ConfigurationParametersT = EnvironmentConfigurationParametersDetails>
    EnvironmentConfiguration& WithConfigurationParameters(ConfigurationParametersT&& value) { SetConfigurationParameters(std::forward<ConfigurationParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mode of the environment.</p>
     */
    inline DeploymentMode GetDeploymentMode() const { return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(DeploymentMode value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline EnvironmentConfiguration& WithDeploymentMode(DeploymentMode value) { SetDeploymentMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment order of the environment.</p>
     */
    inline int GetDeploymentOrder() const { return m_deploymentOrder; }
    inline bool DeploymentOrderHasBeenSet() const { return m_deploymentOrderHasBeenSet; }
    inline void SetDeploymentOrder(int value) { m_deploymentOrderHasBeenSet = true; m_deploymentOrder = value; }
    inline EnvironmentConfiguration& WithDeploymentOrder(int value) { SetDeploymentOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EnvironmentConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment blueprint ID.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const { return m_environmentBlueprintId; }
    inline bool EnvironmentBlueprintIdHasBeenSet() const { return m_environmentBlueprintIdHasBeenSet; }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    void SetEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::forward<EnvironmentBlueprintIdT>(value); }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    EnvironmentConfiguration& WithEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { SetEnvironmentBlueprintId(std::forward<EnvironmentBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EnvironmentConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EnvironmentConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountPools;
    bool m_accountPoolsHasBeenSet = false;

    AwsAccount m_awsAccount;
    bool m_awsAccountHasBeenSet = false;

    Region m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    EnvironmentConfigurationParametersDetails m_configurationParameters;
    bool m_configurationParametersHasBeenSet = false;

    DeploymentMode m_deploymentMode{DeploymentMode::NOT_SET};
    bool m_deploymentModeHasBeenSet = false;

    int m_deploymentOrder{0};
    bool m_deploymentOrderHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentBlueprintId;
    bool m_environmentBlueprintIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
