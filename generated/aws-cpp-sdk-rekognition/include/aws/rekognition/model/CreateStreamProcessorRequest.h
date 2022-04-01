﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/StreamProcessorInput.h>
#include <aws/rekognition/model/StreamProcessorOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API CreateStreamProcessorRequest : public RekognitionRequest
  {
  public:
    CreateStreamProcessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamProcessor"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline const StreamProcessorInput& GetInput() const{ return m_input; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline void SetInput(const StreamProcessorInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline void SetInput(StreamProcessorInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline CreateStreamProcessorRequest& WithInput(const StreamProcessorInput& value) { SetInput(value); return *this;}

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is
     * <code>StreamProcessorInput</code>.</p>
     */
    inline CreateStreamProcessorRequest& WithInput(StreamProcessorInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline const StreamProcessorOutput& GetOutput() const{ return m_output; }

    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline void SetOutput(const StreamProcessorOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline void SetOutput(StreamProcessorOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline CreateStreamProcessorRequest& WithOutput(const StreamProcessorOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>Kinesis data stream stream to which Amazon Rekognition Video puts the
     * analysis results. If you are using the AWS CLI, the parameter name is
     * <code>StreamProcessorOutput</code>.</p>
     */
    inline CreateStreamProcessorRequest& WithOutput(StreamProcessorOutput&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline CreateStreamProcessorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline CreateStreamProcessorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. </p>
     */
    inline CreateStreamProcessorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline const StreamProcessorSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline void SetSettings(const StreamProcessorSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline void SetSettings(StreamProcessorSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline CreateStreamProcessorRequest& WithSettings(const StreamProcessorSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Face recognition input parameters to be used by the stream processor.
     * Includes the collection to use for face recognition and the face attributes to
     * detect.</p>
     */
    inline CreateStreamProcessorRequest& WithSettings(StreamProcessorSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline CreateStreamProcessorRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline CreateStreamProcessorRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline CreateStreamProcessorRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline CreateStreamProcessorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    StreamProcessorInput m_input;
    bool m_inputHasBeenSet;

    StreamProcessorOutput m_output;
    bool m_outputHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    StreamProcessorSettings m_settings;
    bool m_settingsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
