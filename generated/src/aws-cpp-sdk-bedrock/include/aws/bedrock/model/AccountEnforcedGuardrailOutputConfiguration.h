/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ConfigurationOwner.h>
#include <aws/bedrock/model/InputTags.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Account enforced guardrail output configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AccountEnforcedGuardrailOutputConfiguration">AWS
 * API Reference</a></p>
 */
class AccountEnforcedGuardrailOutputConfiguration {
 public:
  AWS_BEDROCK_API AccountEnforcedGuardrailOutputConfiguration() = default;
  AWS_BEDROCK_API AccountEnforcedGuardrailOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AccountEnforcedGuardrailOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique ID for the account enforced configuration.</p>
   */
  inline const Aws::String& GetConfigId() const { return m_configId; }
  inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
  template <typename ConfigIdT = Aws::String>
  void SetConfigId(ConfigIdT&& value) {
    m_configIdHasBeenSet = true;
    m_configId = std::forward<ConfigIdT>(value);
  }
  template <typename ConfigIdT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithConfigId(ConfigIdT&& value) {
    SetConfigId(std::forward<ConfigIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN representation for the guardrail.</p>
   */
  inline const Aws::String& GetGuardrailArn() const { return m_guardrailArn; }
  inline bool GuardrailArnHasBeenSet() const { return m_guardrailArnHasBeenSet; }
  template <typename GuardrailArnT = Aws::String>
  void SetGuardrailArn(GuardrailArnT&& value) {
    m_guardrailArnHasBeenSet = true;
    m_guardrailArn = std::forward<GuardrailArnT>(value);
  }
  template <typename GuardrailArnT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithGuardrailArn(GuardrailArnT&& value) {
    SetGuardrailArn(std::forward<GuardrailArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique ID for the guardrail.</p>
   */
  inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
  inline bool GuardrailIdHasBeenSet() const { return m_guardrailIdHasBeenSet; }
  template <typename GuardrailIdT = Aws::String>
  void SetGuardrailId(GuardrailIdT&& value) {
    m_guardrailIdHasBeenSet = true;
    m_guardrailId = std::forward<GuardrailIdT>(value);
  }
  template <typename GuardrailIdT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithGuardrailId(GuardrailIdT&& value) {
    SetGuardrailId(std::forward<GuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to honor or ignore input tags at runtime.</p>
   */
  inline InputTags GetInputTags() const { return m_inputTags; }
  inline bool InputTagsHasBeenSet() const { return m_inputTagsHasBeenSet; }
  inline void SetInputTags(InputTags value) {
    m_inputTagsHasBeenSet = true;
    m_inputTags = value;
  }
  inline AccountEnforcedGuardrailOutputConfiguration& WithInputTags(InputTags value) {
    SetInputTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Numerical guardrail version.</p>
   */
  inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
  inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
  template <typename GuardrailVersionT = Aws::String>
  void SetGuardrailVersion(GuardrailVersionT&& value) {
    m_guardrailVersionHasBeenSet = true;
    m_guardrailVersion = std::forward<GuardrailVersionT>(value);
  }
  template <typename GuardrailVersionT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithGuardrailVersion(GuardrailVersionT&& value) {
    SetGuardrailVersion(std::forward<GuardrailVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AccountEnforcedGuardrailOutputConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the role used to update the configuration.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AccountEnforcedGuardrailOutputConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the role used to update the configuration.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  AccountEnforcedGuardrailOutputConfiguration& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration owner type.</p>
   */
  inline ConfigurationOwner GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  inline void SetOwner(ConfigurationOwner value) {
    m_ownerHasBeenSet = true;
    m_owner = value;
  }
  inline AccountEnforcedGuardrailOutputConfiguration& WithOwner(ConfigurationOwner value) {
    SetOwner(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_configId;

  Aws::String m_guardrailArn;

  Aws::String m_guardrailId;

  InputTags m_inputTags{InputTags::NOT_SET};

  Aws::String m_guardrailVersion;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  ConfigurationOwner m_owner{ConfigurationOwner::NOT_SET};
  bool m_configIdHasBeenSet = false;
  bool m_guardrailArnHasBeenSet = false;
  bool m_guardrailIdHasBeenSet = false;
  bool m_inputTagsHasBeenSet = false;
  bool m_guardrailVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
