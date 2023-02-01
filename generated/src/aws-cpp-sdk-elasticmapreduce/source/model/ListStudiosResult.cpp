/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListStudiosResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStudiosResult::ListStudiosResult()
{
}

ListStudiosResult::ListStudiosResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStudiosResult& ListStudiosResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Studios"))
  {
    Aws::Utils::Array<JsonView> studiosJsonList = jsonValue.GetArray("Studios");
    for(unsigned studiosIndex = 0; studiosIndex < studiosJsonList.GetLength(); ++studiosIndex)
    {
      m_studios.push_back(studiosJsonList[studiosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
