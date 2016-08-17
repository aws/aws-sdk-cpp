/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType
  {
  public:
    SupportedEndpointType();
    SupportedEndpointType(const Aws::Utils::Json::JsonValue& jsonValue);
    SupportedEndpointType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The database engine name.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The database engine name.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The database engine name.</p>
     */
    inline SupportedEndpointType& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name.</p>
     */
    inline SupportedEndpointType& WithEngineName(Aws::String&& value) { SetEngineName(value); return *this;}

    /**
     * <p>The database engine name.</p>
     */
    inline SupportedEndpointType& WithEngineName(const char* value) { SetEngineName(value); return *this;}

    /**
     * <p>Indicates if Change Data Capture (CDC) is supported.</p>
     */
    inline bool GetSupportsCDC() const{ return m_supportsCDC; }

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
    inline void SetEndpointType(const ReplicationEndpointTypeValue& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline void SetEndpointType(ReplicationEndpointTypeValue&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint.</p>
     */
    inline SupportedEndpointType& WithEndpointType(const ReplicationEndpointTypeValue& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint.</p>
     */
    inline SupportedEndpointType& WithEndpointType(ReplicationEndpointTypeValue&& value) { SetEndpointType(value); return *this;}

  private:
    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;
    bool m_supportsCDC;
    bool m_supportsCDCHasBeenSet;
    ReplicationEndpointTypeValue m_endpointType;
    bool m_endpointTypeHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
