/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AzElSegments.h>
#include <aws/groundstation/model/S3Object.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Container for azimuth elevation segment data.</p> <p>Specify either
 * <a>AzElSegmentsData$s3Object</a> to reference data in Amazon S3, or
 * <a>AzElSegmentsData$azElData</a> to provide data inline.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AzElSegmentsData">AWS
 * API Reference</a></p>
 */
class AzElSegmentsData {
 public:
  AWS_GROUNDSTATION_API AzElSegmentsData() = default;
  AWS_GROUNDSTATION_API AzElSegmentsData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AzElSegmentsData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 object containing azimuth elevation segment data.</p> <p>The
   * Amazon S3 object must contain JSON-formatted azimuth elevation data matching the
   * <a>AzElSegments</a> structure.</p>
   */
  inline const S3Object& GetS3Object() const { return m_s3Object; }
  inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
  template <typename S3ObjectT = S3Object>
  void SetS3Object(S3ObjectT&& value) {
    m_s3ObjectHasBeenSet = true;
    m_s3Object = std::forward<S3ObjectT>(value);
  }
  template <typename S3ObjectT = S3Object>
  AzElSegmentsData& WithS3Object(S3ObjectT&& value) {
    SetS3Object(std::forward<S3ObjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azimuth elevation segment data provided directly in the request.</p> <p>Use
   * this option for smaller datasets or when Amazon S3 access is not available.</p>
   */
  inline const AzElSegments& GetAzElData() const { return m_azElData; }
  inline bool AzElDataHasBeenSet() const { return m_azElDataHasBeenSet; }
  template <typename AzElDataT = AzElSegments>
  void SetAzElData(AzElDataT&& value) {
    m_azElDataHasBeenSet = true;
    m_azElData = std::forward<AzElDataT>(value);
  }
  template <typename AzElDataT = AzElSegments>
  AzElSegmentsData& WithAzElData(AzElDataT&& value) {
    SetAzElData(std::forward<AzElDataT>(value));
    return *this;
  }
  ///@}
 private:
  S3Object m_s3Object;
  bool m_s3ObjectHasBeenSet = false;

  AzElSegments m_azElData;
  bool m_azElDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
