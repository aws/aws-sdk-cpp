/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListDocumentClassifierSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDocumentClassifierSummariesResult::ListDocumentClassifierSummariesResult()
{
}

ListDocumentClassifierSummariesResult::ListDocumentClassifierSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDocumentClassifierSummariesResult& ListDocumentClassifierSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentClassifierSummariesList"))
  {
    Aws::Utils::Array<JsonView> documentClassifierSummariesListJsonList = jsonValue.GetArray("DocumentClassifierSummariesList");
    for(unsigned documentClassifierSummariesListIndex = 0; documentClassifierSummariesListIndex < documentClassifierSummariesListJsonList.GetLength(); ++documentClassifierSummariesListIndex)
    {
      m_documentClassifierSummariesList.push_back(documentClassifierSummariesListJsonList[documentClassifierSummariesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
