/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ListTrustAnchorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrustAnchorsResult::ListTrustAnchorsResult()
{
}

ListTrustAnchorsResult::ListTrustAnchorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrustAnchorsResult& ListTrustAnchorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("trustAnchors"))
  {
    Aws::Utils::Array<JsonView> trustAnchorsJsonList = jsonValue.GetArray("trustAnchors");
    for(unsigned trustAnchorsIndex = 0; trustAnchorsIndex < trustAnchorsJsonList.GetLength(); ++trustAnchorsIndex)
    {
      m_trustAnchors.push_back(trustAnchorsJsonList[trustAnchorsIndex].AsObject());
    }
  }



  return *this;
}
