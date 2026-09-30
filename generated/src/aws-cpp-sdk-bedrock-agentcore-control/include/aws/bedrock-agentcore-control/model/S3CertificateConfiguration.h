/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A reference to a PEM-encoded private CA certificate stored as an Amazon S3
 * object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/S3CertificateConfiguration">AWS
 * API Reference</a></p>
 */
class S3CertificateConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API S3CertificateConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API S3CertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API S3CertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI of the Amazon S3 object that contains the PEM-encoded
   * certificate.</p>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  S3CertificateConfiguration& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the Amazon S3 bucket owner. This ID is used for
   * cross-account access to the bucket.</p>
   */
  inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
  inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
  template <typename BucketOwnerAccountIdT = Aws::String>
  void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    m_bucketOwnerAccountIdHasBeenSet = true;
    m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value);
  }
  template <typename BucketOwnerAccountIdT = Aws::String>
  S3CertificateConfiguration& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uri;

  Aws::String m_bucketOwnerAccountId;
  bool m_uriHasBeenSet = false;
  bool m_bucketOwnerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
