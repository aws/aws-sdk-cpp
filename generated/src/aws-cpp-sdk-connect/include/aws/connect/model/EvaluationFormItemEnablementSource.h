/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>An enablement expression source item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementSource">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementSource {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementSource() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A type of source item. </p>
   */
  inline EvaluationFormItemEnablementSourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EvaluationFormItemEnablementSourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EvaluationFormItemEnablementSource& WithType(EvaluationFormItemEnablementSourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A referenceId of the source item.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormItemEnablementSource& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementSourceType m_type{EvaluationFormItemEnablementSourceType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_refId;
  bool m_refIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
