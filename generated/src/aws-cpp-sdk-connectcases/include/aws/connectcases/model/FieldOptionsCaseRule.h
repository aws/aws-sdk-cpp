/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/ParentChildFieldOptionsMapping.h>
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
namespace ConnectCases {
namespace Model {

/**
 * <p>Rules that control which options are available in a child field based on the
 * selected value in a parent field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldOptionsCaseRule">AWS
 * API Reference</a></p>
 */
class FieldOptionsCaseRule {
 public:
  AWS_CONNECTCASES_API FieldOptionsCaseRule() = default;
  AWS_CONNECTCASES_API FieldOptionsCaseRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API FieldOptionsCaseRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the parent field that controls options.</p>
   */
  inline const Aws::String& GetParentFieldId() const { return m_parentFieldId; }
  inline bool ParentFieldIdHasBeenSet() const { return m_parentFieldIdHasBeenSet; }
  template <typename ParentFieldIdT = Aws::String>
  void SetParentFieldId(ParentFieldIdT&& value) {
    m_parentFieldIdHasBeenSet = true;
    m_parentFieldId = std::forward<ParentFieldIdT>(value);
  }
  template <typename ParentFieldIdT = Aws::String>
  FieldOptionsCaseRule& WithParentFieldId(ParentFieldIdT&& value) {
    SetParentFieldId(std::forward<ParentFieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the child field whose options are controlled.</p>
   */
  inline const Aws::String& GetChildFieldId() const { return m_childFieldId; }
  inline bool ChildFieldIdHasBeenSet() const { return m_childFieldIdHasBeenSet; }
  template <typename ChildFieldIdT = Aws::String>
  void SetChildFieldId(ChildFieldIdT&& value) {
    m_childFieldIdHasBeenSet = true;
    m_childFieldId = std::forward<ChildFieldIdT>(value);
  }
  template <typename ChildFieldIdT = Aws::String>
  FieldOptionsCaseRule& WithChildFieldId(ChildFieldIdT&& value) {
    SetChildFieldId(std::forward<ChildFieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A mapping between a parent field option value and child field option
   * values.</p>
   */
  inline const Aws::Vector<ParentChildFieldOptionsMapping>& GetParentChildFieldOptionsMappings() const {
    return m_parentChildFieldOptionsMappings;
  }
  inline bool ParentChildFieldOptionsMappingsHasBeenSet() const { return m_parentChildFieldOptionsMappingsHasBeenSet; }
  template <typename ParentChildFieldOptionsMappingsT = Aws::Vector<ParentChildFieldOptionsMapping>>
  void SetParentChildFieldOptionsMappings(ParentChildFieldOptionsMappingsT&& value) {
    m_parentChildFieldOptionsMappingsHasBeenSet = true;
    m_parentChildFieldOptionsMappings = std::forward<ParentChildFieldOptionsMappingsT>(value);
  }
  template <typename ParentChildFieldOptionsMappingsT = Aws::Vector<ParentChildFieldOptionsMapping>>
  FieldOptionsCaseRule& WithParentChildFieldOptionsMappings(ParentChildFieldOptionsMappingsT&& value) {
    SetParentChildFieldOptionsMappings(std::forward<ParentChildFieldOptionsMappingsT>(value));
    return *this;
  }
  template <typename ParentChildFieldOptionsMappingsT = ParentChildFieldOptionsMapping>
  FieldOptionsCaseRule& AddParentChildFieldOptionsMappings(ParentChildFieldOptionsMappingsT&& value) {
    m_parentChildFieldOptionsMappingsHasBeenSet = true;
    m_parentChildFieldOptionsMappings.emplace_back(std::forward<ParentChildFieldOptionsMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentFieldId;
  bool m_parentFieldIdHasBeenSet = false;

  Aws::String m_childFieldId;
  bool m_childFieldIdHasBeenSet = false;

  Aws::Vector<ParentChildFieldOptionsMapping> m_parentChildFieldOptionsMappings;
  bool m_parentChildFieldOptionsMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
