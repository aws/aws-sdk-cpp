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
  class AWS_MTURK_API AssociateQualificationWithWorkerRequest : public MTurkRequest
  {
  public:
    AssociateQualificationWithWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateQualificationWithWorker"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification type to use for the assigned Qualification.</p>
     */
    inline AssociateQualificationWithWorkerRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker to whom the Qualification is being assigned. Worker IDs
     * are included with submitted HIT assignments and Qualification requests. </p>
     */
    inline AssociateQualificationWithWorkerRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>The value of the Qualification to assign.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>The value of the Qualification to assign.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>The value of the Qualification to assign.</p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>The value of the Qualification to assign.</p>
     */
    inline AssociateQualificationWithWorkerRequest& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    /**
     * <p> Specifies whether to send a notification email message to the Worker saying
     * that the qualification was assigned to the Worker. Note: this is true by
     * default. </p>
     */
    inline bool GetSendNotification() const{ return m_sendNotification; }

    /**
     * <p> Specifies whether to send a notification email message to the Worker saying
     * that the qualification was assigned to the Worker. Note: this is true by
     * default. </p>
     */
    inline bool SendNotificationHasBeenSet() const { return m_sendNotificationHasBeenSet; }

    /**
     * <p> Specifies whether to send a notification email message to the Worker saying
     * that the qualification was assigned to the Worker. Note: this is true by
     * default. </p>
     */
    inline void SetSendNotification(bool value) { m_sendNotificationHasBeenSet = true; m_sendNotification = value; }

    /**
     * <p> Specifies whether to send a notification email message to the Worker saying
     * that the qualification was assigned to the Worker. Note: this is true by
     * default. </p>
     */
    inline AssociateQualificationWithWorkerRequest& WithSendNotification(bool value) { SetSendNotification(value); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    int m_integerValue;
    bool m_integerValueHasBeenSet;

    bool m_sendNotification;
    bool m_sendNotificationHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
