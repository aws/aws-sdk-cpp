/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/S3Destination.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The output location for a notebook export in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OutputLocation">AWS
 * API Reference</a></p>
 */
class OutputLocation {
 public:
  AWS_DATAZONE_API OutputLocation() = default;
  AWS_DATAZONE_API OutputLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API OutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Simple Storage Service destination for the notebook export.</p>
   */
  inline const S3Destination& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3Destination>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3Destination>
  OutputLocation& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  S3Destination m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
