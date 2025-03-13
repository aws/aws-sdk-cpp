/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class GetJobQueueSnapshotRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API GetJobQueueSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobQueueSnapshot"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The job queue’s name or full queue Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    GetJobQueueSnapshotRequest& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
