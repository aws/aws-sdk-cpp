/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListDocumentClassifiersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDocumentClassifiersResult::ListDocumentClassifiersResult()
{
}

ListDocumentClassifiersResult::ListDocumentClassifiersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDocumentClassifiersResult& ListDocumentClassifiersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentClassifierPropertiesList"))
  {
    Aws::Utils::Array<JsonView> documentClassifierPropertiesListJsonList = jsonValue.GetArray("DocumentClassifierPropertiesList");
    for(unsigned documentClassifierPropertiesListIndex = 0; documentClassifierPropertiesListIndex < documentClassifierPropertiesListJsonList.GetLength(); ++documentClassifierPropertiesListIndex)
    {
      m_documentClassifierPropertiesList.push_back(documentClassifierPropertiesListJsonList[documentClassifierPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
