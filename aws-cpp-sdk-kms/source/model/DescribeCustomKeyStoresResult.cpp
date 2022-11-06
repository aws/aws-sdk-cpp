/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> customKeyStoresJsonList = jsonValue.GetArray("CustomKeyStores");
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
