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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Video.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/NotificationChannel.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API StartCelebrityRecognitionRequest : public RekognitionRequest
  {
  public:
    StartCelebrityRecognitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCelebrityRecognition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline const Video& GetVideo() const{ return m_video; }

    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline StartCelebrityRecognitionRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}

    /**
     * <p>The video in which you want to recognize celebrities. The video must be
     * stored in an Amazon S3 bucket.</p>
     */
    inline StartCelebrityRecognitionRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartCelebrityRecognitionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartCelebrityRecognitionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartCelebrityRecognition</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartCelebrityRecognitionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline StartCelebrityRecognitionRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the celebrity recognition analysis to.</p>
     */
    inline StartCelebrityRecognitionRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline StartCelebrityRecognitionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline StartCelebrityRecognitionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>Unique identifier you specify to identify the job in the completion status
     * published to the Amazon Simple Notification Service topic. </p>
     */
    inline StartCelebrityRecognitionRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}

  private:

    Video m_video;
    bool m_videoHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
