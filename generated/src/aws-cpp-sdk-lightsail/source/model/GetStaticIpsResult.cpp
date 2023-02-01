/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetStaticIpsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStaticIpsResult::GetStaticIpsResult()
{
}

GetStaticIpsResult::GetStaticIpsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStaticIpsResult& GetStaticIpsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("staticIps"))
  {
    Aws::Utils::Array<JsonView> staticIpsJsonList = jsonValue.GetArray("staticIps");
    for(unsigned staticIpsIndex = 0; staticIpsIndex < staticIpsJsonList.GetLength(); ++staticIpsIndex)
    {
      m_staticIps.push_back(staticIpsJsonList[staticIpsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
