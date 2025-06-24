/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/DataProviderSettings.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a data provider.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataProvider">AWS
   * API Reference</a></p>
   */
  class DataProvider
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const { return m_dataProviderName; }
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }
    template<typename DataProviderNameT = Aws::String>
    void SetDataProviderName(DataProviderNameT&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::forward<DataProviderNameT>(value); }
    template<typename DataProviderNameT = Aws::String>
    DataProvider& WithDataProviderName(DataProviderNameT&& value) { SetDataProviderName(std::forward<DataProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the data
     * provider.</p>
     */
    inline const Aws::String& GetDataProviderArn() const { return m_dataProviderArn; }
    inline bool DataProviderArnHasBeenSet() const { return m_dataProviderArnHasBeenSet; }
    template<typename DataProviderArnT = Aws::String>
    void SetDataProviderArn(DataProviderArnT&& value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn = std::forward<DataProviderArnT>(value); }
    template<typename DataProviderArnT = Aws::String>
    DataProvider& WithDataProviderArn(DataProviderArnT&& value) { SetDataProviderArn(std::forward<DataProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the data provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDataProviderCreationTime() const { return m_dataProviderCreationTime; }
    inline bool DataProviderCreationTimeHasBeenSet() const { return m_dataProviderCreationTimeHasBeenSet; }
    template<typename DataProviderCreationTimeT = Aws::Utils::DateTime>
    void SetDataProviderCreationTime(DataProviderCreationTimeT&& value) { m_dataProviderCreationTimeHasBeenSet = true; m_dataProviderCreationTime = std::forward<DataProviderCreationTimeT>(value); }
    template<typename DataProviderCreationTimeT = Aws::Utils::DateTime>
    DataProvider& WithDataProviderCreationTime(DataProviderCreationTimeT&& value) { SetDataProviderCreationTime(std::forward<DataProviderCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data provider. Descriptions can have up to 31
     * characters. A description can contain only ASCII letters, digits, and hyphens
     * ('-'). Also, it can't end with a hyphen or contain two consecutive hyphens, and
     * can only begin with a letter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataProvider& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    DataProvider& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data provider is virtual.</p>
     */
    inline bool GetVirtual() const { return m_virtual; }
    inline bool VirtualHasBeenSet() const { return m_virtualHasBeenSet; }
    inline void SetVirtual(bool value) { m_virtualHasBeenSet = true; m_virtual = value; }
    inline DataProvider& WithVirtual(bool value) { SetVirtual(value); return *this;}
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
    DataProvider& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_dataProviderArn;
    bool m_dataProviderArnHasBeenSet = false;

    Aws::Utils::DateTime m_dataProviderCreationTime{};
    bool m_dataProviderCreationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    bool m_virtual{false};
    bool m_virtualHasBeenSet = false;

    DataProviderSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
