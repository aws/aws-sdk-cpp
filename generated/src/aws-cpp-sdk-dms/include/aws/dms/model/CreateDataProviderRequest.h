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
    AWS_DATABASEMIGRATIONSERVICE_API CreateDataProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataProvider"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const{ return m_dataProviderName; }

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline void SetDataProviderName(const Aws::String& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = value; }

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline void SetDataProviderName(Aws::String&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::move(value); }

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline void SetDataProviderName(const char* value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName.assign(value); }

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDataProviderName(const Aws::String& value) { SetDataProviderName(value); return *this;}

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDataProviderName(Aws::String&& value) { SetDataProviderName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDataProviderName(const char* value) { SetDataProviderName(value); return *this;}


    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline CreateDataProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline CreateDataProviderRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline CreateDataProviderRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>, and
     * <code>docdb</code>. A value of <code>"aurora"</code> represents Amazon Aurora
     * MySQL-Compatible Edition.</p>
     */
    inline CreateDataProviderRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline const DataProviderSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline void SetSettings(const DataProviderSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline void SetSettings(DataProviderSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline CreateDataProviderRequest& WithSettings(const DataProviderSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline CreateDataProviderRequest& WithSettings(DataProviderSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline CreateDataProviderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline CreateDataProviderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline CreateDataProviderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags to be assigned to the data provider.</p>
     */
    inline CreateDataProviderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    DataProviderSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
