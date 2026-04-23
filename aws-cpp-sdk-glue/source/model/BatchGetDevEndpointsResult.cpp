/*
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

#include <aws/glue/model/BatchGetDevEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDevEndpointsResult::BatchGetDevEndpointsResult()
{
}

BatchGetDevEndpointsResult::BatchGetDevEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDevEndpointsResult& BatchGetDevEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DevEndpoints"))
  {
    Array<JsonView> devEndpointsJsonList = jsonValue.GetArray("DevEndpoints");
    for(unsigned devEndpointsIndex = 0; devEndpointsIndex < devEndpointsJsonList.GetLength(); ++devEndpointsIndex)
    {
      m_devEndpoints.push_back(devEndpointsJsonList[devEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DevEndpointsNotFound"))
  {
    Array<JsonView> devEndpointsNotFoundJsonList = jsonValue.GetArray("DevEndpointsNotFound");
    for(unsigned devEndpointsNotFoundIndex = 0; devEndpointsNotFoundIndex < devEndpointsNotFoundJsonList.GetLength(); ++devEndpointsNotFoundIndex)
    {
      m_devEndpointsNotFound.push_back(devEndpointsNotFoundJsonList[devEndpointsNotFoundIndex].AsString());
    }
  }



  return *this;
}
