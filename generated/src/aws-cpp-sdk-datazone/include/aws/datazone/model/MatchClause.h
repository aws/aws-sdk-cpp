/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/EntityPattern.h>
#include <aws/datazone/model/RelationPattern.h>

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
 * <p>A clause to match a query pattern</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MatchClause">AWS
 * API Reference</a></p>
 */
class MatchClause {
 public:
  AWS_DATAZONE_API MatchClause() = default;
  AWS_DATAZONE_API MatchClause(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API MatchClause& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pattern describing the query's relational traversal.</p>
   */
  inline const RelationPattern& GetRelationPattern() const { return m_relationPattern; }
  inline bool RelationPatternHasBeenSet() const { return m_relationPatternHasBeenSet; }
  template <typename RelationPatternT = RelationPattern>
  void SetRelationPattern(RelationPatternT&& value) {
    m_relationPatternHasBeenSet = true;
    m_relationPattern = std::forward<RelationPatternT>(value);
  }
  template <typename RelationPatternT = RelationPattern>
  MatchClause& WithRelationPattern(RelationPatternT&& value) {
    SetRelationPattern(std::forward<RelationPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pattern describing the entities for the query to traverse.</p>
   */
  inline const EntityPattern& GetEntityPattern() const { return m_entityPattern; }
  inline bool EntityPatternHasBeenSet() const { return m_entityPatternHasBeenSet; }
  template <typename EntityPatternT = EntityPattern>
  void SetEntityPattern(EntityPatternT&& value) {
    m_entityPatternHasBeenSet = true;
    m_entityPattern = std::forward<EntityPatternT>(value);
  }
  template <typename EntityPatternT = EntityPattern>
  MatchClause& WithEntityPattern(EntityPatternT&& value) {
    SetEntityPattern(std::forward<EntityPatternT>(value));
    return *this;
  }
  ///@}
 private:
  RelationPattern m_relationPattern;

  EntityPattern m_entityPattern;
  bool m_relationPatternHasBeenSet = false;
  bool m_entityPatternHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
