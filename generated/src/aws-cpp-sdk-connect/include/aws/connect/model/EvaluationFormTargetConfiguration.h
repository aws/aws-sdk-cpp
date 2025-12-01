/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactInteractionType.h>

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
 * <p>Configuration that specifies the target for an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormTargetConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationFormTargetConfiguration {
 public:
  AWS_CONNECT_API EvaluationFormTargetConfiguration() = default;
  AWS_CONNECT_API EvaluationFormTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The contact interaction type for this evaluation form.</p>
   */
  inline ContactInteractionType GetContactInteractionType() const { return m_contactInteractionType; }
  inline bool ContactInteractionTypeHasBeenSet() const { return m_contactInteractionTypeHasBeenSet; }
  inline void SetContactInteractionType(ContactInteractionType value) {
    m_contactInteractionTypeHasBeenSet = true;
    m_contactInteractionType = value;
  }
  inline EvaluationFormTargetConfiguration& WithContactInteractionType(ContactInteractionType value) {
    SetContactInteractionType(value);
    return *this;
  }
  ///@}
 private:
  ContactInteractionType m_contactInteractionType{ContactInteractionType::NOT_SET};
  bool m_contactInteractionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
