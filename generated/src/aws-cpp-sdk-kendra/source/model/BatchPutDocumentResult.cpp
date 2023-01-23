/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchPutDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchPutDocumentResult::BatchPutDocumentResult()
{
}

BatchPutDocumentResult::BatchPutDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchPutDocumentResult& BatchPutDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedDocuments"))
  {
    Aws::Utils::Array<JsonView> failedDocumentsJsonList = jsonValue.GetArray("FailedDocuments");
    for(unsigned failedDocumentsIndex = 0; failedDocumentsIndex < failedDocumentsJsonList.GetLength(); ++failedDocumentsIndex)
    {
      m_failedDocuments.push_back(failedDocumentsJsonList[failedDocumentsIndex].AsObject());
    }
  }



  return *this;
}
