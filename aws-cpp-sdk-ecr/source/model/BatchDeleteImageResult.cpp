﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ecr/model/BatchDeleteImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteImageResult::BatchDeleteImageResult()
{
}

BatchDeleteImageResult::BatchDeleteImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteImageResult& BatchDeleteImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("imageIds"))
  {
    Array<JsonView> imageIdsJsonList = jsonValue.GetArray("imageIds");
    for(unsigned imageIdsIndex = 0; imageIdsIndex < imageIdsJsonList.GetLength(); ++imageIdsIndex)
    {
      m_imageIds.push_back(imageIdsJsonList[imageIdsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failures"))
  {
    Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
  }



  return *this;
}
