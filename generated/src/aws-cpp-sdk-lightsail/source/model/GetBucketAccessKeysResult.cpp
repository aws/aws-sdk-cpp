/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketAccessKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBucketAccessKeysResult::GetBucketAccessKeysResult()
{
}

GetBucketAccessKeysResult::GetBucketAccessKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBucketAccessKeysResult& GetBucketAccessKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessKeys"))
  {
    Aws::Utils::Array<JsonView> accessKeysJsonList = jsonValue.GetArray("accessKeys");
    for(unsigned accessKeysIndex = 0; accessKeysIndex < accessKeysJsonList.GetLength(); ++accessKeysIndex)
    {
      m_accessKeys.push_back(accessKeysJsonList[accessKeysIndex].AsObject());
    }
  }



  return *this;
}
