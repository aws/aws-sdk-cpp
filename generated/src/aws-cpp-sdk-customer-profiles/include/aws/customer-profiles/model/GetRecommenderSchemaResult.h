/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderSchemaField.h>
#include <aws/customer-profiles/model/RecommenderSchemaStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetRecommenderSchemaResult {
 public:
  AWS_CUSTOMERPROFILES_API GetRecommenderSchemaResult() = default;
  AWS_CUSTOMERPROFILES_API GetRecommenderSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetRecommenderSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the recommender schema.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  GetRecommenderSchemaResult& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of dataset type to column definitions included in the schema.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>& GetFields() const { return m_fields; }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  GetRecommenderSchemaResult& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsKeyT = Aws::String, typename FieldsValueT = Aws::Vector<RecommenderSchemaField>>
  GetRecommenderSchemaResult& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the recommender schema was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRecommenderSchemaResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the recommender schema.</p>
   */
  inline RecommenderSchemaStatus GetStatus() const { return m_status; }
  inline void SetStatus(RecommenderSchemaStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRecommenderSchemaResult& WithStatus(RecommenderSchemaStatus value) {
    SetStatus(value);
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
  GetRecommenderSchemaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recommenderSchemaName;

  Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>> m_fields;

  Aws::Utils::DateTime m_createdAt{};

  RecommenderSchemaStatus m_status{RecommenderSchemaStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recommenderSchemaNameHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
