/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImagePackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImagePackagesResult::ListImagePackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImagePackagesResult& ListImagePackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imagePackageList"))
  {
    Aws::Utils::Array<JsonView> imagePackageListJsonList = jsonValue.GetArray("imagePackageList");
    for(unsigned imagePackageListIndex = 0; imagePackageListIndex < imagePackageListJsonList.GetLength(); ++imagePackageListIndex)
    {
      m_imagePackageList.push_back(imagePackageListJsonList[imagePackageListIndex].AsObject());
    }
    m_imagePackageListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }


  return *this;
}
