/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorediSCSIVolumesResult::DescribeStorediSCSIVolumesResult()
{
}

DescribeStorediSCSIVolumesResult::DescribeStorediSCSIVolumesResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStorediSCSIVolumesResult& DescribeStorediSCSIVolumesResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("StorediSCSIVolumes"))
  {
    Array<JsonValue> storediSCSIVolumesJsonList = jsonValue.GetArray("StorediSCSIVolumes");
    for(unsigned storediSCSIVolumesIndex = 0; storediSCSIVolumesIndex < storediSCSIVolumesJsonList.GetLength(); ++storediSCSIVolumesIndex)
    {
      m_storediSCSIVolumes.push_back(storediSCSIVolumesJsonList[storediSCSIVolumesIndex].AsObject());
    }
  }



  return *this;
}
