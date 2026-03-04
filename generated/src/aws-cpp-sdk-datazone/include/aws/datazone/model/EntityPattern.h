/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FilterClause.h>
#include <aws/datazone/model/GraphEntityType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The pattern describing the entities to be matched during the graph
 * query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EntityPattern">AWS
 * API Reference</a></p>
 */
class EntityPattern {
 public:
  AWS_DATAZONE_API EntityPattern() = default;
  AWS_DATAZONE_API EntityPattern(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API EntityPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of entity to be matched during the graph query.</p>
   */
  inline GraphEntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(GraphEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline EntityPattern& WithEntityType(GraphEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the root entity to start traversal from during the graph
   * query.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  EntityPattern& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FilterClause& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = FilterClause>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = FilterClause>
  EntityPattern& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  GraphEntityType m_entityType{GraphEntityType::NOT_SET};

  Aws::String m_identifier;

  FilterClause m_filters;
  bool m_entityTypeHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
