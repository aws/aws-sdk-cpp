/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/MetadataModelReference.h>

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
class DescribeMetadataModelChildrenResult {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelChildrenResult() = default;
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelChildrenResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelChildrenResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specifies the unique pagination token that makes it possible to display the
   * next page of metadata model children. If a marker is returned, there are more
   * metadata model children available.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeMetadataModelChildrenResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of child metadata models.</p>
   */
  inline const Aws::Vector<MetadataModelReference>& GetMetadataModelChildren() const { return m_metadataModelChildren; }
  template <typename MetadataModelChildrenT = Aws::Vector<MetadataModelReference>>
  void SetMetadataModelChildren(MetadataModelChildrenT&& value) {
    m_metadataModelChildrenHasBeenSet = true;
    m_metadataModelChildren = std::forward<MetadataModelChildrenT>(value);
  }
  template <typename MetadataModelChildrenT = Aws::Vector<MetadataModelReference>>
  DescribeMetadataModelChildrenResult& WithMetadataModelChildren(MetadataModelChildrenT&& value) {
    SetMetadataModelChildren(std::forward<MetadataModelChildrenT>(value));
    return *this;
  }
  template <typename MetadataModelChildrenT = MetadataModelReference>
  DescribeMetadataModelChildrenResult& AddMetadataModelChildren(MetadataModelChildrenT&& value) {
    m_metadataModelChildrenHasBeenSet = true;
    m_metadataModelChildren.emplace_back(std::forward<MetadataModelChildrenT>(value));
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
  DescribeMetadataModelChildrenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;

  Aws::Vector<MetadataModelReference> m_metadataModelChildren;

  Aws::String m_requestId;
  bool m_markerHasBeenSet = false;
  bool m_metadataModelChildrenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
