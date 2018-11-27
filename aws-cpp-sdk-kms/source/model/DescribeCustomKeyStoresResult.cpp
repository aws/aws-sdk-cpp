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

#include <aws/kms/model/DescribeCustomKeyStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomKeyStoresResult::DescribeCustomKeyStoresResult() : 
    m_truncated(false)
{
}

DescribeCustomKeyStoresResult::DescribeCustomKeyStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_truncated(false)
{
  *this = result;
}

DescribeCustomKeyStoresResult& DescribeCustomKeyStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomKeyStores"))
  {
    Array<JsonView> customKeyStoresJsonList = jsonValue.GetArray("CustomKeyStores");
    for(unsigned customKeyStoresIndex = 0; customKeyStoresIndex < customKeyStoresJsonList.GetLength(); ++customKeyStoresIndex)
    {
      m_customKeyStores.push_back(customKeyStoresJsonList[customKeyStoresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("Truncated"))
  {
    m_truncated = jsonValue.GetBool("Truncated");

  }



  return *this;
}
