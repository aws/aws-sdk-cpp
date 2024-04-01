/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class GetQueueEnvironmentRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetQueueEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueueEnvironment"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = value; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::move(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId.assign(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}


    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline GetQueueEnvironmentRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
