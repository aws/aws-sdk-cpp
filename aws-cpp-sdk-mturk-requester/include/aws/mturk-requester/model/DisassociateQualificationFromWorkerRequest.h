﻿/**
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
  class AWS_MTURK_API DisassociateQualificationFromWorkerRequest : public MTurkRequest
  {
  public:
    DisassociateQualificationFromWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateQualificationFromWorker"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Worker who possesses the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification type of the Qualification to be revoked.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A text message that explains why the Qualification was revoked. The user who
     * had the Qualification sees this message.</p>
     */
    inline DisassociateQualificationFromWorkerRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
