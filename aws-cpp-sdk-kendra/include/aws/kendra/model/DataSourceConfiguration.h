/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/S3DataSourceConfiguration.h>
#include <aws/kendra/model/SharePointConfiguration.h>
#include <aws/kendra/model/DatabaseConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Configuration information for a Amazon Kendra data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DataSourceConfiguration
  {
  public:
    DataSourceConfiguration();
    DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline const S3DataSourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Configuration(const S3DataSourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Configuration(S3DataSourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(const S3DataSourceConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Provides information to create a connector for a document repository in an
     * Amazon S3 bucket.</p>
     */
    inline DataSourceConfiguration& WithS3Configuration(S3DataSourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline const SharePointConfiguration& GetSharePointConfiguration() const{ return m_sharePointConfiguration; }

    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline bool SharePointConfigurationHasBeenSet() const { return m_sharePointConfigurationHasBeenSet; }

    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline void SetSharePointConfiguration(const SharePointConfiguration& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = value; }

    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline void SetSharePointConfiguration(SharePointConfiguration&& value) { m_sharePointConfigurationHasBeenSet = true; m_sharePointConfiguration = std::move(value); }

    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(const SharePointConfiguration& value) { SetSharePointConfiguration(value); return *this;}

    /**
     * <p>Provides information necessary to create a connector for a Microsoft
     * SharePoint site.</p>
     */
    inline DataSourceConfiguration& WithSharePointConfiguration(SharePointConfiguration&& value) { SetSharePointConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline const DatabaseConfiguration& GetDatabaseConfiguration() const{ return m_databaseConfiguration; }

    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline bool DatabaseConfigurationHasBeenSet() const { return m_databaseConfigurationHasBeenSet; }

    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline void SetDatabaseConfiguration(const DatabaseConfiguration& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = value; }

    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline void SetDatabaseConfiguration(DatabaseConfiguration&& value) { m_databaseConfigurationHasBeenSet = true; m_databaseConfiguration = std::move(value); }

    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(const DatabaseConfiguration& value) { SetDatabaseConfiguration(value); return *this;}

    /**
     * <p>Provides information necessary to create a connector for a database.</p>
     */
    inline DataSourceConfiguration& WithDatabaseConfiguration(DatabaseConfiguration&& value) { SetDatabaseConfiguration(std::move(value)); return *this;}

  private:

    S3DataSourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet;

    SharePointConfiguration m_sharePointConfiguration;
    bool m_sharePointConfigurationHasBeenSet;

    DatabaseConfiguration m_databaseConfiguration;
    bool m_databaseConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
