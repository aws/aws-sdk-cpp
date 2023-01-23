/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDistributionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDistributionsResult::GetDistributionsResult()
{
}

GetDistributionsResult::GetDistributionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDistributionsResult& GetDistributionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("distributions"))
  {
    Aws::Utils::Array<JsonView> distributionsJsonList = jsonValue.GetArray("distributions");
    for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
    {
      m_distributions.push_back(distributionsJsonList[distributionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
