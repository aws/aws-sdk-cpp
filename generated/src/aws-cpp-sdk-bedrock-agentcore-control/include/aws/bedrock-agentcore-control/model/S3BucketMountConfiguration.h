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
 * <p>Mounts an Amazon S3 bucket in the AgentCore Runtime with Mountpoint for
 * Amazon S3. Files under the mount path map to objects in the
 * bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/S3BucketMountConfiguration">AWS
 * API Reference</a></p>
 */
class S3BucketMountConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API S3BucketMountConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API S3BucketMountConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API S3BucketMountConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the S3 bucket to mount. You can specify a general purpose bucket
   * or a directory bucket.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  S3BucketMountConfiguration& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mount path for the S3 bucket inside the AgentCore Runtime. The path must
   * be under <code>/mnt</code> with exactly one subdirectory level (for example,
   * <code>/mnt/data</code>).</p>
   */
  inline const Aws::String& GetMountPath() const { return m_mountPath; }
  inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
  template <typename MountPathT = Aws::String>
  void SetMountPath(MountPathT&& value) {
    m_mountPathHasBeenSet = true;
    m_mountPath = std::forward<MountPathT>(value);
  }
  template <typename MountPathT = Aws::String>
  S3BucketMountConfiguration& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix to mount. Only objects under this prefix are visible at the
   * mount path. To give each session its own prefix, include
   * <code>{runtimeSessionId}</code> (for example,
   * <code>data/{runtimeSessionId}/</code>). If you omit the prefix, the whole bucket
   * is mounted.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  S3BucketMountConfiguration& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that must own the bucket. If you omit it, the bucket must
   * be owned by the account that owns the AgentCore Runtime.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  S3BucketMountConfiguration& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region of the S3 bucket. If you omit it, the bucket must be in the
   * same Region as the AgentCore Runtime.</p>
   */
  inline const Aws::String& GetS3BucketRegion() const { return m_s3BucketRegion; }
  inline bool S3BucketRegionHasBeenSet() const { return m_s3BucketRegionHasBeenSet; }
  template <typename S3BucketRegionT = Aws::String>
  void SetS3BucketRegion(S3BucketRegionT&& value) {
    m_s3BucketRegionHasBeenSet = true;
    m_s3BucketRegion = std::forward<S3BucketRegionT>(value);
  }
  template <typename S3BucketRegionT = Aws::String>
  S3BucketMountConfiguration& WithS3BucketRegion(S3BucketRegionT&& value) {
    SetS3BucketRegion(std::forward<S3BucketRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_mountPath;

  Aws::String m_prefix;

  Aws::String m_s3BucketOwner;

  Aws::String m_s3BucketRegion;
  bool m_bucketHasBeenSet = false;
  bool m_mountPathHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
  bool m_s3BucketOwnerHasBeenSet = false;
  bool m_s3BucketRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
