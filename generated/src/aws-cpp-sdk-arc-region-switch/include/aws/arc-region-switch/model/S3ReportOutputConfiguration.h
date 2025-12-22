/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for delivering generated reports to an Amazon S3
 * bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/S3ReportOutputConfiguration">AWS
 * API Reference</a></p>
 */
class S3ReportOutputConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API S3ReportOutputConfiguration() = default;
  AWS_ARCREGIONSWITCH_API S3ReportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API S3ReportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 bucket name and optional prefix where reports are stored. Format:
   * bucket-name or bucket-name/prefix.</p>
   */
  inline const Aws::String& GetBucketPath() const { return m_bucketPath; }
  inline bool BucketPathHasBeenSet() const { return m_bucketPathHasBeenSet; }
  template <typename BucketPathT = Aws::String>
  void SetBucketPath(BucketPathT&& value) {
    m_bucketPathHasBeenSet = true;
    m_bucketPath = std::forward<BucketPathT>(value);
  }
  template <typename BucketPathT = Aws::String>
  S3ReportOutputConfiguration& WithBucketPath(BucketPathT&& value) {
    SetBucketPath(std::forward<BucketPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the S3 bucket. Required to
   * ensure the bucket is still owned by the same expected owner at generation
   * time.</p>
   */
  inline const Aws::String& GetBucketOwner() const { return m_bucketOwner; }
  inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
  template <typename BucketOwnerT = Aws::String>
  void SetBucketOwner(BucketOwnerT&& value) {
    m_bucketOwnerHasBeenSet = true;
    m_bucketOwner = std::forward<BucketOwnerT>(value);
  }
  template <typename BucketOwnerT = Aws::String>
  S3ReportOutputConfiguration& WithBucketOwner(BucketOwnerT&& value) {
    SetBucketOwner(std::forward<BucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketPath;

  Aws::String m_bucketOwner;
  bool m_bucketPathHasBeenSet = false;
  bool m_bucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
