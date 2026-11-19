/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The settings of a source that the registry reads from Amazon
 * S3.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/S3SourceConfiguration">AWS
 * API Reference</a></p>
 */
class S3SourceConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API S3SourceConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API S3SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API S3SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the source bucket. The
   * registry checks that the bucket belongs to this account each time it reads the
   * source. If you omit it for a source that uses an IAM role, the registry expects
   * the bucket to be in the role's account. If you omit it for a source that has no
   * credential provider, which the registry reads as a public object, the request
   * fails with a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
  inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
  template <typename BucketOwnerAccountIdT = Aws::String>
  void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    m_bucketOwnerAccountIdHasBeenSet = true;
    m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value);
  }
  template <typename BucketOwnerAccountIdT = Aws::String>
  S3SourceConfiguration& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketOwnerAccountId;
  bool m_bucketOwnerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
