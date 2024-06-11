﻿/**
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
  class GetSessionActionRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetSessionActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSessionAction"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID for the session action.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetSessionActionRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetSessionActionRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetSessionActionRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the session.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GetSessionActionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetSessionActionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetSessionActionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID for the session action.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline GetSessionActionRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetSessionActionRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetSessionActionRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session action ID for the session.</p>
     */
    inline const Aws::String& GetSessionActionId() const{ return m_sessionActionId; }
    inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
    inline void SetSessionActionId(const Aws::String& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = value; }
    inline void SetSessionActionId(Aws::String&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::move(value); }
    inline void SetSessionActionId(const char* value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId.assign(value); }
    inline GetSessionActionRequest& WithSessionActionId(const Aws::String& value) { SetSessionActionId(value); return *this;}
    inline GetSessionActionRequest& WithSessionActionId(Aws::String&& value) { SetSessionActionId(std::move(value)); return *this;}
    inline GetSessionActionRequest& WithSessionActionId(const char* value) { SetSessionActionId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
