﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AnalyzeDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AnalyzeDocumentResult::AnalyzeDocumentResult()
{
}

AnalyzeDocumentResult::AnalyzeDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AnalyzeDocumentResult& AnalyzeDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

  }

  if(jsonValue.ValueExists("Blocks"))
  {
    Array<JsonView> blocksJsonList = jsonValue.GetArray("Blocks");
    for(unsigned blocksIndex = 0; blocksIndex < blocksJsonList.GetLength(); ++blocksIndex)
    {
      m_blocks.push_back(blocksJsonList[blocksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("HumanLoopActivationOutput"))
  {
    m_humanLoopActivationOutput = jsonValue.GetObject("HumanLoopActivationOutput");

  }

  if(jsonValue.ValueExists("AnalyzeDocumentModelVersion"))
  {
    m_analyzeDocumentModelVersion = jsonValue.GetString("AnalyzeDocumentModelVersion");

  }



  return *this;
}
