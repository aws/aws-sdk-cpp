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

#include <aws/globalaccelerator/model/ListByoipCidrsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListByoipCidrsResult::ListByoipCidrsResult()
{
}

ListByoipCidrsResult::ListByoipCidrsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListByoipCidrsResult& ListByoipCidrsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ByoipCidrs"))
  {
    Array<JsonView> byoipCidrsJsonList = jsonValue.GetArray("ByoipCidrs");
    for(unsigned byoipCidrsIndex = 0; byoipCidrsIndex < byoipCidrsJsonList.GetLength(); ++byoipCidrsIndex)
    {
      m_byoipCidrs.push_back(byoipCidrsJsonList[byoipCidrsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
