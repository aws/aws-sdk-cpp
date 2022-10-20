/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDocumentsResult::ListDocumentsResult()
{
}

ListDocumentsResult::ListDocumentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDocumentsResult& ListDocumentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DocumentIdentifiers"))
  {
    Aws::Utils::Array<JsonView> documentIdentifiersJsonList = jsonValue.GetArray("DocumentIdentifiers");
    for(unsigned documentIdentifiersIndex = 0; documentIdentifiersIndex < documentIdentifiersJsonList.GetLength(); ++documentIdentifiersIndex)
    {
      m_documentIdentifiers.push_back(documentIdentifiersJsonList[documentIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
