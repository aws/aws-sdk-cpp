﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerAPIMetadataResult.h>
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

GetContainerAPIMetadataResult::GetContainerAPIMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContainerAPIMetadataResult& GetContainerAPIMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      Aws::Map<Aws::String, JsonView> containerServiceMetadataEntryJsonMap = metadataJsonList[metadataIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> containerServiceMetadataEntryMap;
      for(auto& containerServiceMetadataEntryItem : containerServiceMetadataEntryJsonMap)
      {
        containerServiceMetadataEntryMap[containerServiceMetadataEntryItem.first] = containerServiceMetadataEntryItem.second.AsString();
      }
      m_metadata.push_back(std::move(containerServiceMetadataEntryMap));
    }
    m_metadataHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
