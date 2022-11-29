/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetCollectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCollectionResult::BatchGetCollectionResult()
{
}

BatchGetCollectionResult::BatchGetCollectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCollectionResult& BatchGetCollectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("collectionDetails"))
  {
    Aws::Utils::Array<JsonView> collectionDetailsJsonList = jsonValue.GetArray("collectionDetails");
    for(unsigned collectionDetailsIndex = 0; collectionDetailsIndex < collectionDetailsJsonList.GetLength(); ++collectionDetailsIndex)
    {
      m_collectionDetails.push_back(collectionDetailsJsonList[collectionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("collectionErrorDetails"))
  {
    Aws::Utils::Array<JsonView> collectionErrorDetailsJsonList = jsonValue.GetArray("collectionErrorDetails");
    for(unsigned collectionErrorDetailsIndex = 0; collectionErrorDetailsIndex < collectionErrorDetailsJsonList.GetLength(); ++collectionErrorDetailsIndex)
    {
      m_collectionErrorDetails.push_back(collectionErrorDetailsJsonList[collectionErrorDetailsIndex].AsObject());
    }
  }



  return *this;
}
