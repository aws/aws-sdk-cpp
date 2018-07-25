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

#include <aws/glue/model/BatchDeleteConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteConnectionResult::BatchDeleteConnectionResult()
{
}

BatchDeleteConnectionResult::BatchDeleteConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteConnectionResult& BatchDeleteConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Succeeded"))
  {
    Array<JsonView> succeededJsonList = jsonValue.GetArray("Succeeded");
    for(unsigned succeededIndex = 0; succeededIndex < succeededJsonList.GetLength(); ++succeededIndex)
    {
      m_succeeded.push_back(succeededJsonList[succeededIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Map<Aws::String, JsonView> errorsJsonMap = jsonValue.GetObject("Errors").GetAllObjects();
    for(auto& errorsItem : errorsJsonMap)
    {
      m_errors[errorsItem.first] = errorsItem.second.AsObject();
    }
  }



  return *this;
}
