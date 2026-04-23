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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SupportedEndpointType">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType
  {
  public:
    SupportedEndpointType();
    SupportedEndpointType(Aws::Utils::Json::JsonView jsonValue);
    SupportedEndpointType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline SupportedEndpointType& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline SupportedEndpointType& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The database engine name. Valid values, depending on the EndPointType,
     * include mysql, oracle, postgres, mariadb, aurora, aurora-postgresql, redshift,
     * s3, db2, azuredb, sybase, sybase, dynamodb, mongodb, and sqlserver.</p>
     */
    inline SupportedEndpointType& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Indicates if Change Data Capture (CDC) is supported.</p>
     */
    inline bool GetSupportsCDC() const{ return m_supportsCDC; }

    /**
     * <p>Indicates if Change Data Capture (CDC) is supported.</p>
     */
    inline bool SupportsCDCHasBeenSet() const { return m_supportsCDCHasBeenSet; }

    /**
     * <p>Indicates if Change Data Capture (CDC) is supported.</p>
     */
    inline void SetSupportsCDC(bool value) { m_supportsCDCHasBeenSet = true; m_supportsCDC = value; }

    /**
     * <p>Indicates if Change Data Capture (CDC) is supported.</p>
     */
    inline SupportedEndpointType& WithSupportsCDC(bool value) { SetSupportsCDC(value); return *this;}


    /**
     * <p>The type of endpoint.</p>
     */
    inline const ReplicationEndpointTypeValue& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint.</p>
     */
    inline SupportedEndpointType& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline SupportedEndpointType& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline const Aws::String& GetEngineDisplayName() const{ return m_engineDisplayName; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(const Aws::String& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = value; }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(Aws::String&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::move(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline void SetEngineDisplayName(const char* value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName.assign(value); }

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(const Aws::String& value) { SetEngineDisplayName(value); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(Aws::String&& value) { SetEngineDisplayName(std::move(value)); return *this;}

    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora," this value would be "Amazon
     * Aurora MySQL."</p>
     */
    inline SupportedEndpointType& WithEngineDisplayName(const char* value) { SetEngineDisplayName(value); return *this;}

  private:

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    bool m_supportsCDC;
    bool m_supportsCDCHasBeenSet;

    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
