/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/BaseTableDependencyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Contains information about a parent table that contributes an allowed
 * additional analyses constraint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/InheritedAllowedAdditionalAnalysesSource">AWS
 * API Reference</a></p>
 */
class InheritedAllowedAdditionalAnalysesSource {
 public:
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalysesSource() = default;
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalysesSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API InheritedAllowedAdditionalAnalysesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the parent table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InheritedAllowedAdditionalAnalysesSource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the parent table.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  InheritedAllowedAdditionalAnalysesSource& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the parent table.</p>
   */
  inline BaseTableDependencyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(BaseTableDependencyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InheritedAllowedAdditionalAnalysesSource& WithType(BaseTableDependencyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allowed additional analyses defined on the parent table.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Vector<Aws::String>>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Vector<Aws::String>>
  InheritedAllowedAdditionalAnalysesSource& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  template <typename ValueT = Aws::String>
  InheritedAllowedAdditionalAnalysesSource& AddValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value.emplace_back(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the member who owns the parent
   * table.</p>
   */
  inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
  inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
  template <typename SourceAccountIdT = Aws::String>
  void SetSourceAccountId(SourceAccountIdT&& value) {
    m_sourceAccountIdHasBeenSet = true;
    m_sourceAccountId = std::forward<SourceAccountIdT>(value);
  }
  template <typename SourceAccountIdT = Aws::String>
  InheritedAllowedAdditionalAnalysesSource& WithSourceAccountId(SourceAccountIdT&& value) {
    SetSourceAccountId(std::forward<SourceAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_id;

  BaseTableDependencyType m_type{BaseTableDependencyType::NOT_SET};

  Aws::Vector<Aws::String> m_value;

  Aws::String m_sourceAccountId;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_sourceAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
