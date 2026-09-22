/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Identifies a single integration by exactly one of its unique keys: the
 * integration id, the integration ARN, or the integration name.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/IntegrationIdentifier">AWS
 * API Reference</a></p>
 */
class IntegrationIdentifier {
 public:
  AWS_CLOUDWATCHOMNI_API IntegrationIdentifier() = default;
  AWS_CLOUDWATCHOMNI_API IntegrationIdentifier(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API IntegrationIdentifier& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the integration.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  IntegrationIdentifier& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name of the integration.</p>
   */
  inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
  inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
  template <typename IntegrationArnT = Aws::String>
  void SetIntegrationArn(IntegrationArnT&& value) {
    m_integrationArnHasBeenSet = true;
    m_integrationArn = std::forward<IntegrationArnT>(value);
  }
  template <typename IntegrationArnT = Aws::String>
  IntegrationIdentifier& WithIntegrationArn(IntegrationArnT&& value) {
    SetIntegrationArn(std::forward<IntegrationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the integration; unique within the account.</p>
   */
  inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
  inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
  template <typename IntegrationNameT = Aws::String>
  void SetIntegrationName(IntegrationNameT&& value) {
    m_integrationNameHasBeenSet = true;
    m_integrationName = std::forward<IntegrationNameT>(value);
  }
  template <typename IntegrationNameT = Aws::String>
  IntegrationIdentifier& WithIntegrationName(IntegrationNameT&& value) {
    SetIntegrationName(std::forward<IntegrationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_integrationArn;

  Aws::String m_integrationName;
  bool m_integrationIdHasBeenSet = false;
  bool m_integrationArnHasBeenSet = false;
  bool m_integrationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
