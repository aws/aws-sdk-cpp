/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Behavior.h>
#include <aws/connect/model/MaskMode.h>
#include <aws/connect/model/Policy.h>
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
 * <p>The redaction configuration for conversational analytics.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RedactionConfiguration">AWS
 * API Reference</a></p>
 */
class RedactionConfiguration {
 public:
  AWS_CONNECT_API RedactionConfiguration() = default;
  AWS_CONNECT_API RedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Controls whether redaction is applied to the analytics output. Valid values:
   * <code>Enable</code> | <code>Disable</code>.</p>
   */
  inline Behavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(Behavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline RedactionConfiguration& WithBehavior(Behavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redaction output policy that determines which versions of the transcript
   * are stored. Valid values: <code>None</code> | <code>RedactedOnly</code> |
   * <code>RedactedAndOriginal</code>.</p>
   */
  inline Policy GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  inline void SetPolicy(Policy value) {
    m_policyHasBeenSet = true;
    m_policy = value;
  }
  inline RedactionConfiguration& WithPolicy(Policy value) {
    SetPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of PII entity types to redact from the transcript (for example,
   * <code>NAME</code>, <code>ADDRESS</code>, <code>CREDIT_DEBIT_NUMBER</code>).</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntities() const { return m_entities; }
  inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
  template <typename EntitiesT = Aws::Vector<Aws::String>>
  void SetEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities = std::forward<EntitiesT>(value);
  }
  template <typename EntitiesT = Aws::Vector<Aws::String>>
  RedactionConfiguration& WithEntities(EntitiesT&& value) {
    SetEntities(std::forward<EntitiesT>(value));
    return *this;
  }
  template <typename EntitiesT = Aws::String>
  RedactionConfiguration& AddEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities.emplace_back(std::forward<EntitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The masking mode that determines how redacted content is replaced in the
   * output. Valid values: <code>PII</code> (replaces with the literal string [PII])
   * | <code>EntityType</code> (replaces with the entity type name, for example
   * [NAME]).</p>
   */
  inline MaskMode GetMaskMode() const { return m_maskMode; }
  inline bool MaskModeHasBeenSet() const { return m_maskModeHasBeenSet; }
  inline void SetMaskMode(MaskMode value) {
    m_maskModeHasBeenSet = true;
    m_maskMode = value;
  }
  inline RedactionConfiguration& WithMaskMode(MaskMode value) {
    SetMaskMode(value);
    return *this;
  }
  ///@}
 private:
  Behavior m_behavior{Behavior::NOT_SET};

  Policy m_policy{Policy::NOT_SET};

  Aws::Vector<Aws::String> m_entities;

  MaskMode m_maskMode{MaskMode::NOT_SET};
  bool m_behaviorHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_entitiesHasBeenSet = false;
  bool m_maskModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
