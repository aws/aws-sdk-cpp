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
 * <p>Configuration for using a managed note template</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ManagedTemplate">AWS
 * API Reference</a></p>
 */
class ManagedTemplate {
 public:
  AWS_CONNECTHEALTH_API ManagedTemplate() = default;
  AWS_CONNECTHEALTH_API ManagedTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ManagedTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of managed template to use</p>
   */
  inline ManagedNoteTemplate GetTemplateType() const { return m_templateType; }
  inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
  inline void SetTemplateType(ManagedNoteTemplate value) {
    m_templateTypeHasBeenSet = true;
    m_templateType = value;
  }
  inline ManagedTemplate& WithTemplateType(ManagedNoteTemplate value) {
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
