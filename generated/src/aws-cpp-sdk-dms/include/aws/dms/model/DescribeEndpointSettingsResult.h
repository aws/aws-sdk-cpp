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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEndpointSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeEndpointSettingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptions of the endpoint settings available for your source or target
     * database engine.</p>
     */
    inline const Aws::Vector<EndpointSetting>& GetEndpointSettings() const { return m_endpointSettings; }
    template<typename EndpointSettingsT = Aws::Vector<EndpointSetting>>
    void SetEndpointSettings(EndpointSettingsT&& value) { m_endpointSettingsHasBeenSet = true; m_endpointSettings = std::forward<EndpointSettingsT>(value); }
    template<typename EndpointSettingsT = Aws::Vector<EndpointSetting>>
    DescribeEndpointSettingsResult& WithEndpointSettings(EndpointSettingsT&& value) { SetEndpointSettings(std::forward<EndpointSettingsT>(value)); return *this;}
    template<typename EndpointSettingsT = EndpointSetting>
    DescribeEndpointSettingsResult& AddEndpointSettings(EndpointSettingsT&& value) { m_endpointSettingsHasBeenSet = true; m_endpointSettings.emplace_back(std::forward<EndpointSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<EndpointSetting> m_endpointSettings;
    bool m_endpointSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
