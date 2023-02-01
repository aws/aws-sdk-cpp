/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/RetryableFailureType.h>
#include <utility>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>The criteria that determines how many retries are allowed for each failure
   * type for a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RetryCriteria">AWS
   * API Reference</a></p>
   */
  class RetryCriteria
  {
  public:
    AWS_IOT_API RetryCriteria();
    AWS_IOT_API RetryCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API RetryCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline const RetryableFailureType& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }

    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline void SetFailureType(const RetryableFailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }

    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline void SetFailureType(RetryableFailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }

    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline RetryCriteria& WithFailureType(const RetryableFailureType& value) { SetFailureType(value); return *this;}

    /**
     * <p>The type of job execution failures that can initiate a job retry.</p>
     */
    inline RetryCriteria& WithFailureType(RetryableFailureType&& value) { SetFailureType(std::move(value)); return *this;}


    /**
     * <p>The number of retries allowed for a failure type for the job.</p>
     */
    inline int GetNumberOfRetries() const{ return m_numberOfRetries; }

    /**
     * <p>The number of retries allowed for a failure type for the job.</p>
     */
    inline bool NumberOfRetriesHasBeenSet() const { return m_numberOfRetriesHasBeenSet; }

    /**
     * <p>The number of retries allowed for a failure type for the job.</p>
     */
    inline void SetNumberOfRetries(int value) { m_numberOfRetriesHasBeenSet = true; m_numberOfRetries = value; }

    /**
     * <p>The number of retries allowed for a failure type for the job.</p>
     */
    inline RetryCriteria& WithNumberOfRetries(int value) { SetNumberOfRetries(value); return *this;}

  private:

    RetryableFailureType m_failureType;
    bool m_failureTypeHasBeenSet = false;

    int m_numberOfRetries;
    bool m_numberOfRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
