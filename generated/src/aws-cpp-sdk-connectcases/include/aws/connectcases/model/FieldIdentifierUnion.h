/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Identifies a field by its ID or by its name. Specify only one member.
 * Identifying a field by name is supported only in
 * <code>BatchUpdateCase</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldIdentifierUnion">AWS
 * API Reference</a></p>
 */
class FieldIdentifierUnion {
 public:
  AWS_CONNECTCASES_API FieldIdentifierUnion() = default;
  AWS_CONNECTCASES_API FieldIdentifierUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API FieldIdentifierUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the field.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  FieldIdentifierUnion& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the field.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FieldIdentifierUnion& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
