/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/SourceFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>The Amazon S3 location and source format configuration for input data in a
 * transformation job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TransformationInputDataConfig">AWS
 * API Reference</a></p>
 */
class TransformationInputDataConfig {
 public:
  AWS_HEALTHLAKE_API TransformationInputDataConfig() = default;
  AWS_HEALTHLAKE_API TransformationInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API TransformationInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI of the input data to transform.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  TransformationInputDataConfig& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the source data files (C-CDA or CSV).</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline TransformationInputDataConfig& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};
  bool m_s3UriHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
