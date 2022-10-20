/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListEmailIdentitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEmailIdentitiesResult::ListEmailIdentitiesResult()
{
}

ListEmailIdentitiesResult::ListEmailIdentitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEmailIdentitiesResult& ListEmailIdentitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EmailIdentities"))
  {
    Aws::Utils::Array<JsonView> emailIdentitiesJsonList = jsonValue.GetArray("EmailIdentities");
    for(unsigned emailIdentitiesIndex = 0; emailIdentitiesIndex < emailIdentitiesJsonList.GetLength(); ++emailIdentitiesIndex)
    {
      m_emailIdentities.push_back(emailIdentitiesJsonList[emailIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
