/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Configuration for a customer-managed S3 integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/S3Configuration">AWS
 * API Reference</a></p>
 */
class S3Configuration {
 public:
  AWS_CONTINUUM_API S3Configuration() = default;
  AWS_CONTINUUM_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Customer-managed source bucket name.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  S3Configuration& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Role Continuum will assume to read from the source bucket.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  S3Configuration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-provided external ID required by the role trust policy.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  S3Configuration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_roleArn;

  Aws::String m_externalId;
  bool m_bucketHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
