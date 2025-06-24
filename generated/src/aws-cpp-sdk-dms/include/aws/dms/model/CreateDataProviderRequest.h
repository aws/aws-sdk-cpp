/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DataProviderSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class CreateDataProviderRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateDataProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataProvider"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const { return m_dataProviderName; }
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }
    template<typename DataProviderNameT = Aws::String>
    void SetDataProviderName(DataProviderNameT&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::forward<DataProviderNameT>(value); }
    template<typename DataProviderNameT = Aws::String>
    CreateDataProviderRequest& WithDataProviderName(DataProviderNameT&& value) { SetDataProviderName(std::forward<DataProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataProviderRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>,
     * <code>db2</code>, <code>db2-zos</code> and <code>docdb</code>. A value of
     * <code>"aurora"</code> represents Amazon Aurora MySQL-Compatible Edition.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateDataProviderRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data provider is virtual.</p>
     */
    inline bool GetVirtual() const { return m_virtual; }
    inline bool VirtualHasBeenSet() const { return m_virtualHasBeenSet; }
    inline void SetVirtual(bool value) { m_virtualHasBeenSet = true; m_virtual = value; }
    inline CreateDataProviderRequest& WithVirtual(bool value) { SetVirtual(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline const DataProviderSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = DataProviderSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = DataProviderSettings>
    CreateDataProviderRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataProviderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataProviderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    bool m_virtual{false};
    bool m_virtualHasBeenSet = false;

    DataProviderSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
