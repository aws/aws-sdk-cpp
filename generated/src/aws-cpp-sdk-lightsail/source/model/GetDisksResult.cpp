/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetDisksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDisksResult::GetDisksResult()
{
}

GetDisksResult::GetDisksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDisksResult& GetDisksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("disks"))
  {
    Aws::Utils::Array<JsonView> disksJsonList = jsonValue.GetArray("disks");
    for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
    {
      m_disks.push_back(disksJsonList[disksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
