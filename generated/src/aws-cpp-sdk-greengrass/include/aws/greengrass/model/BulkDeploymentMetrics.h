/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>

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
namespace Greengrass
{
namespace Model
{

  /**
   * Relevant metrics on input records processed during bulk deployment.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/BulkDeploymentMetrics">AWS
   * API Reference</a></p>
   */
  class BulkDeploymentMetrics
  {
  public:
    AWS_GREENGRASS_API BulkDeploymentMetrics() = default;
    AWS_GREENGRASS_API BulkDeploymentMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API BulkDeploymentMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The total number of records that returned a non-retryable error. For example,
     * this can occur if a group record from the input file uses an invalid format or
     * specifies a nonexistent group version, or if the execution role doesn't grant
     * permission to deploy a group or group version.
     */
    inline int GetInvalidInputRecords() const { return m_invalidInputRecords; }
    inline bool InvalidInputRecordsHasBeenSet() const { return m_invalidInputRecordsHasBeenSet; }
    inline void SetInvalidInputRecords(int value) { m_invalidInputRecordsHasBeenSet = true; m_invalidInputRecords = value; }
    inline BulkDeploymentMetrics& WithInvalidInputRecords(int value) { SetInvalidInputRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * The total number of group records from the input file that have been processed
     * so far, or attempted.
     */
    inline int GetRecordsProcessed() const { return m_recordsProcessed; }
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }
    inline void SetRecordsProcessed(int value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }
    inline BulkDeploymentMetrics& WithRecordsProcessed(int value) { SetRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * The total number of deployment attempts that returned a retryable error. For
     * example, a retry is triggered if the attempt to deploy a group returns a
     * throttling error. ''StartBulkDeployment'' retries a group deployment up to five
     * times.
     */
    inline int GetRetryAttempts() const { return m_retryAttempts; }
    inline bool RetryAttemptsHasBeenSet() const { return m_retryAttemptsHasBeenSet; }
    inline void SetRetryAttempts(int value) { m_retryAttemptsHasBeenSet = true; m_retryAttempts = value; }
    inline BulkDeploymentMetrics& WithRetryAttempts(int value) { SetRetryAttempts(value); return *this;}
    ///@}
  private:

    int m_invalidInputRecords{0};
    bool m_invalidInputRecordsHasBeenSet = false;

    int m_recordsProcessed{0};
    bool m_recordsProcessedHasBeenSet = false;

    int m_retryAttempts{0};
    bool m_retryAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
