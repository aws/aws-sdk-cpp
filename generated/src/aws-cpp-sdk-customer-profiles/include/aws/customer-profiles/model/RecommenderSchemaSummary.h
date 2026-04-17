/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderSchemaField.h>
#include <aws/customer-profiles/model/RecommenderSchemaStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Provides a summary of a recommender schema's configuration and current
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderSchemaSummary">AWS
 * API Reference</a></p>
 */
class RecommenderSchemaSummary {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderSchemaSummary() = default;
  AWS_CUSTOMERPROFILES_API RecommenderSchemaSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderSchemaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommender schema.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  inline bool RecommenderSchemaNameHasBeenSet() const { return m_recommenderSchemaNameHasBeenSet; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  RecommenderSchemaSummary& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of dataset type to column definitions included in the schema.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  RecommenderSchemaSummary& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsKeyT = Aws::String, typename FieldsValueT = Aws::Vector<RecommenderSchemaField>>
  RecommenderSchemaSummary& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommender schema was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RecommenderSchemaSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current operational status of the recommender schema.</p>
   */
  inline RecommenderSchemaStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommenderSchemaStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecommenderSchemaSummary& WithStatus(RecommenderSchemaStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommenderSchemaName;

  Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>> m_fields;

  Aws::Utils::DateTime m_createdAt{};

  RecommenderSchemaStatus m_status{RecommenderSchemaStatus::NOT_SET};
  bool m_recommenderSchemaNameHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
