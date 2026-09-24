/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/InvocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Lambda invocation parameters for subscribers. Values are forwarded to the
 * Lambda Invoke API. Every string member accepts a literal or a JSONata expression
 * (e.g. &quot;{% $events.Data.qualifier %}&quot;).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/LambdaParameters">AWS
 * API Reference</a></p>
 */
class LambdaParameters {
 public:
  AWS_EVENTBRIDGEV2_API LambdaParameters() = default;
  AWS_EVENTBRIDGEV2_API LambdaParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API LambdaParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Lambda invocation type. EVENT invokes the function asynchronously;
   * REQUEST_RESPONSE waits for its result.</p>
   */
  inline InvocationType GetInvocationType() const { return m_invocationType; }
  inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
  inline void SetInvocationType(InvocationType value) {
    m_invocationTypeHasBeenSet = true;
    m_invocationType = value;
  }
  inline LambdaParameters& WithInvocationType(InvocationType value) {
    SetInvocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lambda qualifier: $LATEST, $LATEST.PUBLISHED, a numeric version, or an alias.
   * Accepts a JSONata expression.</p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  LambdaParameters& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Durable execution name. Accepts a JSONata expression.</p>
   */
  inline const Aws::String& GetDurableExecutionName() const { return m_durableExecutionName; }
  inline bool DurableExecutionNameHasBeenSet() const { return m_durableExecutionNameHasBeenSet; }
  template <typename DurableExecutionNameT = Aws::String>
  void SetDurableExecutionName(DurableExecutionNameT&& value) {
    m_durableExecutionNameHasBeenSet = true;
    m_durableExecutionName = std::forward<DurableExecutionNameT>(value);
  }
  template <typename DurableExecutionNameT = Aws::String>
  LambdaParameters& WithDurableExecutionName(DurableExecutionNameT&& value) {
    SetDurableExecutionName(std::forward<DurableExecutionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tenant identifier. Accepts a JSONata expression.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  LambdaParameters& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timeout in seconds for each invocation of the target. String-typed so the
   * value may be a JSONata expression.</p>
   */
  inline const Aws::String& GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
  inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  void SetInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    m_invocationTimeoutSecondsHasBeenSet = true;
    m_invocationTimeoutSeconds = std::forward<InvocationTimeoutSecondsT>(value);
  }
  template <typename InvocationTimeoutSecondsT = Aws::String>
  LambdaParameters& WithInvocationTimeoutSeconds(InvocationTimeoutSecondsT&& value) {
    SetInvocationTimeoutSeconds(std::forward<InvocationTimeoutSecondsT>(value));
    return *this;
  }
  ///@}
 private:
  InvocationType m_invocationType{InvocationType::NOT_SET};

  Aws::String m_qualifier;

  Aws::String m_durableExecutionName;

  Aws::String m_tenantId;

  Aws::String m_invocationTimeoutSeconds;
  bool m_invocationTypeHasBeenSet = false;
  bool m_qualifierHasBeenSet = false;
  bool m_durableExecutionNameHasBeenSet = false;
  bool m_tenantIdHasBeenSet = false;
  bool m_invocationTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
