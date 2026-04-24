/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ManagedNoteTemplate.h>

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
 * <p>Response containing managed template information</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ManagedTemplateResponse">AWS
 * API Reference</a></p>
 */
class ManagedTemplateResponse {
 public:
  AWS_CONNECTHEALTH_API ManagedTemplateResponse() = default;
  AWS_CONNECTHEALTH_API ManagedTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ManagedTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of managed template used</p>
   */
  inline ManagedNoteTemplate GetTemplateType() const { return m_templateType; }
  inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
  inline void SetTemplateType(ManagedNoteTemplate value) {
    m_templateTypeHasBeenSet = true;
    m_templateType = value;
  }
  inline ManagedTemplateResponse& WithTemplateType(ManagedNoteTemplate value) {
    SetTemplateType(value);
    return *this;
  }
  ///@}
 private:
  ManagedNoteTemplate m_templateType{ManagedNoteTemplate::NOT_SET};
  bool m_templateTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
