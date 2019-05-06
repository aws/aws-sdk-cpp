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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API DeleteWorkerBlockRequest : public MTurkRequest
  {
  public:
    DeleteWorkerBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkerBlock"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline DeleteWorkerBlockRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline DeleteWorkerBlockRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Worker to unblock.</p>
     */
    inline DeleteWorkerBlockRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline DeleteWorkerBlockRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline DeleteWorkerBlockRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message that explains the reason for unblocking the Worker. The Worker does
     * not see this message.</p>
     */
    inline DeleteWorkerBlockRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
