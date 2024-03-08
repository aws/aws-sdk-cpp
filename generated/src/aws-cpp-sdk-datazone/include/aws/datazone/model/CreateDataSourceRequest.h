/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceConfigurationInput.h>
#include <aws/datazone/model/EnableSetting.h>
#include <aws/datazone/model/RecommendationConfiguration.h>
#include <aws/datazone/model/ScheduleConfiguration.h>
#include <aws/datazone/model/FormInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline const Aws::Vector<FormInput>& GetAssetFormsInput() const{ return m_assetFormsInput; }

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline bool AssetFormsInputHasBeenSet() const { return m_assetFormsInputHasBeenSet; }

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline void SetAssetFormsInput(const Aws::Vector<FormInput>& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput = value; }

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline void SetAssetFormsInput(Aws::Vector<FormInput>&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput = std::move(value); }

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline CreateDataSourceRequest& WithAssetFormsInput(const Aws::Vector<FormInput>& value) { SetAssetFormsInput(value); return *this;}

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline CreateDataSourceRequest& WithAssetFormsInput(Aws::Vector<FormInput>&& value) { SetAssetFormsInput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline CreateDataSourceRequest& AddAssetFormsInput(const FormInput& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput.push_back(value); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the assets that this data
     * source works with.</p>
     */
    inline CreateDataSourceRequest& AddAssetFormsInput(FormInput&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline const DataSourceConfigurationInput& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline void SetConfiguration(const DataSourceConfigurationInput& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline void SetConfiguration(DataSourceConfigurationInput&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(const DataSourceConfigurationInput& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline CreateDataSourceRequest& WithConfiguration(DataSourceConfigurationInput&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline CreateDataSourceRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline CreateDataSourceRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where the data source is created.</p>
     */
    inline CreateDataSourceRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline const EnableSetting& GetEnableSetting() const{ return m_enableSetting; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline bool EnableSettingHasBeenSet() const { return m_enableSettingHasBeenSet; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(const EnableSetting& value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(EnableSetting&& value) { m_enableSettingHasBeenSet = true; m_enableSetting = std::move(value); }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline CreateDataSourceRequest& WithEnableSetting(const EnableSetting& value) { SetEnableSetting(value); return *this;}

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline CreateDataSourceRequest& WithEnableSetting(EnableSetting&& value) { SetEnableSetting(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline CreateDataSourceRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline CreateDataSourceRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project in which you want to add this
     * data source.</p>
     */
    inline CreateDataSourceRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}


    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline bool GetPublishOnImport() const{ return m_publishOnImport; }

    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline bool PublishOnImportHasBeenSet() const { return m_publishOnImportHasBeenSet; }

    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline void SetPublishOnImport(bool value) { m_publishOnImportHasBeenSet = true; m_publishOnImport = value; }

    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline CreateDataSourceRequest& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}


    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline const RecommendationConfiguration& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline void SetRecommendation(const RecommendationConfiguration& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline void SetRecommendation(RecommendationConfiguration&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithRecommendation(const RecommendationConfiguration& value) { SetRecommendation(value); return *this;}

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithRecommendation(RecommendationConfiguration&& value) { SetRecommendation(std::move(value)); return *this;}


    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline void SetSchedule(const ScheduleConfiguration& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline void SetSchedule(ScheduleConfiguration&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline CreateDataSourceRequest& WithSchedule(const ScheduleConfiguration& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline CreateDataSourceRequest& WithSchedule(ScheduleConfiguration&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The type of the data source.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceRequest& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Vector<FormInput> m_assetFormsInput;
    bool m_assetFormsInputHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataSourceConfigurationInput m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    EnableSetting m_enableSetting;
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;

    bool m_publishOnImport;
    bool m_publishOnImportHasBeenSet = false;

    RecommendationConfiguration m_recommendation;
    bool m_recommendationHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
