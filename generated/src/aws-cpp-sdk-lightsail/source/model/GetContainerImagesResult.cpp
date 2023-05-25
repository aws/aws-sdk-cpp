/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContainerImagesResult::GetContainerImagesResult()
{
}

GetContainerImagesResult::GetContainerImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContainerImagesResult& GetContainerImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("containerImages"))
  {
    Aws::Utils::Array<JsonView> containerImagesJsonList = jsonValue.GetArray("containerImages");
    for(unsigned containerImagesIndex = 0; containerImagesIndex < containerImagesJsonList.GetLength(); ++containerImagesIndex)
    {
      m_containerImages.push_back(containerImagesJsonList[containerImagesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
