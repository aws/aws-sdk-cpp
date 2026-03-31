/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/CustomTemplateBase.h>

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
 * <p>Response containing custom template information</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/CustomTemplateResponse">AWS
 * API Reference</a></p>
 */
class CustomTemplateResponse {
 public:
  AWS_CONNECTHEALTH_API CustomTemplateResponse() = default;
  AWS_CONNECTHEALTH_API CustomTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API CustomTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base template type that was customized</p>
   */
  inline CustomTemplateBase GetTemplateType() const { return m_templateType; }
  inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
  inline void SetTemplateType(CustomTemplateBase value) {
    m_templateTypeHasBeenSet = true;
    m_templateType = value;
  }
  inline CustomTemplateResponse& WithTemplateType(CustomTemplateBase value) {
    SetTemplateType(value);
    return *this;
  }
  ///@}
 private:
  CustomTemplateBase m_templateType{CustomTemplateBase::NOT_SET};
  bool m_templateTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
