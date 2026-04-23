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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/JobState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
   * associated with a specific job. The <code>Notification</code> object is returned
   * as a part of the response syntax of the <code>DescribeJob</code> action in the
   * <code>JobMetadata</code> data type.</p> <p>When the notification settings are
   * defined during job creation, you can choose to notify based on a specific set of
   * job states using the <code>JobStatesToNotify</code> array of strings, or you can
   * specify that you want to have Amazon SNS notifications sent out for all job
   * states with <code>NotifyAll</code> set to true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Notification">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API Notification
  {
  public:
    Notification();
    Notification(Aws::Utils::Json::JsonView jsonValue);
    Notification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline const Aws::String& GetSnsTopicARN() const{ return m_snsTopicARN; }

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline bool SnsTopicARNHasBeenSet() const { return m_snsTopicARNHasBeenSet; }

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline void SetSnsTopicARN(const Aws::String& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = value; }

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline void SetSnsTopicARN(Aws::String&& value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN = std::move(value); }

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline void SetSnsTopicARN(const char* value) { m_snsTopicARNHasBeenSet = true; m_snsTopicARN.assign(value); }

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline Notification& WithSnsTopicARN(const Aws::String& value) { SetSnsTopicARN(value); return *this;}

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline Notification& WithSnsTopicARN(Aws::String&& value) { SetSnsTopicARN(std::move(value)); return *this;}

    /**
     * <p>The new SNS <code>TopicArn</code> that you want to associate with this job.
     * You can create Amazon Resource Names (ARNs) for topics by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_CreateTopic.html">CreateTopic</a>
     * Amazon SNS API action.</p> <p>You can subscribe email addresses to an Amazon SNS
     * topic through the AWS Management Console, or by using the <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_Subscribe.html">Subscribe</a>
     * AWS Simple Notification Service (SNS) API action.</p>
     */
    inline Notification& WithSnsTopicARN(const char* value) { SetSnsTopicARN(value); return *this;}


    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline const Aws::Vector<JobState>& GetJobStatesToNotify() const{ return m_jobStatesToNotify; }

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline bool JobStatesToNotifyHasBeenSet() const { return m_jobStatesToNotifyHasBeenSet; }

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline void SetJobStatesToNotify(const Aws::Vector<JobState>& value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify = value; }

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline void SetJobStatesToNotify(Aws::Vector<JobState>&& value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify = std::move(value); }

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline Notification& WithJobStatesToNotify(const Aws::Vector<JobState>& value) { SetJobStatesToNotify(value); return *this;}

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline Notification& WithJobStatesToNotify(Aws::Vector<JobState>&& value) { SetJobStatesToNotify(std::move(value)); return *this;}

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline Notification& AddJobStatesToNotify(const JobState& value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify.push_back(value); return *this; }

    /**
     * <p>The list of job states that will trigger a notification for this job.</p>
     */
    inline Notification& AddJobStatesToNotify(JobState&& value) { m_jobStatesToNotifyHasBeenSet = true; m_jobStatesToNotify.push_back(std::move(value)); return *this; }


    /**
     * <p>Any change in job state will trigger a notification for this job.</p>
     */
    inline bool GetNotifyAll() const{ return m_notifyAll; }

    /**
     * <p>Any change in job state will trigger a notification for this job.</p>
     */
    inline bool NotifyAllHasBeenSet() const { return m_notifyAllHasBeenSet; }

    /**
     * <p>Any change in job state will trigger a notification for this job.</p>
     */
    inline void SetNotifyAll(bool value) { m_notifyAllHasBeenSet = true; m_notifyAll = value; }

    /**
     * <p>Any change in job state will trigger a notification for this job.</p>
     */
    inline Notification& WithNotifyAll(bool value) { SetNotifyAll(value); return *this;}

  private:

    Aws::String m_snsTopicARN;
    bool m_snsTopicARNHasBeenSet;

    Aws::Vector<JobState> m_jobStatesToNotify;
    bool m_jobStatesToNotifyHasBeenSet;

    bool m_notifyAll;
    bool m_notifyAllHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
