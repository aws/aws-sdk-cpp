/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The progress report of an import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/JobProgressReport">AWS
   * API Reference</a></p>
   */
  class JobProgressReport
  {
  public:
    AWS_HEALTHLAKE_API JobProgressReport();
    AWS_HEALTHLAKE_API JobProgressReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API JobProgressReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of files scanned from input S3 bucket.</p>
     */
    inline long long GetTotalNumberOfScannedFiles() const{ return m_totalNumberOfScannedFiles; }

    /**
     * <p>The number of files scanned from input S3 bucket.</p>
     */
    inline bool TotalNumberOfScannedFilesHasBeenSet() const { return m_totalNumberOfScannedFilesHasBeenSet; }

    /**
     * <p>The number of files scanned from input S3 bucket.</p>
     */
    inline void SetTotalNumberOfScannedFiles(long long value) { m_totalNumberOfScannedFilesHasBeenSet = true; m_totalNumberOfScannedFiles = value; }

    /**
     * <p>The number of files scanned from input S3 bucket.</p>
     */
    inline JobProgressReport& WithTotalNumberOfScannedFiles(long long value) { SetTotalNumberOfScannedFiles(value); return *this;}


    /**
     * <p>The size (in MB) of the files scanned from the input S3 bucket.</p>
     */
    inline double GetTotalSizeOfScannedFilesInMB() const{ return m_totalSizeOfScannedFilesInMB; }

    /**
     * <p>The size (in MB) of the files scanned from the input S3 bucket.</p>
     */
    inline bool TotalSizeOfScannedFilesInMBHasBeenSet() const { return m_totalSizeOfScannedFilesInMBHasBeenSet; }

    /**
     * <p>The size (in MB) of the files scanned from the input S3 bucket.</p>
     */
    inline void SetTotalSizeOfScannedFilesInMB(double value) { m_totalSizeOfScannedFilesInMBHasBeenSet = true; m_totalSizeOfScannedFilesInMB = value; }

    /**
     * <p>The size (in MB) of the files scanned from the input S3 bucket.</p>
     */
    inline JobProgressReport& WithTotalSizeOfScannedFilesInMB(double value) { SetTotalSizeOfScannedFilesInMB(value); return *this;}


    /**
     * <p>The number of files imported so far.</p>
     */
    inline long long GetTotalNumberOfImportedFiles() const{ return m_totalNumberOfImportedFiles; }

    /**
     * <p>The number of files imported so far.</p>
     */
    inline bool TotalNumberOfImportedFilesHasBeenSet() const { return m_totalNumberOfImportedFilesHasBeenSet; }

    /**
     * <p>The number of files imported so far.</p>
     */
    inline void SetTotalNumberOfImportedFiles(long long value) { m_totalNumberOfImportedFilesHasBeenSet = true; m_totalNumberOfImportedFiles = value; }

    /**
     * <p>The number of files imported so far.</p>
     */
    inline JobProgressReport& WithTotalNumberOfImportedFiles(long long value) { SetTotalNumberOfImportedFiles(value); return *this;}


    /**
     * <p>The number of resources scanned from the input S3 bucket.</p>
     */
    inline long long GetTotalNumberOfResourcesScanned() const{ return m_totalNumberOfResourcesScanned; }

    /**
     * <p>The number of resources scanned from the input S3 bucket.</p>
     */
    inline bool TotalNumberOfResourcesScannedHasBeenSet() const { return m_totalNumberOfResourcesScannedHasBeenSet; }

    /**
     * <p>The number of resources scanned from the input S3 bucket.</p>
     */
    inline void SetTotalNumberOfResourcesScanned(long long value) { m_totalNumberOfResourcesScannedHasBeenSet = true; m_totalNumberOfResourcesScanned = value; }

    /**
     * <p>The number of resources scanned from the input S3 bucket.</p>
     */
    inline JobProgressReport& WithTotalNumberOfResourcesScanned(long long value) { SetTotalNumberOfResourcesScanned(value); return *this;}


    /**
     * <p>The number of resources imported so far.</p>
     */
    inline long long GetTotalNumberOfResourcesImported() const{ return m_totalNumberOfResourcesImported; }

    /**
     * <p>The number of resources imported so far.</p>
     */
    inline bool TotalNumberOfResourcesImportedHasBeenSet() const { return m_totalNumberOfResourcesImportedHasBeenSet; }

    /**
     * <p>The number of resources imported so far.</p>
     */
    inline void SetTotalNumberOfResourcesImported(long long value) { m_totalNumberOfResourcesImportedHasBeenSet = true; m_totalNumberOfResourcesImported = value; }

    /**
     * <p>The number of resources imported so far.</p>
     */
    inline JobProgressReport& WithTotalNumberOfResourcesImported(long long value) { SetTotalNumberOfResourcesImported(value); return *this;}


    /**
     * <p>The number of resources that failed due to customer error.</p>
     */
    inline long long GetTotalNumberOfResourcesWithCustomerError() const{ return m_totalNumberOfResourcesWithCustomerError; }

    /**
     * <p>The number of resources that failed due to customer error.</p>
     */
    inline bool TotalNumberOfResourcesWithCustomerErrorHasBeenSet() const { return m_totalNumberOfResourcesWithCustomerErrorHasBeenSet; }

    /**
     * <p>The number of resources that failed due to customer error.</p>
     */
    inline void SetTotalNumberOfResourcesWithCustomerError(long long value) { m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = true; m_totalNumberOfResourcesWithCustomerError = value; }

    /**
     * <p>The number of resources that failed due to customer error.</p>
     */
    inline JobProgressReport& WithTotalNumberOfResourcesWithCustomerError(long long value) { SetTotalNumberOfResourcesWithCustomerError(value); return *this;}


    /**
     * <p>The number of files that failed to be read from the input S3 bucket due to
     * customer error.</p>
     */
    inline long long GetTotalNumberOfFilesReadWithCustomerError() const{ return m_totalNumberOfFilesReadWithCustomerError; }

    /**
     * <p>The number of files that failed to be read from the input S3 bucket due to
     * customer error.</p>
     */
    inline bool TotalNumberOfFilesReadWithCustomerErrorHasBeenSet() const { return m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet; }

    /**
     * <p>The number of files that failed to be read from the input S3 bucket due to
     * customer error.</p>
     */
    inline void SetTotalNumberOfFilesReadWithCustomerError(long long value) { m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = true; m_totalNumberOfFilesReadWithCustomerError = value; }

    /**
     * <p>The number of files that failed to be read from the input S3 bucket due to
     * customer error.</p>
     */
    inline JobProgressReport& WithTotalNumberOfFilesReadWithCustomerError(long long value) { SetTotalNumberOfFilesReadWithCustomerError(value); return *this;}


    /**
     * <p>The throughput (in MB/sec) of the import job.</p>
     */
    inline double GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput (in MB/sec) of the import job.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput (in MB/sec) of the import job.</p>
     */
    inline void SetThroughput(double value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput (in MB/sec) of the import job.</p>
     */
    inline JobProgressReport& WithThroughput(double value) { SetThroughput(value); return *this;}

  private:

    long long m_totalNumberOfScannedFiles;
    bool m_totalNumberOfScannedFilesHasBeenSet = false;

    double m_totalSizeOfScannedFilesInMB;
    bool m_totalSizeOfScannedFilesInMBHasBeenSet = false;

    long long m_totalNumberOfImportedFiles;
    bool m_totalNumberOfImportedFilesHasBeenSet = false;

    long long m_totalNumberOfResourcesScanned;
    bool m_totalNumberOfResourcesScannedHasBeenSet = false;

    long long m_totalNumberOfResourcesImported;
    bool m_totalNumberOfResourcesImportedHasBeenSet = false;

    long long m_totalNumberOfResourcesWithCustomerError;
    bool m_totalNumberOfResourcesWithCustomerErrorHasBeenSet = false;

    long long m_totalNumberOfFilesReadWithCustomerError;
    bool m_totalNumberOfFilesReadWithCustomerErrorHasBeenSet = false;

    double m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
