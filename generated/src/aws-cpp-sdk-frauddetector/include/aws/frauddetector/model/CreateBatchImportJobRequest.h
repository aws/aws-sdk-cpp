/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class CreateBatchImportJobRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateBatchImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchImportJob"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline CreateBatchImportJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline CreateBatchImportJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the batch import job. The ID cannot be of a past job, unless the
     * job exists in <code>CREATE_FAILED</code> state.</p>
     */
    inline CreateBatchImportJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline CreateBatchImportJobRequest& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline CreateBatchImportJobRequest& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}

    /**
     * <p>The URI that points to the Amazon S3 location of your data file.</p>
     */
    inline CreateBatchImportJobRequest& WithInputPath(const char* value) { SetInputPath(value); return *this;}


    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline const Aws::String& GetOutputPath() const{ return m_outputPath; }

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline void SetOutputPath(const Aws::String& value) { m_outputPathHasBeenSet = true; m_outputPath = value; }

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline void SetOutputPath(Aws::String&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::move(value); }

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline void SetOutputPath(const char* value) { m_outputPathHasBeenSet = true; m_outputPath.assign(value); }

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline CreateBatchImportJobRequest& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline CreateBatchImportJobRequest& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}

    /**
     * <p>The URI that points to the Amazon S3 location for storing your results. </p>
     */
    inline CreateBatchImportJobRequest& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}


    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The name of the event type.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline CreateBatchImportJobRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline CreateBatchImportJobRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline CreateBatchImportJobRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateBatchImportJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateBatchImportJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role created for Amazon S3 bucket that holds your data
     * file.</p> <p>The IAM role must have read permissions to your input S3 bucket and
     * write permissions to your output S3 bucket. For more information about bucket
     * permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CreateBatchImportJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline CreateBatchImportJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline CreateBatchImportJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline CreateBatchImportJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key-value pairs associated with this request. </p>
     */
    inline CreateBatchImportJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet = false;

    Aws::String m_outputPath;
    bool m_outputPathHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
