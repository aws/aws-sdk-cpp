﻿/**
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
  class CreateBatchPredictionJobRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateBatchPredictionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchPredictionJob"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the batch prediction job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline CreateBatchPredictionJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }
    inline CreateBatchPredictionJobRequest& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithInputPath(const char* value) { SetInputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline const Aws::String& GetOutputPath() const{ return m_outputPath; }
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }
    inline void SetOutputPath(const Aws::String& value) { m_outputPathHasBeenSet = true; m_outputPath = value; }
    inline void SetOutputPath(Aws::String&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::move(value); }
    inline void SetOutputPath(const char* value) { m_outputPathHasBeenSet = true; m_outputPath.assign(value); }
    inline CreateBatchPredictionJobRequest& WithOutputPath(const Aws::String& value) { SetOutputPath(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithOutputPath(Aws::String&& value) { SetOutputPath(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithOutputPath(const char* value) { SetOutputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }
    inline CreateBatchPredictionJobRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetDetectorName() const{ return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    inline void SetDetectorName(const Aws::String& value) { m_detectorNameHasBeenSet = true; m_detectorName = value; }
    inline void SetDetectorName(Aws::String&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::move(value); }
    inline void SetDetectorName(const char* value) { m_detectorNameHasBeenSet = true; m_detectorName.assign(value); }
    inline CreateBatchPredictionJobRequest& WithDetectorName(const Aws::String& value) { SetDetectorName(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithDetectorName(Aws::String&& value) { SetDetectorName(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithDetectorName(const char* value) { SetDetectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version.</p>
     */
    inline const Aws::String& GetDetectorVersion() const{ return m_detectorVersion; }
    inline bool DetectorVersionHasBeenSet() const { return m_detectorVersionHasBeenSet; }
    inline void SetDetectorVersion(const Aws::String& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = value; }
    inline void SetDetectorVersion(Aws::String&& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = std::move(value); }
    inline void SetDetectorVersion(const char* value) { m_detectorVersionHasBeenSet = true; m_detectorVersion.assign(value); }
    inline CreateBatchPredictionJobRequest& WithDetectorVersion(const Aws::String& value) { SetDetectorVersion(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithDetectorVersion(Aws::String&& value) { SetDetectorVersion(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithDetectorVersion(const char* value) { SetDetectorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to use for this job request.</p> <p>The IAM Role must
     * have read permissions to your input S3 bucket and write permissions to your
     * output S3 bucket. For more information about bucket permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline CreateBatchPredictionJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBatchPredictionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateBatchPredictionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBatchPredictionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateBatchPredictionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet = false;

    Aws::String m_outputPath;
    bool m_outputPathHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_detectorName;
    bool m_detectorNameHasBeenSet = false;

    Aws::String m_detectorVersion;
    bool m_detectorVersionHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
