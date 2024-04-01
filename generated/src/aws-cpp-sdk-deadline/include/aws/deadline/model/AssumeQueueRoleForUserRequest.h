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
  class AssumeQueueRoleForUserRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API AssumeQueueRoleForUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeQueueRoleForUser"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID of the queue that the user assumes the role for.</p>
     */
    inline AssumeQueueRoleForUserRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
