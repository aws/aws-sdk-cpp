/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DataSourceConfigurationInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnableSetting.h>
#include <aws/datazone/model/RecommendationConfiguration.h>
#include <aws/datazone/model/ScheduleConfiguration.h>
#include <aws/datazone/model/FormInput.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::Vector<FormInput>& GetAssetFormsInput() const{ return m_assetFormsInput; }

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool AssetFormsInputHasBeenSet() const { return m_assetFormsInputHasBeenSet; }

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetAssetFormsInput(const Aws::Vector<FormInput>& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput = value; }

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetAssetFormsInput(Aws::Vector<FormInput>&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput = std::move(value); }

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithAssetFormsInput(const Aws::Vector<FormInput>& value) { SetAssetFormsInput(value); return *this;}

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithAssetFormsInput(Aws::Vector<FormInput>&& value) { SetAssetFormsInput(std::move(value)); return *this;}

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& AddAssetFormsInput(const FormInput& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput.push_back(value); return *this; }

    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& AddAssetFormsInput(FormInput&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const DataSourceConfigurationInput& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetConfiguration(const DataSourceConfigurationInput& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetConfiguration(DataSourceConfigurationInput&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithConfiguration(const DataSourceConfigurationInput& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithConfiguration(DataSourceConfigurationInput&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline UpdateDataSourceRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline UpdateDataSourceRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline UpdateDataSourceRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const EnableSetting& GetEnableSetting() const{ return m_enableSetting; }

    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool EnableSettingHasBeenSet() const { return m_enableSettingHasBeenSet; }

    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetEnableSetting(const EnableSetting& value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }

    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetEnableSetting(EnableSetting&& value) { m_enableSettingHasBeenSet = true; m_enableSetting = std::move(value); }

    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithEnableSetting(const EnableSetting& value) { SetEnableSetting(value); return *this;}

    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithEnableSetting(EnableSetting&& value) { SetEnableSetting(std::move(value)); return *this;}


    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline UpdateDataSourceRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline UpdateDataSourceRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline UpdateDataSourceRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The publish on import setting to be updated as part of the
     * <code>UpdateDataSource</code> action.</p>
     */
    inline bool GetPublishOnImport() const{ return m_publishOnImport; }

    /**
     * <p>The publish on import setting to be updated as part of the
     * <code>UpdateDataSource</code> action.</p>
     */
    inline bool PublishOnImportHasBeenSet() const { return m_publishOnImportHasBeenSet; }

    /**
     * <p>The publish on import setting to be updated as part of the
     * <code>UpdateDataSource</code> action.</p>
     */
    inline void SetPublishOnImport(bool value) { m_publishOnImportHasBeenSet = true; m_publishOnImport = value; }

    /**
     * <p>The publish on import setting to be updated as part of the
     * <code>UpdateDataSource</code> action.</p>
     */
    inline UpdateDataSourceRequest& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}


    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const RecommendationConfiguration& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetRecommendation(const RecommendationConfiguration& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetRecommendation(RecommendationConfiguration&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithRecommendation(const RecommendationConfiguration& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithRecommendation(RecommendationConfiguration&& value) { SetRecommendation(std::move(value)); return *this;}


    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetSchedule(const ScheduleConfiguration& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline void SetSchedule(ScheduleConfiguration&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithSchedule(const ScheduleConfiguration& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline UpdateDataSourceRequest& WithSchedule(ScheduleConfiguration&& value) { SetSchedule(std::move(value)); return *this;}

  private:

    Aws::Vector<FormInput> m_assetFormsInput;
    bool m_assetFormsInputHasBeenSet = false;

    DataSourceConfigurationInput m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    EnableSetting m_enableSetting;
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_publishOnImport;
    bool m_publishOnImportHasBeenSet = false;

    RecommendationConfiguration m_recommendation;
    bool m_recommendationHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
