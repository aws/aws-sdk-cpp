/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReferencesResult::ListReferencesResult()
{
}

ListReferencesResult::ListReferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReferencesResult& ListReferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("references"))
  {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("references");
    for(unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex)
    {
      m_references.push_back(referencesJsonList[referencesIndex].AsObject());
    }
  }



  return *this;
}
