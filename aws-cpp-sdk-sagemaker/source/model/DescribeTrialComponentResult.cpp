/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrialComponentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrialComponentResult::DescribeTrialComponentResult()
{
}

DescribeTrialComponentResult::DescribeTrialComponentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrialComponentResult& DescribeTrialComponentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrialComponentName"))
  {
    m_trialComponentName = jsonValue.GetString("TrialComponentName");

  }

  if(jsonValue.ValueExists("TrialComponentArn"))
  {
    m_trialComponentArn = jsonValue.GetString("TrialComponentArn");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("InputArtifacts"))
  {
    Aws::Map<Aws::String, JsonView> inputArtifactsJsonMap = jsonValue.GetObject("InputArtifacts").GetAllObjects();
    for(auto& inputArtifactsItem : inputArtifactsJsonMap)
    {
      m_inputArtifacts[inputArtifactsItem.first] = inputArtifactsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("OutputArtifacts"))
  {
    Aws::Map<Aws::String, JsonView> outputArtifactsJsonMap = jsonValue.GetObject("OutputArtifacts").GetAllObjects();
    for(auto& outputArtifactsItem : outputArtifactsJsonMap)
    {
      m_outputArtifacts[outputArtifactsItem.first] = outputArtifactsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("MetadataProperties"))
  {
    m_metadataProperties = jsonValue.GetObject("MetadataProperties");

  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LineageGroupArn"))
  {
    m_lineageGroupArn = jsonValue.GetString("LineageGroupArn");

  }

  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
  }



  return *this;
}
