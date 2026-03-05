/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RelationDirection.h>
#include <aws/datazone/model/RelationType.h>

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
 * <p>The pattern describing the query's relational traversal.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RelationPattern">AWS
 * API Reference</a></p>
 */
class RelationPattern {
 public:
  AWS_DATAZONE_API RelationPattern() = default;
  AWS_DATAZONE_API RelationPattern(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API RelationPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of relation to query.</p>
   */
  inline RelationType GetRelationType() const { return m_relationType; }
  inline bool RelationTypeHasBeenSet() const { return m_relationTypeHasBeenSet; }
  inline void SetRelationType(RelationType value) {
    m_relationTypeHasBeenSet = true;
    m_relationType = value;
  }
  inline RelationPattern& WithRelationType(RelationType value) {
    SetRelationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction to query.</p>
   */
  inline RelationDirection GetRelationDirection() const { return m_relationDirection; }
  inline bool RelationDirectionHasBeenSet() const { return m_relationDirectionHasBeenSet; }
  inline void SetRelationDirection(RelationDirection value) {
    m_relationDirectionHasBeenSet = true;
    m_relationDirection = value;
  }
  inline RelationPattern& WithRelationDirection(RelationDirection value) {
    SetRelationDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of hops to query.</p>
   */
  inline int GetMaxPathLength() const { return m_maxPathLength; }
  inline bool MaxPathLengthHasBeenSet() const { return m_maxPathLengthHasBeenSet; }
  inline void SetMaxPathLength(int value) {
    m_maxPathLengthHasBeenSet = true;
    m_maxPathLength = value;
  }
  inline RelationPattern& WithMaxPathLength(int value) {
    SetMaxPathLength(value);
    return *this;
  }
  ///@}
 private:
  RelationType m_relationType{RelationType::NOT_SET};

  RelationDirection m_relationDirection{RelationDirection::NOT_SET};

  int m_maxPathLength{0};
  bool m_relationTypeHasBeenSet = false;
  bool m_relationDirectionHasBeenSet = false;
  bool m_maxPathLengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
