﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListArtifactsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListArtifactsResult::ListArtifactsResult()
{
}

ListArtifactsResult::ListArtifactsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListArtifactsResult& ListArtifactsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("artifacts"))
  {
    Array<JsonView> artifactsJsonList = jsonValue.GetArray("artifacts");
    for(unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex)
    {
      m_artifacts.push_back(artifactsJsonList[artifactsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
