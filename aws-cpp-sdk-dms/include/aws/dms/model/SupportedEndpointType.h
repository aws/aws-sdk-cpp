/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReplicationEndpointTypeValue.h>
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
   * <p>Provides information about types of supported endpoints in response to a
   * request by the <code>DescribeEndpointTypes</code> operation. This information
   * includes the type of endpoint, the database engine name, and whether change data
   * capture (CDC) is supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SupportedEndpointType">AWS
   * API Reference</a></p>
   */
  class SupportedEndpointType
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType();
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline SupportedEndpointType& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline SupportedEndpointType& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline SupportedEndpointType& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Indicates if change data capture (CDC) is supported.</p>
     */
    inline bool GetSupportsCDC() const{ return m_supportsCDC; }

    /**
     * <p>Indicates if change data capture (CDC) is supported.</p>
     */
    inline bool SupportsCDCHasBeenSet() const { return m_supportsCDCHasBeenSet; }

    /**
     * <p>Indicates if change data capture (CDC) is supported.</p>
     */
    inline void SetSupportsCDC(bool value) { m_supportsCDCHasBeenSet = true; m_supportsCDC = value; }

    /**
     * <p>Indicates if change data capture (CDC) is supported.</p>
     */
    inline SupportedEndpointType& WithSupportsCDC(bool value) { SetSupportsCDC(value); return *this;}


    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline SupportedEndpointType& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline SupportedEndpointType& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline const Aws::String& GetReplicationInstanceEngineMinimumVersion() const{ return m_replicationInstanceEngineMinimumVersion; }

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline bool ReplicationInstanceEngineMinimumVersionHasBeenSet() const { return m_replicationInstanceEngineMinimumVersionHasBeenSet; }

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline void SetReplicationInstanceEngineMinimumVersion(const Aws::String& value) { m_replicationInstanceEngineMinimumVersionHasBeenSet = true; m_replicationInstanceEngineMinimumVersion = value; }

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline void SetReplicationInstanceEngineMinimumVersion(Aws::String&& value) { m_replicationInstanceEngineMinimumVersionHasBeenSet = true; m_replicationInstanceEngineMinimumVersion = std::move(value); }

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline void SetReplicationInstanceEngineMinimumVersion(const char* value) { m_replicationInstanceEngineMinimumVersionHasBeenSet = true; m_replicationInstanceEngineMinimumVersion.assign(value); }

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline SupportedEndpointType& WithReplicationInstanceEngineMinimumVersion(const Aws::String& value) { SetReplicationInstanceEngineMinimumVersion(value); return *this;}

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline SupportedEndpointType& WithReplicationInstanceEngineMinimumVersion(Aws::String&& value) { SetReplicationInstanceEngineMinimumVersion(std::move(value)); return *this;}

    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline SupportedEndpointType& WithReplicationInstanceEngineMinimumVersion(const char* value) { SetReplicationInstanceEngineMinimumVersion(value); return *this;}


    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline const Aws::String& GetEngineDisplayName() const{ return m_engineDisplayName; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline void SetEngineDisplayName(const Aws::String& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = value; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline void SetEngineDisplayName(Aws::String&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::move(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline void SetEngineDisplayName(const char* value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName.assign(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(const Aws::String& value) { SetEngineDisplayName(value); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(Aws::String&& value) { SetEngineDisplayName(std::move(value)); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(const char* value) { SetEngineDisplayName(value); return *this;}

  private:

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    bool m_supportsCDC;
    bool m_supportsCDCHasBeenSet = false;

    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_replicationInstanceEngineMinimumVersion;
    bool m_replicationInstanceEngineMinimumVersionHasBeenSet = false;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
