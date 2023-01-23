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
   * <p>Contains the parameters for <code>DeleteJobQueue</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DeleteJobQueueRequest">AWS
   * API Reference</a></p>
   */
  class DeleteJobQueueRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DeleteJobQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJobQueue"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline DeleteJobQueueRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline DeleteJobQueueRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the queue to delete.</p>
     */
    inline DeleteJobQueueRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}

  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
