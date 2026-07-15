/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

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
 * <p>Identifies a sample data file in Amazon S3 to use as the source when creating
 * a data transformation profile. Valid only when the source format is
 * Comma-separated values (CSV).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/SampleDataSource">AWS
 * API Reference</a></p>
 */
class SampleDataSource {
 public:
  AWS_HEALTHLAKE_API SampleDataSource() = default;
  AWS_HEALTHLAKE_API SampleDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API SampleDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI of the sample data file.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  SampleDataSource& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;
  bool m_s3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
