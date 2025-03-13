/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdatePipelineNotificationsRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API UpdatePipelineNotificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipelineNotifications"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the pipeline for which you want to change notification
     * settings.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdatePipelineNotificationsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic ARN for the Amazon Simple Notification Service (Amazon SNS) topic
     * that you want to notify to report job status.</p>  <p>To receive
     * notifications, you must also subscribe to the new topic in the Amazon SNS
     * console.</p>  <ul> <li> <p> <b>Progressing</b>: The topic ARN for
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
    inline const Notifications& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = Notifications>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = Notifications>
    UpdatePipelineNotificationsRequest& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Notifications m_notifications;
    bool m_notificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
