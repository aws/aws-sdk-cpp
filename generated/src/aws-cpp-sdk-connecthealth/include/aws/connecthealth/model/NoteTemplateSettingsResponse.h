/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/CustomTemplateResponse.h>
#include <aws/connecthealth/model/ManagedTemplateResponse.h>

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
 * <p>Response containing note template settings</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/NoteTemplateSettingsResponse">AWS
 * API Reference</a></p>
 */
class NoteTemplateSettingsResponse {
 public:
  AWS_CONNECTHEALTH_API NoteTemplateSettingsResponse() = default;
  AWS_CONNECTHEALTH_API NoteTemplateSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API NoteTemplateSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline const ManagedTemplateResponse& GetManagedTemplate() const { return m_managedTemplate; }
  inline bool ManagedTemplateHasBeenSet() const { return m_managedTemplateHasBeenSet; }
  template <typename ManagedTemplateT = ManagedTemplateResponse>
  void SetManagedTemplate(ManagedTemplateT&& value) {
    m_managedTemplateHasBeenSet = true;
    m_managedTemplate = std::forward<ManagedTemplateT>(value);
  }
  template <typename ManagedTemplateT = ManagedTemplateResponse>
  NoteTemplateSettingsResponse& WithManagedTemplate(ManagedTemplateT&& value) {
    SetManagedTemplate(std::forward<ManagedTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const CustomTemplateResponse& GetCustomTemplate() const { return m_customTemplate; }
  inline bool CustomTemplateHasBeenSet() const { return m_customTemplateHasBeenSet; }
  template <typename CustomTemplateT = CustomTemplateResponse>
  void SetCustomTemplate(CustomTemplateT&& value) {
    m_customTemplateHasBeenSet = true;
    m_customTemplate = std::forward<CustomTemplateT>(value);
  }
  template <typename CustomTemplateT = CustomTemplateResponse>
  NoteTemplateSettingsResponse& WithCustomTemplate(CustomTemplateT&& value) {
    SetCustomTemplate(std::forward<CustomTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedTemplateResponse m_managedTemplate;

  CustomTemplateResponse m_customTemplate;
  bool m_managedTemplateHasBeenSet = false;
  bool m_customTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
