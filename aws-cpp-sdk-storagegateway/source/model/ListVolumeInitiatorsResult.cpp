/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListVolumeInitiatorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVolumeInitiatorsResult::ListVolumeInitiatorsResult()
{
}

ListVolumeInitiatorsResult::ListVolumeInitiatorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVolumeInitiatorsResult& ListVolumeInitiatorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Initiators"))
  {
    Aws::Utils::Array<JsonView> initiatorsJsonList = jsonValue.GetArray("Initiators");
    for(unsigned initiatorsIndex = 0; initiatorsIndex < initiatorsJsonList.GetLength(); ++initiatorsIndex)
    {
      m_initiators.push_back(initiatorsJsonList[initiatorsIndex].AsString());
    }
  }



  return *this;
}
