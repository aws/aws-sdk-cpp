/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class CancelJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CancelJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline CancelJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline CancelJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline CancelJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline CancelJobRequest& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline CancelJobRequest& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}

    /**
     * <p>(Optional)A reason code string that explains why the job was canceled.</p>
     */
    inline CancelJobRequest& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}


    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline CancelJobRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline CancelJobRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment string describing why the job was canceled.</p>
     */
    inline CancelJobRequest& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>(Optional) If <code>true</code> job executions with status "IN_PROGRESS" and
     * "QUEUED" are canceled, otherwise only job executions with status "QUEUED" are
     * canceled. The default is <code>false</code>.</p> <p>Canceling a job which is
     * "IN_PROGRESS", will cause a device which is executing the job to be unable to
     * update the job execution status. Use caution and ensure that each device
     * executing a job which is canceled is able to recover to a valid state.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>(Optional) If <code>true</code> job executions with status "IN_PROGRESS" and
     * "QUEUED" are canceled, otherwise only job executions with status "QUEUED" are
     * canceled. The default is <code>false</code>.</p> <p>Canceling a job which is
     * "IN_PROGRESS", will cause a device which is executing the job to be unable to
     * update the job execution status. Use caution and ensure that each device
     * executing a job which is canceled is able to recover to a valid state.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>(Optional) If <code>true</code> job executions with status "IN_PROGRESS" and
     * "QUEUED" are canceled, otherwise only job executions with status "QUEUED" are
     * canceled. The default is <code>false</code>.</p> <p>Canceling a job which is
     * "IN_PROGRESS", will cause a device which is executing the job to be unable to
     * update the job execution status. Use caution and ensure that each device
     * executing a job which is canceled is able to recover to a valid state.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>(Optional) If <code>true</code> job executions with status "IN_PROGRESS" and
     * "QUEUED" are canceled, otherwise only job executions with status "QUEUED" are
     * canceled. The default is <code>false</code>.</p> <p>Canceling a job which is
     * "IN_PROGRESS", will cause a device which is executing the job to be unable to
     * update the job execution status. Use caution and ensure that each device
     * executing a job which is canceled is able to recover to a valid state.</p>
     */
    inline CancelJobRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
