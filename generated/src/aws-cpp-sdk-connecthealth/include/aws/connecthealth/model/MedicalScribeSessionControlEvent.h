/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeSessionControlEventType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>An event for controlling the Medical Scribe session</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeSessionControlEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeSessionControlEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeSessionControlEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeSessionControlEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeSessionControlEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of session control event</p>
   */
  inline MedicalScribeSessionControlEventType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MedicalScribeSessionControlEventType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MedicalScribeSessionControlEvent& WithType(MedicalScribeSessionControlEventType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  MedicalScribeSessionControlEventType m_type{MedicalScribeSessionControlEventType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
