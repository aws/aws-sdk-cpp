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
  class CreateBatchPredictionJobRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateBatchPredictionJobRequest() = default;

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
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    CreateBatchPredictionJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your training file.</p>
     */
    inline const Aws::String& GetInputPath() const { return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    template<typename InputPathT = Aws::String>
    void SetInputPath(InputPathT&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::forward<InputPathT>(value); }
    template<typename InputPathT = Aws::String>
    CreateBatchPredictionJobRequest& WithInputPath(InputPathT&& value) { SetInputPath(std::forward<InputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of your output file.</p>
     */
    inline const Aws::String& GetOutputPath() const { return m_outputPath; }
    inline bool OutputPathHasBeenSet() const { return m_outputPathHasBeenSet; }
    template<typename OutputPathT = Aws::String>
    void SetOutputPath(OutputPathT&& value) { m_outputPathHasBeenSet = true; m_outputPath = std::forward<OutputPathT>(value); }
    template<typename OutputPathT = Aws::String>
    CreateBatchPredictionJobRequest& WithOutputPath(OutputPathT&& value) { SetOutputPath(std::forward<OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    CreateBatchPredictionJobRequest& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetDetectorName() const { return m_detectorName; }
    inline bool DetectorNameHasBeenSet() const { return m_detectorNameHasBeenSet; }
    template<typename DetectorNameT = Aws::String>
    void SetDetectorName(DetectorNameT&& value) { m_detectorNameHasBeenSet = true; m_detectorName = std::forward<DetectorNameT>(value); }
    template<typename DetectorNameT = Aws::String>
    CreateBatchPredictionJobRequest& WithDetectorName(DetectorNameT&& value) { SetDetectorName(std::forward<DetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version.</p>
     */
    inline const Aws::String& GetDetectorVersion() const { return m_detectorVersion; }
    inline bool DetectorVersionHasBeenSet() const { return m_detectorVersionHasBeenSet; }
    template<typename DetectorVersionT = Aws::String>
    void SetDetectorVersion(DetectorVersionT&& value) { m_detectorVersionHasBeenSet = true; m_detectorVersion = std::forward<DetectorVersionT>(value); }
    template<typename DetectorVersionT = Aws::String>
    CreateBatchPredictionJobRequest& WithDetectorVersion(DetectorVersionT&& value) { SetDetectorVersion(std::forward<DetectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to use for this job request.</p> <p>The IAM Role must
     * have read permissions to your input S3 bucket and write permissions to your
     * output S3 bucket. For more information about bucket permissions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-policies-s3.html">User
     * policy examples</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    CreateBatchPredictionJobRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateBatchPredictionJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateBatchPredictionJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
