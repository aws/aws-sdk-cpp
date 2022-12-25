/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeStorediSCSIVolumesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorediSCSIVolumesResult::DescribeStorediSCSIVolumesResult()
{
}

DescribeStorediSCSIVolumesResult::DescribeStorediSCSIVolumesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStorediSCSIVolumesResult& DescribeStorediSCSIVolumesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorediSCSIVolumes"))
  {
    Aws::Utils::Array<JsonView> storediSCSIVolumesJsonList = jsonValue.GetArray("StorediSCSIVolumes");
    for(unsigned storediSCSIVolumesIndex = 0; storediSCSIVolumesIndex < storediSCSIVolumesJsonList.GetLength(); ++storediSCSIVolumesIndex)
    {
      m_storediSCSIVolumes.push_back(storediSCSIVolumesJsonList[storediSCSIVolumesIndex].AsObject());
    }
  }



  return *this;
}
