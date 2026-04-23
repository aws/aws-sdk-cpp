/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GREENGRASS_API BulkDeploymentMetrics
  {
  public:
    BulkDeploymentMetrics();
    BulkDeploymentMetrics(Aws::Utils::Json::JsonView jsonValue);
    BulkDeploymentMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The total number of records that returned a non-retryable error. For example,
     * this can occur if a group record from the input file uses an invalid format or
     * specifies a nonexistent group version, or if the execution role doesn't grant
     * permission to deploy a group or group version.
     */
    inline int GetInvalidInputRecords() const{ return m_invalidInputRecords; }

    /**
     * The total number of records that returned a non-retryable error. For example,
     * this can occur if a group record from the input file uses an invalid format or
     * specifies a nonexistent group version, or if the execution role doesn't grant
     * permission to deploy a group or group version.
     */
    inline bool InvalidInputRecordsHasBeenSet() const { return m_invalidInputRecordsHasBeenSet; }

    /**
     * The total number of records that returned a non-retryable error. For example,
     * this can occur if a group record from the input file uses an invalid format or
     * specifies a nonexistent group version, or if the execution role doesn't grant
     * permission to deploy a group or group version.
     */
    inline void SetInvalidInputRecords(int value) { m_invalidInputRecordsHasBeenSet = true; m_invalidInputRecords = value; }

    /**
     * The total number of records that returned a non-retryable error. For example,
     * this can occur if a group record from the input file uses an invalid format or
     * specifies a nonexistent group version, or if the execution role doesn't grant
     * permission to deploy a group or group version.
     */
    inline BulkDeploymentMetrics& WithInvalidInputRecords(int value) { SetInvalidInputRecords(value); return *this;}


    /**
     * The total number of group records from the input file that have been processed
     * so far, or attempted.
     */
    inline int GetRecordsProcessed() const{ return m_recordsProcessed; }

    /**
     * The total number of group records from the input file that have been processed
     * so far, or attempted.
     */
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }

    /**
     * The total number of group records from the input file that have been processed
     * so far, or attempted.
     */
    inline void SetRecordsProcessed(int value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }

    /**
     * The total number of group records from the input file that have been processed
     * so far, or attempted.
     */
    inline BulkDeploymentMetrics& WithRecordsProcessed(int value) { SetRecordsProcessed(value); return *this;}


    /**
     * The total number of deployment attempts that returned a retryable error. For
     * example, a retry is triggered if the attempt to deploy a group returns a
     * throttling error. ''StartBulkDeployment'' retries a group deployment up to five
     * times.
     */
    inline int GetRetryAttempts() const{ return m_retryAttempts; }

    /**
     * The total number of deployment attempts that returned a retryable error. For
     * example, a retry is triggered if the attempt to deploy a group returns a
     * throttling error. ''StartBulkDeployment'' retries a group deployment up to five
     * times.
     */
    inline bool RetryAttemptsHasBeenSet() const { return m_retryAttemptsHasBeenSet; }

    /**
     * The total number of deployment attempts that returned a retryable error. For
     * example, a retry is triggered if the attempt to deploy a group returns a
     * throttling error. ''StartBulkDeployment'' retries a group deployment up to five
     * times.
     */
    inline void SetRetryAttempts(int value) { m_retryAttemptsHasBeenSet = true; m_retryAttempts = value; }

    /**
     * The total number of deployment attempts that returned a retryable error. For
     * example, a retry is triggered if the attempt to deploy a group returns a
     * throttling error. ''StartBulkDeployment'' retries a group deployment up to five
     * times.
     */
    inline BulkDeploymentMetrics& WithRetryAttempts(int value) { SetRetryAttempts(value); return *this;}

  private:

    int m_invalidInputRecords;
    bool m_invalidInputRecordsHasBeenSet;

    int m_recordsProcessed;
    bool m_recordsProcessedHasBeenSet;

    int m_retryAttempts;
    bool m_retryAttemptsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
