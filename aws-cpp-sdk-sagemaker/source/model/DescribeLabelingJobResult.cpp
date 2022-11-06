/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeLabelingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLabelingJobResult::DescribeLabelingJobResult() : 
    m_labelingJobStatus(LabelingJobStatus::NOT_SET)
{
}

DescribeLabelingJobResult::DescribeLabelingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_labelingJobStatus(LabelingJobStatus::NOT_SET)
{
  *this = result;
}

DescribeLabelingJobResult& DescribeLabelingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelingJobStatus"))
  {
    m_labelingJobStatus = LabelingJobStatusMapper::GetLabelingJobStatusForName(jsonValue.GetString("LabelingJobStatus"));

  }

  if(jsonValue.ValueExists("LabelCounters"))
  {
    m_labelCounters = jsonValue.GetObject("LabelCounters");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("JobReferenceCode"))
  {
    m_jobReferenceCode = jsonValue.GetString("JobReferenceCode");

  }

  if(jsonValue.ValueExists("LabelingJobName"))
  {
    m_labelingJobName = jsonValue.GetString("LabelingJobName");

  }

  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");

  }

  if(jsonValue.ValueExists("LabelAttributeName"))
  {
    m_labelAttributeName = jsonValue.GetString("LabelAttributeName");

  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("LabelCategoryConfigS3Uri"))
  {
    m_labelCategoryConfigS3Uri = jsonValue.GetString("LabelCategoryConfigS3Uri");

  }

  if(jsonValue.ValueExists("StoppingConditions"))
  {
    m_stoppingConditions = jsonValue.GetObject("StoppingConditions");

  }

  if(jsonValue.ValueExists("LabelingJobAlgorithmsConfig"))
  {
    m_labelingJobAlgorithmsConfig = jsonValue.GetObject("LabelingJobAlgorithmsConfig");

  }

  if(jsonValue.ValueExists("HumanTaskConfig"))
  {
    m_humanTaskConfig = jsonValue.GetObject("HumanTaskConfig");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LabelingJobOutput"))
  {
    m_labelingJobOutput = jsonValue.GetObject("LabelingJobOutput");

  }



  return *this;
}
