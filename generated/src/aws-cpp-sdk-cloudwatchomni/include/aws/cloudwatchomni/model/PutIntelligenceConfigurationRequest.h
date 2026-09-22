/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for updating the intelligence configuration of the calling
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/PutIntelligenceConfigurationInput">AWS
 * API Reference</a></p>
 */
class PutIntelligenceConfigurationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API PutIntelligenceConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutIntelligenceConfiguration"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Optional KMS key ARN to configure customer-managed encryption for anomaly
   * data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  PutIntelligenceConfigurationRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to disassociate the configured KMS key. Mutually exclusive with
   * kmsKeyArn; the service returns ValidationException if both are provided.</p>
   */
  inline bool GetRemoveKmsKey() const { return m_removeKmsKey; }
  inline bool RemoveKmsKeyHasBeenSet() const { return m_removeKmsKeyHasBeenSet; }
  inline void SetRemoveKmsKey(bool value) {
    m_removeKmsKeyHasBeenSet = true;
    m_removeKmsKey = value;
  }
  inline PutIntelligenceConfigurationRequest& WithRemoveKmsKey(bool value) {
    SetRemoveKmsKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Repeating a request with the same token
   * applies the update at most once instead of reprocessing it.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutIntelligenceConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;

  bool m_removeKmsKey{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_removeKmsKeyHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
