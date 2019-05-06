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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Notifications.h>
#include <utility>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>UpdatePipelineNotificationsRequest</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineNotificationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineNotificationsRequest : public ElasticTranscoderRequest
  {
  public:
    UpdatePipelineNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipelineNotifications"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline UpdatePipelineNotificationsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline UpdatePipelineNotificationsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline UpdatePipelineNotificationsRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline const Notifications& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline void SetNotifications(const Notifications& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline void SetNotifications(Notifications&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline UpdatePipelineNotificationsRequest& WithNotifications(const Notifications& value) { SetNotifications(value); return *this;}

    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p> <important> <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p> </important> <ul> <li> <p> <b>Progressing</b>: The topic ARN for
     * the Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify when Elastic Transcoder has started to process jobs that are added to
     * this pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Complete</b>: The topic ARN for the Amazon SNS
     * topic that you want to notify when Elastic Transcoder has finished processing a
     * job. This is the ARN that Amazon SNS returned when you created the topic.</p>
     * </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic that you
     * want to notify when Elastic Transcoder encounters a warning condition. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> <li> <p>
     * <b>Error</b>: The topic ARN for the Amazon SNS topic that you want to notify
     * when Elastic Transcoder encounters an error condition. This is the ARN that
     * Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline UpdatePipelineNotificationsRequest& WithNotifications(Notifications&& value) { SetNotifications(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Notifications m_notifications;
    bool m_notificationsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
