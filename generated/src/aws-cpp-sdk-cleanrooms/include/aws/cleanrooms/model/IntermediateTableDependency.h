/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BaseTableDependencyType.h>
#include <aws/cleanrooms/model/BaseTableParentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains information about a base table that an intermediate table depends
 * on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableDependency">AWS
 * API Reference</a></p>
 */
class IntermediateTableDependency {
 public:
  AWS_CLEANROOMS_API IntermediateTableDependency() = default;
  AWS_CLEANROOMS_API IntermediateTableDependency(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the dependency table.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  IntermediateTableDependency& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dependency table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  IntermediateTableDependency& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the dependency table.</p>
   */
  inline BaseTableDependencyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(BaseTableDependencyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline IntermediateTableDependency& WithType(BaseTableDependencyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the dependency is direct or indirect. A direct dependency is a table
   * explicitly referenced in the stored query, while an indirect dependency is
   * referenced through another intermediate table.</p>
   */
  inline BaseTableParentType GetParentType() const { return m_parentType; }
  inline bool ParentTypeHasBeenSet() const { return m_parentTypeHasBeenSet; }
  inline void SetParentType(BaseTableParentType value) {
    m_parentTypeHasBeenSet = true;
    m_parentType = value;
  }
  inline IntermediateTableDependency& WithParentType(BaseTableParentType value) {
    SetParentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the member who owns the dependency
   * table.</p>
   */
  inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
  inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
  template <typename CreatorAccountIdT = Aws::String>
  void SetCreatorAccountId(CreatorAccountIdT&& value) {
    m_creatorAccountIdHasBeenSet = true;
    m_creatorAccountId = std::forward<CreatorAccountIdT>(value);
  }
  template <typename CreatorAccountIdT = Aws::String>
  IntermediateTableDependency& WithCreatorAccountId(CreatorAccountIdT&& value) {
    SetCreatorAccountId(std::forward<CreatorAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  BaseTableDependencyType m_type{BaseTableDependencyType::NOT_SET};

  BaseTableParentType m_parentType{BaseTableParentType::NOT_SET};

  Aws::String m_creatorAccountId;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_parentTypeHasBeenSet = false;
  bool m_creatorAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
