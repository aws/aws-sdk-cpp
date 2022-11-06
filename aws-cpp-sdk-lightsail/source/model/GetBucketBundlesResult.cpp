/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketBundlesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBucketBundlesResult::GetBucketBundlesResult()
{
}

GetBucketBundlesResult::GetBucketBundlesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBucketBundlesResult& GetBucketBundlesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bundles"))
  {
    Aws::Utils::Array<JsonView> bundlesJsonList = jsonValue.GetArray("bundles");
    for(unsigned bundlesIndex = 0; bundlesIndex < bundlesJsonList.GetLength(); ++bundlesIndex)
    {
      m_bundles.push_back(bundlesJsonList[bundlesIndex].AsObject());
    }
  }



  return *this;
}
