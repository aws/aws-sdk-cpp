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
 * <p>Public details for a customer-managed S3 integration. The sensitive external
 * ID is intentionally omitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/S3Details">AWS
 * API Reference</a></p>
 */
class S3Details {
 public:
  AWS_CONTINUUM_API S3Details() = default;
  AWS_CONTINUUM_API S3Details(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API S3Details& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  S3Details& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  S3Details& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_roleArn;
  bool m_bucketHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
