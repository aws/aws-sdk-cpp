/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {

/**
 * <p>The redaction configuration for conversational analytics
 * transcripts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactLensRedactionConfiguration">AWS
 * API Reference</a></p>
 */
class ContactLensRedactionConfiguration {
 public:
  AWS_CONNECT_API ContactLensRedactionConfiguration() = default;
  AWS_CONNECT_API ContactLensRedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactLensRedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether redaction is enabled for sensitive data, such as personal
   * information, in the conversational analytics output. Valid values:</p> <ul> <li>
   * <p> <code>Enable</code> – Redaction is applied according to the other values in
   * this object.</p> </li> <li> <p> <code>Disable</code> – Redaction is not applied,
   * and all other values in this object are ignored.</p> </li> </ul>
   */
  inline const Aws::String& GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  template <typename BehaviorT = Aws::String>
  void SetBehavior(BehaviorT&& value) {
    m_behaviorHasBeenSet = true;
    m_behavior = std::forward<BehaviorT>(value);
  }
  template <typename BehaviorT = Aws::String>
  ContactLensRedactionConfiguration& WithBehavior(BehaviorT&& value) {
    SetBehavior(std::forward<BehaviorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redaction policy that determines which versions of the transcript are
   * stored. Valid values:</p> <ul> <li> <p> <code>None</code> – No redaction is
   * applied.</p> </li> <li> <p> <code>RedactedOnly</code> – Only the redacted
   * transcript is stored.</p> </li> <li> <p> <code>RedactedAndOriginal</code> – Both
   * the redacted and the original transcript are stored.</p> </li> </ul>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  ContactLensRedactionConfiguration& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity types to redact from the transcript (for example,
   * <code>NAME</code>, <code>EMAIL</code>, <code>ADDRESS</code>).</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntities() const { return m_entities; }
  inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
  template <typename EntitiesT = Aws::Vector<Aws::String>>
  void SetEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities = std::forward<EntitiesT>(value);
  }
  template <typename EntitiesT = Aws::Vector<Aws::String>>
  ContactLensRedactionConfiguration& WithEntities(EntitiesT&& value) {
    SetEntities(std::forward<EntitiesT>(value));
    return *this;
  }
  template <typename EntitiesT = Aws::String>
  ContactLensRedactionConfiguration& AddEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities.emplace_back(std::forward<EntitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How sensitive information is masked in the transcript. Valid values:</p> <ul>
   * <li> <p> <code>PII</code> – All redacted entities are replaced with the
   * <code>[PII]</code> string.</p> </li> <li> <p> <code>EntityType</code> – All
   * redacted entities are replaced with the label of the entity. For example, when
   * the <code>EMAIL</code> entity is configured for redaction, emails in the
   * transcript are replaced with the <code>[EMAIL]</code> string.</p> </li> </ul>
   */
  inline const Aws::String& GetMaskMode() const { return m_maskMode; }
  inline bool MaskModeHasBeenSet() const { return m_maskModeHasBeenSet; }
  template <typename MaskModeT = Aws::String>
  void SetMaskMode(MaskModeT&& value) {
    m_maskModeHasBeenSet = true;
    m_maskMode = std::forward<MaskModeT>(value);
  }
  template <typename MaskModeT = Aws::String>
  ContactLensRedactionConfiguration& WithMaskMode(MaskModeT&& value) {
    SetMaskMode(std::forward<MaskModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_behavior;

  Aws::String m_policy;

  Aws::Vector<Aws::String> m_entities;

  Aws::String m_maskMode;
  bool m_behaviorHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_entitiesHasBeenSet = false;
  bool m_maskModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
