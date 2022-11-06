/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeNodeFromTemplateJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNodeFromTemplateJobResult::DescribeNodeFromTemplateJobResult() : 
    m_status(NodeFromTemplateJobStatus::NOT_SET),
    m_templateType(TemplateType::NOT_SET)
{
}

DescribeNodeFromTemplateJobResult::DescribeNodeFromTemplateJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(NodeFromTemplateJobStatus::NOT_SET),
    m_templateType(TemplateType::NOT_SET)
{
  *this = result;
}

DescribeNodeFromTemplateJobResult& DescribeNodeFromTemplateJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobTags"))
  {
    Aws::Utils::Array<JsonView> jobTagsJsonList = jsonValue.GetArray("JobTags");
    for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
    {
      m_jobTags.push_back(jobTagsJsonList[jobTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("NodeDescription"))
  {
    m_nodeDescription = jsonValue.GetString("NodeDescription");

  }

  if(jsonValue.ValueExists("NodeName"))
  {
    m_nodeName = jsonValue.GetString("NodeName");

  }

  if(jsonValue.ValueExists("OutputPackageName"))
  {
    m_outputPackageName = jsonValue.GetString("OutputPackageName");

  }

  if(jsonValue.ValueExists("OutputPackageVersion"))
  {
    m_outputPackageVersion = jsonValue.GetString("OutputPackageVersion");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NodeFromTemplateJobStatusMapper::GetNodeFromTemplateJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("TemplateParameters"))
  {
    Aws::Map<Aws::String, JsonView> templateParametersJsonMap = jsonValue.GetObject("TemplateParameters").GetAllObjects();
    for(auto& templateParametersItem : templateParametersJsonMap)
    {
      m_templateParameters[templateParametersItem.first] = templateParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("TemplateType"));

  }



  return *this;
}
