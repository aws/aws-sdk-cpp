/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>

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
 * <p>Contains progress metrics for a data transformation job, including counts of
 * files scanned, converted, and failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TransformationJobProgressReport">AWS
 * API Reference</a></p>
 */
class TransformationJobProgressReport {
 public:
  AWS_HEALTHLAKE_API TransformationJobProgressReport() = default;
  AWS_HEALTHLAKE_API TransformationJobProgressReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API TransformationJobProgressReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of source files scanned by the job.</p>
   */
  inline long long GetTotalFilesScanned() const { return m_totalFilesScanned; }
  inline bool TotalFilesScannedHasBeenSet() const { return m_totalFilesScannedHasBeenSet; }
  inline void SetTotalFilesScanned(long long value) {
    m_totalFilesScannedHasBeenSet = true;
    m_totalFilesScanned = value;
  }
  inline TransformationJobProgressReport& WithTotalFilesScanned(long long value) {
    SetTotalFilesScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of source files successfully converted.</p>
   */
  inline long long GetTotalFilesConverted() const { return m_totalFilesConverted; }
  inline bool TotalFilesConvertedHasBeenSet() const { return m_totalFilesConvertedHasBeenSet; }
  inline void SetTotalFilesConverted(long long value) {
    m_totalFilesConvertedHasBeenSet = true;
    m_totalFilesConverted = value;
  }
  inline TransformationJobProgressReport& WithTotalFilesConverted(long long value) {
    SetTotalFilesConverted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of source files that failed conversion.</p>
   */
  inline long long GetTotalFilesFailed() const { return m_totalFilesFailed; }
  inline bool TotalFilesFailedHasBeenSet() const { return m_totalFilesFailedHasBeenSet; }
  inline void SetTotalFilesFailed(long long value) {
    m_totalFilesFailedHasBeenSet = true;
    m_totalFilesFailed = value;
  }
  inline TransformationJobProgressReport& WithTotalFilesFailed(long long value) {
    SetTotalFilesFailed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of FHIR R4 resources generated across all converted
   * files.</p>
   */
  inline long long GetTotalResourcesGenerated() const { return m_totalResourcesGenerated; }
  inline bool TotalResourcesGeneratedHasBeenSet() const { return m_totalResourcesGeneratedHasBeenSet; }
  inline void SetTotalResourcesGenerated(long long value) {
    m_totalResourcesGeneratedHasBeenSet = true;
    m_totalResourcesGenerated = value;
  }
  inline TransformationJobProgressReport& WithTotalResourcesGenerated(long long value) {
    SetTotalResourcesGenerated(value);
    return *this;
  }
  ///@}
 private:
  long long m_totalFilesScanned{0};

  long long m_totalFilesConverted{0};

  long long m_totalFilesFailed{0};

  long long m_totalResourcesGenerated{0};
  bool m_totalFilesScannedHasBeenSet = false;
  bool m_totalFilesConvertedHasBeenSet = false;
  bool m_totalFilesFailedHasBeenSet = false;
  bool m_totalResourcesGeneratedHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
