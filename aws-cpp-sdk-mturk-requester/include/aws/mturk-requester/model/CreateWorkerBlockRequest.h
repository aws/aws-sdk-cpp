/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateWorkerBlockRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API CreateWorkerBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkerBlock"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
