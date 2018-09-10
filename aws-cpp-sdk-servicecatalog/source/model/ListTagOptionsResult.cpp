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

#include <aws/servicecatalog/model/ListTagOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTagOptionsResult::ListTagOptionsResult()
{
}

ListTagOptionsResult::ListTagOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTagOptionsResult& ListTagOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TagOptionDetails"))
  {
    Array<JsonView> tagOptionDetailsJsonList = jsonValue.GetArray("TagOptionDetails");
    for(unsigned tagOptionDetailsIndex = 0; tagOptionDetailsIndex < tagOptionDetailsJsonList.GetLength(); ++tagOptionDetailsIndex)
    {
      m_tagOptionDetails.push_back(tagOptionDetailsJsonList[tagOptionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PageToken"))
  {
    m_pageToken = jsonValue.GetString("PageToken");

  }



  return *this;
}
