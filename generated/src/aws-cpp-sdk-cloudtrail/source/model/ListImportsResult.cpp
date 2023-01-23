/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListImportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImportsResult::ListImportsResult()
{
}

ListImportsResult::ListImportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImportsResult& ListImportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Imports"))
  {
    Aws::Utils::Array<JsonView> importsJsonList = jsonValue.GetArray("Imports");
    for(unsigned importsIndex = 0; importsIndex < importsJsonList.GetLength(); ++importsIndex)
    {
      m_imports.push_back(importsJsonList[importsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
