/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/BatchGetDocumentStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDocumentStatusResult::BatchGetDocumentStatusResult()
{
}

BatchGetDocumentStatusResult::BatchGetDocumentStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDocumentStatusResult& BatchGetDocumentStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DocumentStatusList"))
  {
    Aws::Utils::Array<JsonView> documentStatusListJsonList = jsonValue.GetArray("DocumentStatusList");
    for(unsigned documentStatusListIndex = 0; documentStatusListIndex < documentStatusListJsonList.GetLength(); ++documentStatusListIndex)
    {
      m_documentStatusList.push_back(documentStatusListJsonList[documentStatusListIndex].AsObject());
    }
  }



  return *this;
}
