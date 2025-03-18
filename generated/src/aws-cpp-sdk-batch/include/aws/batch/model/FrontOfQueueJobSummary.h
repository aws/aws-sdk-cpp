/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents summary details for the first 100
   * <code>RUNNABLE</code> jobs in a job queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FrontOfQueueJobSummary">AWS
   * API Reference</a></p>
   */
  class FrontOfQueueJobSummary
  {
  public:
    AWS_BATCH_API FrontOfQueueJobSummary() = default;
    AWS_BATCH_API FrontOfQueueJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API FrontOfQueueJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for a job in a named job queue.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    FrontOfQueueJobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job transitioned to its
     * current position in the job queue.</p>
     */
    inline long long GetEarliestTimeAtPosition() const { return m_earliestTimeAtPosition; }
    inline bool EarliestTimeAtPositionHasBeenSet() const { return m_earliestTimeAtPositionHasBeenSet; }
    inline void SetEarliestTimeAtPosition(long long value) { m_earliestTimeAtPositionHasBeenSet = true; m_earliestTimeAtPosition = value; }
    inline FrontOfQueueJobSummary& WithEarliestTimeAtPosition(long long value) { SetEarliestTimeAtPosition(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    long long m_earliestTimeAtPosition{0};
    bool m_earliestTimeAtPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
