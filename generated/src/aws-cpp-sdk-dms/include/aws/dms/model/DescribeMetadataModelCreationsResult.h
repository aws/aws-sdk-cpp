/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/SchemaConversionRequest.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {
class DescribeMetadataModelCreationsResult {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelCreationsResult() = default;
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelCreationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelCreationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specifies the unique pagination token that makes it possible to display the
   * next page of metadata model creation requests. If Marker is returned, there are
   * more metadata model creation requests available.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeMetadataModelCreationsResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of metadata model creation requests. The ExportSqlDetails field will
   * never be populated for the DescribeMetadataModelCreations operation.</p>
   */
  inline const Aws::Vector<SchemaConversionRequest>& GetRequests() const { return m_requests; }
  template <typename RequestsT = Aws::Vector<SchemaConversionRequest>>
  void SetRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests = std::forward<RequestsT>(value);
  }
  template <typename RequestsT = Aws::Vector<SchemaConversionRequest>>
  DescribeMetadataModelCreationsResult& WithRequests(RequestsT&& value) {
    SetRequests(std::forward<RequestsT>(value));
    return *this;
  }
  template <typename RequestsT = SchemaConversionRequest>
  DescribeMetadataModelCreationsResult& AddRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests.emplace_back(std::forward<RequestsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeMetadataModelCreationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;

  Aws::Vector<SchemaConversionRequest> m_requests;

  Aws::String m_requestId;
  bool m_markerHasBeenSet = false;
  bool m_requestsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
