/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AnalyzeIDResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AnalyzeIDResult::AnalyzeIDResult()
{
}

AnalyzeIDResult::AnalyzeIDResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AnalyzeIDResult& AnalyzeIDResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityDocuments"))
  {
    Aws::Utils::Array<JsonView> identityDocumentsJsonList = jsonValue.GetArray("IdentityDocuments");
    for(unsigned identityDocumentsIndex = 0; identityDocumentsIndex < identityDocumentsJsonList.GetLength(); ++identityDocumentsIndex)
    {
      m_identityDocuments.push_back(identityDocumentsJsonList[identityDocumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

  }

  if(jsonValue.ValueExists("AnalyzeIDModelVersion"))
  {
    m_analyzeIDModelVersion = jsonValue.GetString("AnalyzeIDModelVersion");

  }



  return *this;
}
