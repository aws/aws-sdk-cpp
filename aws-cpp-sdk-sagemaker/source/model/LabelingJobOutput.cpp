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

#include <aws/sagemaker/model/LabelingJobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

LabelingJobOutput::LabelingJobOutput() : 
    m_outputDatasetS3UriHasBeenSet(false),
    m_finalActiveLearningModelArnHasBeenSet(false)
{
}

LabelingJobOutput::LabelingJobOutput(JsonView jsonValue) : 
    m_outputDatasetS3UriHasBeenSet(false),
    m_finalActiveLearningModelArnHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobOutput& LabelingJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputDatasetS3Uri"))
  {
    m_outputDatasetS3Uri = jsonValue.GetString("OutputDatasetS3Uri");

    m_outputDatasetS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalActiveLearningModelArn"))
  {
    m_finalActiveLearningModelArn = jsonValue.GetString("FinalActiveLearningModelArn");

    m_finalActiveLearningModelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputDatasetS3UriHasBeenSet)
  {
   payload.WithString("OutputDatasetS3Uri", m_outputDatasetS3Uri);

  }

  if(m_finalActiveLearningModelArnHasBeenSet)
  {
   payload.WithString("FinalActiveLearningModelArn", m_finalActiveLearningModelArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
