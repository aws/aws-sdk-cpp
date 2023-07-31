/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCollaborationAnalysisTemplateResult::BatchGetCollaborationAnalysisTemplateResult()
{
}

BatchGetCollaborationAnalysisTemplateResult::BatchGetCollaborationAnalysisTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCollaborationAnalysisTemplateResult& BatchGetCollaborationAnalysisTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("collaborationAnalysisTemplates"))
  {
    Aws::Utils::Array<JsonView> collaborationAnalysisTemplatesJsonList = jsonValue.GetArray("collaborationAnalysisTemplates");
    for(unsigned collaborationAnalysisTemplatesIndex = 0; collaborationAnalysisTemplatesIndex < collaborationAnalysisTemplatesJsonList.GetLength(); ++collaborationAnalysisTemplatesIndex)
    {
      m_collaborationAnalysisTemplates.push_back(collaborationAnalysisTemplatesJsonList[collaborationAnalysisTemplatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
