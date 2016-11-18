/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p> The <code>TestRoleRequest</code> structure. </p>
   */
  class AWS_ELASTICTRANSCODER_API TestRoleRequest : public ElasticTranscoderRequest
  {
  public:
    TestRoleRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline TestRoleRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline TestRoleRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to test.</p>
     */
    inline TestRoleRequest& WithRole(const char* value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline const Aws::String& GetInputBucket() const{ return m_inputBucket; }

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline void SetInputBucket(const Aws::String& value) { m_inputBucketHasBeenSet = true; m_inputBucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline void SetInputBucket(Aws::String&& value) { m_inputBucketHasBeenSet = true; m_inputBucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline void SetInputBucket(const char* value) { m_inputBucketHasBeenSet = true; m_inputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithInputBucket(const Aws::String& value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithInputBucket(Aws::String&& value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains media files to be transcoded. The action
     * attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithInputBucket(const char* value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline const Aws::String& GetOutputBucket() const{ return m_outputBucket; }

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline void SetOutputBucket(const Aws::String& value) { m_outputBucketHasBeenSet = true; m_outputBucket = value; }

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline void SetOutputBucket(Aws::String&& value) { m_outputBucketHasBeenSet = true; m_outputBucket = value; }

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline void SetOutputBucket(const char* value) { m_outputBucketHasBeenSet = true; m_outputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithOutputBucket(const Aws::String& value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithOutputBucket(Aws::String&& value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that Elastic Transcoder will write transcoded media
     * files to. The action attempts to read from this bucket.</p>
     */
    inline TestRoleRequest& WithOutputBucket(const char* value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline TestRoleRequest& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline TestRoleRequest& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(value); return *this;}

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline TestRoleRequest& AddTopics(const Aws::String& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline TestRoleRequest& AddTopics(Aws::String&& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>The ARNs of one or more Amazon Simple Notification Service (Amazon SNS)
     * topics that you want the action to send a test notification to.</p>
     */
    inline TestRoleRequest& AddTopics(const char* value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

  private:
    Aws::String m_role;
    bool m_roleHasBeenSet;
    Aws::String m_inputBucket;
    bool m_inputBucketHasBeenSet;
    Aws::String m_outputBucket;
    bool m_outputBucketHasBeenSet;
    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
