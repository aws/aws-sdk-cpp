/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
    AWS_DATAZONE_API EnvironmentConfiguration();
    AWS_DATAZONE_API EnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account of the environment.</p>
     */
    inline const AwsAccount& GetAwsAccount() const{ return m_awsAccount; }
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }
    inline void SetAwsAccount(const AwsAccount& value) { m_awsAccountHasBeenSet = true; m_awsAccount = value; }
    inline void SetAwsAccount(AwsAccount&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::move(value); }
    inline EnvironmentConfiguration& WithAwsAccount(const AwsAccount& value) { SetAwsAccount(value); return *this;}
    inline EnvironmentConfiguration& WithAwsAccount(AwsAccount&& value) { SetAwsAccount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the environment.</p>
     */
    inline const Region& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Region& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Region&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline EnvironmentConfiguration& WithAwsRegion(const Region& value) { SetAwsRegion(value); return *this;}
    inline EnvironmentConfiguration& WithAwsRegion(Region&& value) { SetAwsRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters of the environment.</p>
     */
    inline const EnvironmentConfigurationParametersDetails& GetConfigurationParameters() const{ return m_configurationParameters; }
    inline bool ConfigurationParametersHasBeenSet() const { return m_configurationParametersHasBeenSet; }
    inline void SetConfigurationParameters(const EnvironmentConfigurationParametersDetails& value) { m_configurationParametersHasBeenSet = true; m_configurationParameters = value; }
    inline void SetConfigurationParameters(EnvironmentConfigurationParametersDetails&& value) { m_configurationParametersHasBeenSet = true; m_configurationParameters = std::move(value); }
    inline EnvironmentConfiguration& WithConfigurationParameters(const EnvironmentConfigurationParametersDetails& value) { SetConfigurationParameters(value); return *this;}
    inline EnvironmentConfiguration& WithConfigurationParameters(EnvironmentConfigurationParametersDetails&& value) { SetConfigurationParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mode of the environment.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }
    inline EnvironmentConfiguration& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}
    inline EnvironmentConfiguration& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment order of the environment.</p>
     */
    inline int GetDeploymentOrder() const{ return m_deploymentOrder; }
    inline bool DeploymentOrderHasBeenSet() const { return m_deploymentOrderHasBeenSet; }
    inline void SetDeploymentOrder(int value) { m_deploymentOrderHasBeenSet = true; m_deploymentOrder = value; }
    inline EnvironmentConfiguration& WithDeploymentOrder(int value) { SetDeploymentOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EnvironmentConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EnvironmentConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EnvironmentConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment blueprint ID.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }
    inline bool EnvironmentBlueprintIdHasBeenSet() const { return m_environmentBlueprintIdHasBeenSet; }
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = value; }
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::move(value); }
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId.assign(value); }
    inline EnvironmentConfiguration& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}
    inline EnvironmentConfiguration& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}
    inline EnvironmentConfiguration& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EnvironmentConfiguration& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EnvironmentConfiguration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EnvironmentConfiguration& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    AwsAccount m_awsAccount;
    bool m_awsAccountHasBeenSet = false;

    Region m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    EnvironmentConfigurationParametersDetails m_configurationParameters;
    bool m_configurationParametersHasBeenSet = false;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet = false;

    int m_deploymentOrder;
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
