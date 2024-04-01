/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetStorageProfileForQueueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStorageProfileForQueueResult::GetStorageProfileForQueueResult() : 
    m_osFamily(StorageProfileOperatingSystemFamily::NOT_SET)
{
}

GetStorageProfileForQueueResult::GetStorageProfileForQueueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_osFamily(StorageProfileOperatingSystemFamily::NOT_SET)
{
  *this = result;
}

GetStorageProfileForQueueResult& GetStorageProfileForQueueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("fileSystemLocations"))
  {
    Aws::Utils::Array<JsonView> fileSystemLocationsJsonList = jsonValue.GetArray("fileSystemLocations");
    for(unsigned fileSystemLocationsIndex = 0; fileSystemLocationsIndex < fileSystemLocationsJsonList.GetLength(); ++fileSystemLocationsIndex)
    {
      m_fileSystemLocations.push_back(fileSystemLocationsJsonList[fileSystemLocationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("osFamily"))
  {
    m_osFamily = StorageProfileOperatingSystemFamilyMapper::GetStorageProfileOperatingSystemFamilyForName(jsonValue.GetString("osFamily"));

  }

  if(jsonValue.ValueExists("storageProfileId"))
  {
    m_storageProfileId = jsonValue.GetString("storageProfileId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
