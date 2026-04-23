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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies the location of the output produced by the labeling job.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobOutput
  {
  public:
    LabelingJobOutput();
    LabelingJobOutput(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline const Aws::String& GetOutputDatasetS3Uri() const{ return m_outputDatasetS3Uri; }

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline bool OutputDatasetS3UriHasBeenSet() const { return m_outputDatasetS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline void SetOutputDatasetS3Uri(const Aws::String& value) { m_outputDatasetS3UriHasBeenSet = true; m_outputDatasetS3Uri = value; }

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline void SetOutputDatasetS3Uri(Aws::String&& value) { m_outputDatasetS3UriHasBeenSet = true; m_outputDatasetS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline void SetOutputDatasetS3Uri(const char* value) { m_outputDatasetS3UriHasBeenSet = true; m_outputDatasetS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline LabelingJobOutput& WithOutputDatasetS3Uri(const Aws::String& value) { SetOutputDatasetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline LabelingJobOutput& WithOutputDatasetS3Uri(Aws::String&& value) { SetOutputDatasetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline LabelingJobOutput& WithOutputDatasetS3Uri(const char* value) { SetOutputDatasetS3Uri(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline const Aws::String& GetFinalActiveLearningModelArn() const{ return m_finalActiveLearningModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline bool FinalActiveLearningModelArnHasBeenSet() const { return m_finalActiveLearningModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline void SetFinalActiveLearningModelArn(const Aws::String& value) { m_finalActiveLearningModelArnHasBeenSet = true; m_finalActiveLearningModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline void SetFinalActiveLearningModelArn(Aws::String&& value) { m_finalActiveLearningModelArnHasBeenSet = true; m_finalActiveLearningModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline void SetFinalActiveLearningModelArn(const char* value) { m_finalActiveLearningModelArnHasBeenSet = true; m_finalActiveLearningModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline LabelingJobOutput& WithFinalActiveLearningModelArn(const Aws::String& value) { SetFinalActiveLearningModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline LabelingJobOutput& WithFinalActiveLearningModelArn(Aws::String&& value) { SetFinalActiveLearningModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the most recent Amazon SageMaker model
     * trained as part of automated data labeling. </p>
     */
    inline LabelingJobOutput& WithFinalActiveLearningModelArn(const char* value) { SetFinalActiveLearningModelArn(value); return *this;}

  private:

    Aws::String m_outputDatasetS3Uri;
    bool m_outputDatasetS3UriHasBeenSet;

    Aws::String m_finalActiveLearningModelArn;
    bool m_finalActiveLearningModelArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
