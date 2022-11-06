/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetAutoSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutoSnapshotsResult::GetAutoSnapshotsResult() : 
    m_resourceType(ResourceType::NOT_SET)
{
}

GetAutoSnapshotsResult::GetAutoSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(ResourceType::NOT_SET)
{
  *this = result;
}

GetAutoSnapshotsResult& GetAutoSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

  }

  if(jsonValue.ValueExists("autoSnapshots"))
  {
    Aws::Utils::Array<JsonView> autoSnapshotsJsonList = jsonValue.GetArray("autoSnapshots");
    for(unsigned autoSnapshotsIndex = 0; autoSnapshotsIndex < autoSnapshotsJsonList.GetLength(); ++autoSnapshotsIndex)
    {
      m_autoSnapshots.push_back(autoSnapshotsJsonList[autoSnapshotsIndex].AsObject());
    }
  }



  return *this;
}
