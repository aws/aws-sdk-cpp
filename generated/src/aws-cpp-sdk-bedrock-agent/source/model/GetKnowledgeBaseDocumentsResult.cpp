﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/GetKnowledgeBaseDocumentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKnowledgeBaseDocumentsResult::GetKnowledgeBaseDocumentsResult()
{
}

GetKnowledgeBaseDocumentsResult::GetKnowledgeBaseDocumentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKnowledgeBaseDocumentsResult& GetKnowledgeBaseDocumentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("documentDetails"))
  {
    Aws::Utils::Array<JsonView> documentDetailsJsonList = jsonValue.GetArray("documentDetails");
    for(unsigned documentDetailsIndex = 0; documentDetailsIndex < documentDetailsJsonList.GetLength(); ++documentDetailsIndex)
    {
      m_documentDetails.push_back(documentDetailsJsonList[documentDetailsIndex].AsObject());
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
