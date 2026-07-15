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
 * <p>The progress report for the import job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/JobProgressReport">AWS
 * API Reference</a></p>
 */
class JobProgressReport {
 public:
  AWS_HEALTHLAKE_API JobProgressReport() = default;
  AWS_HEALTHLAKE_API JobProgressReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API JobProgressReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of files scanned from the S3 input bucket.</p>
   */
  inline long long GetTotalNumberOfScannedFiles() const { return m_totalNumberOfScannedFiles; }
  inline bool TotalNumberOfScannedFilesHasBeenSet() const { return m_totalNumberOfScannedFilesHasBeenSet; }
  inline void SetTotalNumberOfScannedFiles(long long value) {
    m_totalNumberOfScannedFilesHasBeenSet = true;
    m_totalNumberOfScannedFiles = value;
  }
  inline JobProgressReport& WithTotalNumberOfScannedFiles(long long value) {
    SetTotalNumberOfScannedFiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size (in MB) of files scanned from the S3 input bucket.</p>
   */
  inline double GetTotalSizeOfScannedFilesInMB() const { return m_totalSizeOfScannedFilesInMB; }
  inline bool TotalSizeOfScannedFilesInMBHasBeenSet() const { return m_totalSizeOfScannedFilesInMBHasBeenSet; }
  inline void SetTotalSizeOfScannedFilesInMB(double value) {
    m_totalSizeOfScannedFilesInMBHasBeenSet = true;
    m_totalSizeOfScannedFilesInMB = value;
  }
  inline JobProgressReport& WithTotalSizeOfScannedFilesInMB(double value) {
    SetTotalSizeOfScannedFilesInMB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files imported.</p>
   */
  inline long long GetTotalNumberOfImportedFiles() const { return m_totalNumberOfImportedFiles; }
  inline bool TotalNumberOfImportedFilesHasBeenSet() const { return m_totalNumberOfImportedFilesHasBeenSet; }
  inline void SetTotalNumberOfImportedFiles(long long value) {
    m_totalNumberOfImportedFilesHasBeenSet = true;
    m_totalNumberOfImportedFiles = value;
  }
  inline JobProgressReport& WithTotalNumberOfImportedFiles(long long value) {
    SetTotalNumberOfImportedFiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resources scanned from the S3 input bucket.</p>
   */
  inline long long GetTotalNumberOfResourcesScanned() const { return m_totalNumberOfResourcesScanned; }
  inline bool TotalNumberOfResourcesScannedHasBeenSet() const { return m_totalNumberOfResourcesScannedHasBeenSet; }
  inline void SetTotalNumberOfResourcesScanned(long long value) {
    m_totalNumberOfResourcesScannedHasBeenSet = true;
    m_totalNumberOfResourcesScanned = value;
  }
  inline JobProgressReport& WithTotalNumberOfResourcesScanned(long long value) {
    SetTotalNumberOfResourcesScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resources imported.</p>
   */
  inline long long GetTotalNumberOfResourcesImported() const { return m_totalNumberOfResourcesImported; }
  inline bool TotalNumberOfResourcesImportedHasBeenSet() const { return m_totalNumberOfResourcesImportedHasBeenSet; }
  inline void SetTotalNumberOfResourcesImported(long long value) {
    m_totalNumberOfResourcesImportedHasBeenSet = true;
    m_totalNumberOfResourcesImported = value;
  }
  inline JobProgressReport& WithTotalNumberOfResourcesImported(long long value) {
    SetTotalNumberOfResourcesImported(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resources that failed due to customer error.</p>
   */
  inline long long GetTotalNumberOfResourcesWithCustomerError() const { return m_totalNumberOfResourcesWithCustomerError; }
  inline bool TotalNumberOfResourcesWithCustomerErrorHasBeenSet() const { return m_totalNumberOfResourcesWithCustomerErrorHasBeenSet; }
  inline void SetTotalNumberOfResourcesWithCustomerError(long long value) {
    m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = true;
    m_totalNumberOfResourcesWithCustomerError = value;
  }
  inline JobProgressReport& WithTotalNumberOfResourcesWithCustomerError(long long value) {
    SetTotalNumberOfResourcesWithCustomerError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of files that failed to be read from the S3 input bucket due to
   * customer error.</p>
   */
  inline long long GetTotalNumberOfFilesReadWithCustomerError() const { return m_totalNumberOfFilesReadWithCustomerError; }
  inline bool TotalNumberOfFilesReadWithCustomerErrorHasBeenSet() const { return m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet; }
  inline void SetTotalNumberOfFilesReadWithCustomerError(long long value) {
    m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = true;
    m_totalNumberOfFilesReadWithCustomerError = value;
  }
  inline JobProgressReport& WithTotalNumberOfFilesReadWithCustomerError(long long value) {
    SetTotalNumberOfFilesReadWithCustomerError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR files scanned from the S3 input bucket.</p>
   */
  inline long long GetTotalNumberOfScannedNonFhirFiles() const { return m_totalNumberOfScannedNonFhirFiles; }
  inline bool TotalNumberOfScannedNonFhirFilesHasBeenSet() const { return m_totalNumberOfScannedNonFhirFilesHasBeenSet; }
  inline void SetTotalNumberOfScannedNonFhirFiles(long long value) {
    m_totalNumberOfScannedNonFhirFilesHasBeenSet = true;
    m_totalNumberOfScannedNonFhirFiles = value;
  }
  inline JobProgressReport& WithTotalNumberOfScannedNonFhirFiles(long long value) {
    SetTotalNumberOfScannedNonFhirFiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size (in MB) of non-FHIR files scanned from the S3 input bucket.</p>
   */
  inline double GetTotalSizeOfScannedNonFhirFilesInMB() const { return m_totalSizeOfScannedNonFhirFilesInMB; }
  inline bool TotalSizeOfScannedNonFhirFilesInMBHasBeenSet() const { return m_totalSizeOfScannedNonFhirFilesInMBHasBeenSet; }
  inline void SetTotalSizeOfScannedNonFhirFilesInMB(double value) {
    m_totalSizeOfScannedNonFhirFilesInMBHasBeenSet = true;
    m_totalSizeOfScannedNonFhirFilesInMB = value;
  }
  inline JobProgressReport& WithTotalSizeOfScannedNonFhirFilesInMB(double value) {
    SetTotalSizeOfScannedNonFhirFilesInMB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR files imported.</p>
   */
  inline long long GetTotalNumberOfImportedNonFhirFiles() const { return m_totalNumberOfImportedNonFhirFiles; }
  inline bool TotalNumberOfImportedNonFhirFilesHasBeenSet() const { return m_totalNumberOfImportedNonFhirFilesHasBeenSet; }
  inline void SetTotalNumberOfImportedNonFhirFiles(long long value) {
    m_totalNumberOfImportedNonFhirFilesHasBeenSet = true;
    m_totalNumberOfImportedNonFhirFiles = value;
  }
  inline JobProgressReport& WithTotalNumberOfImportedNonFhirFiles(long long value) {
    SetTotalNumberOfImportedNonFhirFiles(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR resources scanned from the S3 input bucket.</p>
   */
  inline long long GetTotalNumberOfNonFhirResourcesScanned() const { return m_totalNumberOfNonFhirResourcesScanned; }
  inline bool TotalNumberOfNonFhirResourcesScannedHasBeenSet() const { return m_totalNumberOfNonFhirResourcesScannedHasBeenSet; }
  inline void SetTotalNumberOfNonFhirResourcesScanned(long long value) {
    m_totalNumberOfNonFhirResourcesScannedHasBeenSet = true;
    m_totalNumberOfNonFhirResourcesScanned = value;
  }
  inline JobProgressReport& WithTotalNumberOfNonFhirResourcesScanned(long long value) {
    SetTotalNumberOfNonFhirResourcesScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR resources imported.</p>
   */
  inline long long GetTotalNumberOfNonFhirResourcesImported() const { return m_totalNumberOfNonFhirResourcesImported; }
  inline bool TotalNumberOfNonFhirResourcesImportedHasBeenSet() const { return m_totalNumberOfNonFhirResourcesImportedHasBeenSet; }
  inline void SetTotalNumberOfNonFhirResourcesImported(long long value) {
    m_totalNumberOfNonFhirResourcesImportedHasBeenSet = true;
    m_totalNumberOfNonFhirResourcesImported = value;
  }
  inline JobProgressReport& WithTotalNumberOfNonFhirResourcesImported(long long value) {
    SetTotalNumberOfNonFhirResourcesImported(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR resources that failed due to customer error.</p>
   */
  inline long long GetTotalNumberOfNonFhirResourcesWithCustomerError() const { return m_totalNumberOfNonFhirResourcesWithCustomerError; }
  inline bool TotalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet() const {
    return m_totalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet;
  }
  inline void SetTotalNumberOfNonFhirResourcesWithCustomerError(long long value) {
    m_totalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet = true;
    m_totalNumberOfNonFhirResourcesWithCustomerError = value;
  }
  inline JobProgressReport& WithTotalNumberOfNonFhirResourcesWithCustomerError(long long value) {
    SetTotalNumberOfNonFhirResourcesWithCustomerError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of non-FHIR files that failed to be read from the S3 input bucket
   * due to customer error.</p>
   */
  inline long long GetTotalNumberOfNonFhirFilesReadWithCustomerError() const { return m_totalNumberOfNonFhirFilesReadWithCustomerError; }
  inline bool TotalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet() const {
    return m_totalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet;
  }
  inline void SetTotalNumberOfNonFhirFilesReadWithCustomerError(long long value) {
    m_totalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet = true;
    m_totalNumberOfNonFhirFilesReadWithCustomerError = value;
  }
  inline JobProgressReport& WithTotalNumberOfNonFhirFilesReadWithCustomerError(long long value) {
    SetTotalNumberOfNonFhirFilesReadWithCustomerError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transaction rate the import job is processed at.</p>
   */
  inline double GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(double value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline JobProgressReport& WithThroughput(double value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of CCDA files successfully transformed during the import's
   * transformation phase. Populated only for import jobs that use the
   * two-Step-Function (transformation + ingestion) flow; null for legacy single-SF
   * imports and for pure FHIR imports that skip transformation.</p>
   */
  inline long long GetTotalFilesConverted() const { return m_totalFilesConverted; }
  inline bool TotalFilesConvertedHasBeenSet() const { return m_totalFilesConvertedHasBeenSet; }
  inline void SetTotalFilesConverted(long long value) {
    m_totalFilesConvertedHasBeenSet = true;
    m_totalFilesConverted = value;
  }
  inline JobProgressReport& WithTotalFilesConverted(long long value) {
    SetTotalFilesConverted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of FHIR resources produced by the transformation phase. Populated only
   * for import jobs that use the two-Step-Function flow; null for legacy single-SF
   * imports and for pure FHIR imports.</p>
   */
  inline long long GetTotalResourcesGenerated() const { return m_totalResourcesGenerated; }
  inline bool TotalResourcesGeneratedHasBeenSet() const { return m_totalResourcesGeneratedHasBeenSet; }
  inline void SetTotalResourcesGenerated(long long value) {
    m_totalResourcesGeneratedHasBeenSet = true;
    m_totalResourcesGenerated = value;
  }
  inline JobProgressReport& WithTotalResourcesGenerated(long long value) {
    SetTotalResourcesGenerated(value);
    return *this;
  }
  ///@}
 private:
  long long m_totalNumberOfScannedFiles{0};

  double m_totalSizeOfScannedFilesInMB{0.0};

  long long m_totalNumberOfImportedFiles{0};

  long long m_totalNumberOfResourcesScanned{0};

  long long m_totalNumberOfResourcesImported{0};

  long long m_totalNumberOfResourcesWithCustomerError{0};

  long long m_totalNumberOfFilesReadWithCustomerError{0};

  long long m_totalNumberOfScannedNonFhirFiles{0};

  double m_totalSizeOfScannedNonFhirFilesInMB{0.0};

  long long m_totalNumberOfImportedNonFhirFiles{0};

  long long m_totalNumberOfNonFhirResourcesScanned{0};

  long long m_totalNumberOfNonFhirResourcesImported{0};

  long long m_totalNumberOfNonFhirResourcesWithCustomerError{0};

  long long m_totalNumberOfNonFhirFilesReadWithCustomerError{0};

  double m_throughput{0.0};

  long long m_totalFilesConverted{0};

  long long m_totalResourcesGenerated{0};
  bool m_totalNumberOfScannedFilesHasBeenSet = false;
  bool m_totalSizeOfScannedFilesInMBHasBeenSet = false;
  bool m_totalNumberOfImportedFilesHasBeenSet = false;
  bool m_totalNumberOfResourcesScannedHasBeenSet = false;
  bool m_totalNumberOfResourcesImportedHasBeenSet = false;
  bool m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = false;
  bool m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = false;
  bool m_totalNumberOfScannedNonFhirFilesHasBeenSet = false;
  bool m_totalSizeOfScannedNonFhirFilesInMBHasBeenSet = false;
  bool m_totalNumberOfImportedNonFhirFilesHasBeenSet = false;
  bool m_totalNumberOfNonFhirResourcesScannedHasBeenSet = false;
  bool m_totalNumberOfNonFhirResourcesImportedHasBeenSet = false;
  bool m_totalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet = false;
  bool m_totalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_totalFilesConvertedHasBeenSet = false;
  bool m_totalResourcesGeneratedHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
