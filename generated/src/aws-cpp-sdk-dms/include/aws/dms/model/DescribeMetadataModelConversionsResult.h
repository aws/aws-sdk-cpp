/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SchemaConversionRequest.h>
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
  class DescribeMetadataModelConversionsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelConversionsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelConversionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelConversionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeMetadataModelConversionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paginated list of metadata model conversions.</p>
     */
    inline const Aws::Vector<SchemaConversionRequest>& GetRequests() const { return m_requests; }
    template<typename RequestsT = Aws::Vector<SchemaConversionRequest>>
    void SetRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests = std::forward<RequestsT>(value); }
    template<typename RequestsT = Aws::Vector<SchemaConversionRequest>>
    DescribeMetadataModelConversionsResult& WithRequests(RequestsT&& value) { SetRequests(std::forward<RequestsT>(value)); return *this;}
    template<typename RequestsT = SchemaConversionRequest>
    DescribeMetadataModelConversionsResult& AddRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests.emplace_back(std::forward<RequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMetadataModelConversionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<SchemaConversionRequest> m_requests;
    bool m_requestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
