﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEBSVolumeRecommendationsResult::GetEBSVolumeRecommendationsResult()
{
}

GetEBSVolumeRecommendationsResult::GetEBSVolumeRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEBSVolumeRecommendationsResult& GetEBSVolumeRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("volumeRecommendations"))
  {
    Array<JsonView> volumeRecommendationsJsonList = jsonValue.GetArray("volumeRecommendations");
    for(unsigned volumeRecommendationsIndex = 0; volumeRecommendationsIndex < volumeRecommendationsJsonList.GetLength(); ++volumeRecommendationsIndex)
    {
      m_volumeRecommendations.push_back(volumeRecommendationsJsonList[volumeRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
