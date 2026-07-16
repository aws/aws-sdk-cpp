/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/JobProgressReport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

JobProgressReport::JobProgressReport(JsonView jsonValue) { *this = jsonValue; }

JobProgressReport& JobProgressReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalNumberOfScannedFiles")) {
    m_totalNumberOfScannedFiles = jsonValue.GetInt64("TotalNumberOfScannedFiles");
    m_totalNumberOfScannedFilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalSizeOfScannedFilesInMB")) {
    m_totalSizeOfScannedFilesInMB = jsonValue.GetDouble("TotalSizeOfScannedFilesInMB");
    m_totalSizeOfScannedFilesInMBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfImportedFiles")) {
    m_totalNumberOfImportedFiles = jsonValue.GetInt64("TotalNumberOfImportedFiles");
    m_totalNumberOfImportedFilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfResourcesScanned")) {
    m_totalNumberOfResourcesScanned = jsonValue.GetInt64("TotalNumberOfResourcesScanned");
    m_totalNumberOfResourcesScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfResourcesImported")) {
    m_totalNumberOfResourcesImported = jsonValue.GetInt64("TotalNumberOfResourcesImported");
    m_totalNumberOfResourcesImportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfResourcesWithCustomerError")) {
    m_totalNumberOfResourcesWithCustomerError = jsonValue.GetInt64("TotalNumberOfResourcesWithCustomerError");
    m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfFilesReadWithCustomerError")) {
    m_totalNumberOfFilesReadWithCustomerError = jsonValue.GetInt64("TotalNumberOfFilesReadWithCustomerError");
    m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfScannedNonFhirFiles")) {
    m_totalNumberOfScannedNonFhirFiles = jsonValue.GetInt64("TotalNumberOfScannedNonFhirFiles");
    m_totalNumberOfScannedNonFhirFilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalSizeOfScannedNonFhirFilesInMB")) {
    m_totalSizeOfScannedNonFhirFilesInMB = jsonValue.GetDouble("TotalSizeOfScannedNonFhirFilesInMB");
    m_totalSizeOfScannedNonFhirFilesInMBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfImportedNonFhirFiles")) {
    m_totalNumberOfImportedNonFhirFiles = jsonValue.GetInt64("TotalNumberOfImportedNonFhirFiles");
    m_totalNumberOfImportedNonFhirFilesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfNonFhirResourcesScanned")) {
    m_totalNumberOfNonFhirResourcesScanned = jsonValue.GetInt64("TotalNumberOfNonFhirResourcesScanned");
    m_totalNumberOfNonFhirResourcesScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfNonFhirResourcesImported")) {
    m_totalNumberOfNonFhirResourcesImported = jsonValue.GetInt64("TotalNumberOfNonFhirResourcesImported");
    m_totalNumberOfNonFhirResourcesImportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfNonFhirResourcesWithCustomerError")) {
    m_totalNumberOfNonFhirResourcesWithCustomerError = jsonValue.GetInt64("TotalNumberOfNonFhirResourcesWithCustomerError");
    m_totalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumberOfNonFhirFilesReadWithCustomerError")) {
    m_totalNumberOfNonFhirFilesReadWithCustomerError = jsonValue.GetInt64("TotalNumberOfNonFhirFilesReadWithCustomerError");
    m_totalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Throughput")) {
    m_throughput = jsonValue.GetDouble("Throughput");
    m_throughputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalFilesConverted")) {
    m_totalFilesConverted = jsonValue.GetInt64("TotalFilesConverted");
    m_totalFilesConvertedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalResourcesGenerated")) {
    m_totalResourcesGenerated = jsonValue.GetInt64("TotalResourcesGenerated");
    m_totalResourcesGeneratedHasBeenSet = true;
  }
  return *this;
}

JsonValue JobProgressReport::Jsonize() const {
  JsonValue payload;

  if (m_totalNumberOfScannedFilesHasBeenSet) {
    payload.WithInt64("TotalNumberOfScannedFiles", m_totalNumberOfScannedFiles);
  }

  if (m_totalSizeOfScannedFilesInMBHasBeenSet) {
    payload.WithDouble("TotalSizeOfScannedFilesInMB", m_totalSizeOfScannedFilesInMB);
  }

  if (m_totalNumberOfImportedFilesHasBeenSet) {
    payload.WithInt64("TotalNumberOfImportedFiles", m_totalNumberOfImportedFiles);
  }

  if (m_totalNumberOfResourcesScannedHasBeenSet) {
    payload.WithInt64("TotalNumberOfResourcesScanned", m_totalNumberOfResourcesScanned);
  }

  if (m_totalNumberOfResourcesImportedHasBeenSet) {
    payload.WithInt64("TotalNumberOfResourcesImported", m_totalNumberOfResourcesImported);
  }

  if (m_totalNumberOfResourcesWithCustomerErrorHasBeenSet) {
    payload.WithInt64("TotalNumberOfResourcesWithCustomerError", m_totalNumberOfResourcesWithCustomerError);
  }

  if (m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet) {
    payload.WithInt64("TotalNumberOfFilesReadWithCustomerError", m_totalNumberOfFilesReadWithCustomerError);
  }

  if (m_totalNumberOfScannedNonFhirFilesHasBeenSet) {
    payload.WithInt64("TotalNumberOfScannedNonFhirFiles", m_totalNumberOfScannedNonFhirFiles);
  }

  if (m_totalSizeOfScannedNonFhirFilesInMBHasBeenSet) {
    payload.WithDouble("TotalSizeOfScannedNonFhirFilesInMB", m_totalSizeOfScannedNonFhirFilesInMB);
  }

  if (m_totalNumberOfImportedNonFhirFilesHasBeenSet) {
    payload.WithInt64("TotalNumberOfImportedNonFhirFiles", m_totalNumberOfImportedNonFhirFiles);
  }

  if (m_totalNumberOfNonFhirResourcesScannedHasBeenSet) {
    payload.WithInt64("TotalNumberOfNonFhirResourcesScanned", m_totalNumberOfNonFhirResourcesScanned);
  }

  if (m_totalNumberOfNonFhirResourcesImportedHasBeenSet) {
    payload.WithInt64("TotalNumberOfNonFhirResourcesImported", m_totalNumberOfNonFhirResourcesImported);
  }

  if (m_totalNumberOfNonFhirResourcesWithCustomerErrorHasBeenSet) {
    payload.WithInt64("TotalNumberOfNonFhirResourcesWithCustomerError", m_totalNumberOfNonFhirResourcesWithCustomerError);
  }

  if (m_totalNumberOfNonFhirFilesReadWithCustomerErrorHasBeenSet) {
    payload.WithInt64("TotalNumberOfNonFhirFilesReadWithCustomerError", m_totalNumberOfNonFhirFilesReadWithCustomerError);
  }

  if (m_throughputHasBeenSet) {
    payload.WithDouble("Throughput", m_throughput);
  }

  if (m_totalFilesConvertedHasBeenSet) {
    payload.WithInt64("TotalFilesConverted", m_totalFilesConverted);
  }

  if (m_totalResourcesGeneratedHasBeenSet) {
    payload.WithInt64("TotalResourcesGenerated", m_totalResourcesGenerated);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
