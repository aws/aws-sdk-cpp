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
    AWS_DATAZONE_API UpdateDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The asset forms to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::Vector<FormInput>& GetAssetFormsInput() const { return m_assetFormsInput; }
    inline bool AssetFormsInputHasBeenSet() const { return m_assetFormsInputHasBeenSet; }
    template<typename AssetFormsInputT = Aws::Vector<FormInput>>
    void SetAssetFormsInput(AssetFormsInputT&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput = std::forward<AssetFormsInputT>(value); }
    template<typename AssetFormsInputT = Aws::Vector<FormInput>>
    UpdateDataSourceRequest& WithAssetFormsInput(AssetFormsInputT&& value) { SetAssetFormsInput(std::forward<AssetFormsInputT>(value)); return *this;}
    template<typename AssetFormsInputT = FormInput>
    UpdateDataSourceRequest& AddAssetFormsInput(AssetFormsInputT&& value) { m_assetFormsInputHasBeenSet = true; m_assetFormsInput.emplace_back(std::forward<AssetFormsInputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const DataSourceConfigurationInput& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = DataSourceConfigurationInput>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DataSourceConfigurationInput>
    UpdateDataSourceRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDataSourceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain in which to update a data source.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    UpdateDataSourceRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enable setting to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline EnableSetting GetEnableSetting() const { return m_enableSetting; }
    inline bool EnableSettingHasBeenSet() const { return m_enableSettingHasBeenSet; }
    inline void SetEnableSetting(EnableSetting value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }
    inline UpdateDataSourceRequest& WithEnableSetting(EnableSetting value) { SetEnableSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateDataSourceRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publish on import setting to be updated as part of the
     * <code>UpdateDataSource</code> action.</p>
     */
    inline bool GetPublishOnImport() const { return m_publishOnImport; }
    inline bool PublishOnImportHasBeenSet() const { return m_publishOnImportHasBeenSet; }
    inline void SetPublishOnImport(bool value) { m_publishOnImportHasBeenSet = true; m_publishOnImport = value; }
    inline UpdateDataSourceRequest& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const RecommendationConfiguration& GetRecommendation() const { return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    template<typename RecommendationT = RecommendationConfiguration>
    void SetRecommendation(RecommendationT&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::forward<RecommendationT>(value); }
    template<typename RecommendationT = RecommendationConfiguration>
    UpdateDataSourceRequest& WithRecommendation(RecommendationT&& value) { SetRecommendation(std::forward<RecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the granted permissions are retained in case of a
     * self-subscribe functionality failure for a data source.</p>
     */
    inline bool GetRetainPermissionsOnRevokeFailure() const { return m_retainPermissionsOnRevokeFailure; }
    inline bool RetainPermissionsOnRevokeFailureHasBeenSet() const { return m_retainPermissionsOnRevokeFailureHasBeenSet; }
    inline void SetRetainPermissionsOnRevokeFailure(bool value) { m_retainPermissionsOnRevokeFailureHasBeenSet = true; m_retainPermissionsOnRevokeFailure = value; }
    inline UpdateDataSourceRequest& WithRetainPermissionsOnRevokeFailure(bool value) { SetRetainPermissionsOnRevokeFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule to be updated as part of the <code>UpdateDataSource</code>
     * action.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = ScheduleConfiguration>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = ScheduleConfiguration>
    UpdateDataSourceRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FormInput> m_assetFormsInput;
    bool m_assetFormsInputHasBeenSet = false;

    DataSourceConfigurationInput m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    EnableSetting m_enableSetting{EnableSetting::NOT_SET};
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_publishOnImport{false};
    bool m_publishOnImportHasBeenSet = false;

    RecommendationConfiguration m_recommendation;
    bool m_recommendationHasBeenSet = false;

    bool m_retainPermissionsOnRevokeFailure{false};
    bool m_retainPermissionsOnRevokeFailureHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
