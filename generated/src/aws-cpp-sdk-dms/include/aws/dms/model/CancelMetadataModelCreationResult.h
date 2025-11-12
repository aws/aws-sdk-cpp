/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class CancelMetadataModelCreationResult {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API CancelMetadataModelCreationResult() = default;
  AWS_DATABASEMIGRATIONSERVICE_API CancelMetadataModelCreationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATABASEMIGRATIONSERVICE_API CancelMetadataModelCreationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const SchemaConversionRequest& GetRequest() const { return m_request; }
  template <typename RequestT = SchemaConversionRequest>
  void SetRequest(RequestT&& value) {
    m_requestHasBeenSet = true;
    m_request = std::forward<RequestT>(value);
  }
  template <typename RequestT = SchemaConversionRequest>
  CancelMetadataModelCreationResult& WithRequest(RequestT&& value) {
    SetRequest(std::forward<RequestT>(value));
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
  CancelMetadataModelCreationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  SchemaConversionRequest m_request;
  bool m_requestHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
