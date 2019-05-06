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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API NotifyWorkersRequest : public MTurkRequest
  {
  public:
    NotifyWorkersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyWorkers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline NotifyWorkersRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline NotifyWorkersRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the email message to send. Can include up to 200
     * characters.</p>
     */
    inline NotifyWorkersRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline const Aws::String& GetMessageText() const{ return m_messageText; }

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline void SetMessageText(const Aws::String& value) { m_messageTextHasBeenSet = true; m_messageText = value; }

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline void SetMessageText(Aws::String&& value) { m_messageTextHasBeenSet = true; m_messageText = std::move(value); }

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline void SetMessageText(const char* value) { m_messageTextHasBeenSet = true; m_messageText.assign(value); }

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline NotifyWorkersRequest& WithMessageText(const Aws::String& value) { SetMessageText(value); return *this;}

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline NotifyWorkersRequest& WithMessageText(Aws::String&& value) { SetMessageText(std::move(value)); return *this;}

    /**
     * <p>The text of the email message to send. Can include up to 4,096 characters</p>
     */
    inline NotifyWorkersRequest& WithMessageText(const char* value) { SetMessageText(value); return *this;}


    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkerIds() const{ return m_workerIds; }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline bool WorkerIdsHasBeenSet() const { return m_workerIdsHasBeenSet; }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline void SetWorkerIds(const Aws::Vector<Aws::String>& value) { m_workerIdsHasBeenSet = true; m_workerIds = value; }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline void SetWorkerIds(Aws::Vector<Aws::String>&& value) { m_workerIdsHasBeenSet = true; m_workerIds = std::move(value); }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline NotifyWorkersRequest& WithWorkerIds(const Aws::Vector<Aws::String>& value) { SetWorkerIds(value); return *this;}

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline NotifyWorkersRequest& WithWorkerIds(Aws::Vector<Aws::String>&& value) { SetWorkerIds(std::move(value)); return *this;}

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline NotifyWorkersRequest& AddWorkerIds(const Aws::String& value) { m_workerIdsHasBeenSet = true; m_workerIds.push_back(value); return *this; }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline NotifyWorkersRequest& AddWorkerIds(Aws::String&& value) { m_workerIdsHasBeenSet = true; m_workerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Worker IDs you wish to notify. You can notify upto 100 Workers at a
     * time.</p>
     */
    inline NotifyWorkersRequest& AddWorkerIds(const char* value) { m_workerIdsHasBeenSet = true; m_workerIds.push_back(value); return *this; }

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_messageText;
    bool m_messageTextHasBeenSet;

    Aws::Vector<Aws::String> m_workerIds;
    bool m_workerIdsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
