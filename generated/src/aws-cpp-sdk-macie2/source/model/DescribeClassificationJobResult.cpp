/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DescribeClassificationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClassificationJobResult::DescribeClassificationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeClassificationJobResult& DescribeClassificationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowListIds"))
  {
    Aws::Utils::Array<JsonView> allowListIdsJsonList = jsonValue.GetArray("allowListIds");
    for(unsigned allowListIdsIndex = 0; allowListIdsIndex < allowListIdsJsonList.GetLength(); ++allowListIdsIndex)
    {
      m_allowListIds.push_back(allowListIdsJsonList[allowListIdsIndex].AsString());
    }
    m_allowListIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customDataIdentifierIds"))
  {
    Aws::Utils::Array<JsonView> customDataIdentifierIdsJsonList = jsonValue.GetArray("customDataIdentifierIds");
    for(unsigned customDataIdentifierIdsIndex = 0; customDataIdentifierIdsIndex < customDataIdentifierIdsJsonList.GetLength(); ++customDataIdentifierIdsIndex)
    {
      m_customDataIdentifierIds.push_back(customDataIdentifierIdsJsonList[customDataIdentifierIdsIndex].AsString());
    }
    m_customDataIdentifierIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initialRun"))
  {
    m_initialRun = jsonValue.GetBool("initialRun");
    m_initialRunHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("jobType"));
    m_jobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunErrorStatus"))
  {
    m_lastRunErrorStatus = jsonValue.GetObject("lastRunErrorStatus");
    m_lastRunErrorStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunTime"))
  {
    m_lastRunTime = jsonValue.GetString("lastRunTime");
    m_lastRunTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedDataIdentifierIds"))
  {
    Aws::Utils::Array<JsonView> managedDataIdentifierIdsJsonList = jsonValue.GetArray("managedDataIdentifierIds");
    for(unsigned managedDataIdentifierIdsIndex = 0; managedDataIdentifierIdsIndex < managedDataIdentifierIdsJsonList.GetLength(); ++managedDataIdentifierIdsIndex)
    {
      m_managedDataIdentifierIds.push_back(managedDataIdentifierIdsJsonList[managedDataIdentifierIdsIndex].AsString());
    }
    m_managedDataIdentifierIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedDataIdentifierSelector"))
  {
    m_managedDataIdentifierSelector = ManagedDataIdentifierSelectorMapper::GetManagedDataIdentifierSelectorForName(jsonValue.GetString("managedDataIdentifierSelector"));
    m_managedDataIdentifierSelectorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3JobDefinition"))
  {
    m_s3JobDefinition = jsonValue.GetObject("s3JobDefinition");
    m_s3JobDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("samplingPercentage"))
  {
    m_samplingPercentage = jsonValue.GetInteger("samplingPercentage");
    m_samplingPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduleFrequency"))
  {
    m_scheduleFrequency = jsonValue.GetObject("scheduleFrequency");
    m_scheduleFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");
    m_statisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userPausedDetails"))
  {
    m_userPausedDetails = jsonValue.GetObject("userPausedDetails");
    m_userPausedDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
