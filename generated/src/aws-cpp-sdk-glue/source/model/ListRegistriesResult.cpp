/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListRegistriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRegistriesResult::ListRegistriesResult()
{
}

ListRegistriesResult::ListRegistriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRegistriesResult& ListRegistriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Registries"))
  {
    Aws::Utils::Array<JsonView> registriesJsonList = jsonValue.GetArray("Registries");
    for(unsigned registriesIndex = 0; registriesIndex < registriesJsonList.GetLength(); ++registriesIndex)
    {
      m_registries.push_back(registriesJsonList[registriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
