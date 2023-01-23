/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/EndpointSetting.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class DescribeEndpointSettingsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEndpointSettingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEndpointSettingsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEndpointSettingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline const Aws::Vector<EndpointSetting>& GetEndpointSettings() const{ return m_endpointSettings; }

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline void SetEndpointSettings(const Aws::Vector<EndpointSetting>& value) { m_endpointSettings = value; }

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline void SetEndpointSettings(Aws::Vector<EndpointSetting>&& value) { m_endpointSettings = std::move(value); }

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline DescribeEndpointSettingsResult& WithEndpointSettings(const Aws::Vector<EndpointSetting>& value) { SetEndpointSettings(value); return *this;}

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline DescribeEndpointSettingsResult& WithEndpointSettings(Aws::Vector<EndpointSetting>&& value) { SetEndpointSettings(std::move(value)); return *this;}

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline DescribeEndpointSettingsResult& AddEndpointSettings(const EndpointSetting& value) { m_endpointSettings.push_back(value); return *this; }

    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline DescribeEndpointSettingsResult& AddEndpointSettings(EndpointSetting&& value) { m_endpointSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::Vector<EndpointSetting> m_endpointSettings;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
