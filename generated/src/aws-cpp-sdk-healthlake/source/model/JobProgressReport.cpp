/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/JobProgressReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

JobProgressReport::JobProgressReport() : 
    m_totalNumberOfScannedFiles(0),
    m_totalNumberOfScannedFilesHasBeenSet(false),
    m_totalSizeOfScannedFilesInMB(0.0),
    m_totalSizeOfScannedFilesInMBHasBeenSet(false),
    m_totalNumberOfImportedFiles(0),
    m_totalNumberOfImportedFilesHasBeenSet(false),
    m_totalNumberOfResourcesScanned(0),
    m_totalNumberOfResourcesScannedHasBeenSet(false),
    m_totalNumberOfResourcesImported(0),
    m_totalNumberOfResourcesImportedHasBeenSet(false),
    m_totalNumberOfResourcesWithCustomerError(0),
    m_totalNumberOfResourcesWithCustomerErrorHasBeenSet(false),
    m_totalNumberOfFilesReadWithCustomerError(0),
    m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet(false),
    m_throughput(0.0),
    m_throughputHasBeenSet(false)
{
}

JobProgressReport::JobProgressReport(JsonView jsonValue) : 
    m_totalNumberOfScannedFiles(0),
    m_totalNumberOfScannedFilesHasBeenSet(false),
    m_totalSizeOfScannedFilesInMB(0.0),
    m_totalSizeOfScannedFilesInMBHasBeenSet(false),
    m_totalNumberOfImportedFiles(0),
    m_totalNumberOfImportedFilesHasBeenSet(false),
    m_totalNumberOfResourcesScanned(0),
    m_totalNumberOfResourcesScannedHasBeenSet(false),
    m_totalNumberOfResourcesImported(0),
    m_totalNumberOfResourcesImportedHasBeenSet(false),
    m_totalNumberOfResourcesWithCustomerError(0),
    m_totalNumberOfResourcesWithCustomerErrorHasBeenSet(false),
    m_totalNumberOfFilesReadWithCustomerError(0),
    m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet(false),
    m_throughput(0.0),
    m_throughputHasBeenSet(false)
{
  *this = jsonValue;
}

JobProgressReport& JobProgressReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalNumberOfScannedFiles"))
  {
    m_totalNumberOfScannedFiles = jsonValue.GetInt64("TotalNumberOfScannedFiles");

    m_totalNumberOfScannedFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalSizeOfScannedFilesInMB"))
  {
    m_totalSizeOfScannedFilesInMB = jsonValue.GetDouble("TotalSizeOfScannedFilesInMB");

    m_totalSizeOfScannedFilesInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfImportedFiles"))
  {
    m_totalNumberOfImportedFiles = jsonValue.GetInt64("TotalNumberOfImportedFiles");

    m_totalNumberOfImportedFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfResourcesScanned"))
  {
    m_totalNumberOfResourcesScanned = jsonValue.GetInt64("TotalNumberOfResourcesScanned");

    m_totalNumberOfResourcesScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfResourcesImported"))
  {
    m_totalNumberOfResourcesImported = jsonValue.GetInt64("TotalNumberOfResourcesImported");

    m_totalNumberOfResourcesImportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfResourcesWithCustomerError"))
  {
    m_totalNumberOfResourcesWithCustomerError = jsonValue.GetInt64("TotalNumberOfResourcesWithCustomerError");

    m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfFilesReadWithCustomerError"))
  {
    m_totalNumberOfFilesReadWithCustomerError = jsonValue.GetInt64("TotalNumberOfFilesReadWithCustomerError");

    m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Throughput"))
  {
    m_throughput = jsonValue.GetDouble("Throughput");

    m_throughputHasBeenSet = true;
  }

  return *this;
}

JsonValue JobProgressReport::Jsonize() const
{
  JsonValue payload;

  if(m_totalNumberOfScannedFilesHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfScannedFiles", m_totalNumberOfScannedFiles);

  }

  if(m_totalSizeOfScannedFilesInMBHasBeenSet)
  {
   payload.WithDouble("TotalSizeOfScannedFilesInMB", m_totalSizeOfScannedFilesInMB);

  }

  if(m_totalNumberOfImportedFilesHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfImportedFiles", m_totalNumberOfImportedFiles);

  }

  if(m_totalNumberOfResourcesScannedHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfResourcesScanned", m_totalNumberOfResourcesScanned);

  }

  if(m_totalNumberOfResourcesImportedHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfResourcesImported", m_totalNumberOfResourcesImported);

  }

  if(m_totalNumberOfResourcesWithCustomerErrorHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfResourcesWithCustomerError", m_totalNumberOfResourcesWithCustomerError);

  }

  if(m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet)
  {
   payload.WithInt64("TotalNumberOfFilesReadWithCustomerError", m_totalNumberOfFilesReadWithCustomerError);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithDouble("Throughput", m_throughput);

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
