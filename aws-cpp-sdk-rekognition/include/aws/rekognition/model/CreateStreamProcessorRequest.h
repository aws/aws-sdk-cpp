/**
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
#include <aws/rekognition/model/StreamProcessorNotificationChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/rekognition/model/RegionOfInterest.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateStreamProcessorRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateStreamProcessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamProcessor"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline const StreamProcessorInput& GetInput() const{ return m_input; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline void SetInput(const StreamProcessorInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline void SetInput(StreamProcessorInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline CreateStreamProcessorRequest& WithInput(const StreamProcessorInput& value) { SetInput(value); return *this;}

    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline CreateStreamProcessorRequest& WithInput(StreamProcessorInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline const StreamProcessorOutput& GetOutput() const{ return m_output; }

    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline void SetOutput(const StreamProcessorOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline void SetOutput(StreamProcessorOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline CreateStreamProcessorRequest& WithOutput(const StreamProcessorOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline CreateStreamProcessorRequest& WithOutput(StreamProcessorOutput&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline CreateStreamProcessorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline CreateStreamProcessorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline CreateStreamProcessorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline const StreamProcessorSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline void SetSettings(const StreamProcessorSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline void SetSettings(StreamProcessorSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline CreateStreamProcessorRequest& WithSettings(const StreamProcessorSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline CreateStreamProcessorRequest& WithSettings(StreamProcessorSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline CreateStreamProcessorRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline CreateStreamProcessorRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
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


    
    inline const StreamProcessorNotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    
    inline void SetNotificationChannel(const StreamProcessorNotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    
    inline void SetNotificationChannel(StreamProcessorNotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    
    inline CreateStreamProcessorRequest& WithNotificationChannel(const StreamProcessorNotificationChannel& value) { SetNotificationChannel(value); return *this;}

    
    inline CreateStreamProcessorRequest& WithNotificationChannel(StreamProcessorNotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline CreateStreamProcessorRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline CreateStreamProcessorRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline CreateStreamProcessorRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const{ return m_regionsOfInterest; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline bool RegionsOfInterestHasBeenSet() const { return m_regionsOfInterestHasBeenSet; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline void SetRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = value; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline void SetRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::move(value); }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline CreateStreamProcessorRequest& WithRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { SetRegionsOfInterest(value); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline CreateStreamProcessorRequest& WithRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { SetRegionsOfInterest(std::move(value)); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline CreateStreamProcessorRequest& AddRegionsOfInterest(const RegionOfInterest& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(value); return *this; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline CreateStreamProcessorRequest& AddRegionsOfInterest(RegionOfInterest&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(std::move(value)); return *this; }


    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreference() const{ return m_dataSharingPreference; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline bool DataSharingPreferenceHasBeenSet() const { return m_dataSharingPreferenceHasBeenSet; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreference(const StreamProcessorDataSharingPreference& value) { m_dataSharingPreferenceHasBeenSet = true; m_dataSharingPreference = value; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreference(StreamProcessorDataSharingPreference&& value) { m_dataSharingPreferenceHasBeenSet = true; m_dataSharingPreference = std::move(value); }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline CreateStreamProcessorRequest& WithDataSharingPreference(const StreamProcessorDataSharingPreference& value) { SetDataSharingPreference(value); return *this;}

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline CreateStreamProcessorRequest& WithDataSharingPreference(StreamProcessorDataSharingPreference&& value) { SetDataSharingPreference(std::move(value)); return *this;}

  private:

    StreamProcessorInput m_input;
    bool m_inputHasBeenSet = false;

    StreamProcessorOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    StreamProcessorNotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;

    StreamProcessorDataSharingPreference m_dataSharingPreference;
    bool m_dataSharingPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
