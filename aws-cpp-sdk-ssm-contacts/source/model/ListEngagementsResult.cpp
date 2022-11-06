/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListEngagementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEngagementsResult::ListEngagementsResult()
{
}

ListEngagementsResult::ListEngagementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEngagementsResult& ListEngagementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Engagements"))
  {
    Aws::Utils::Array<JsonView> engagementsJsonList = jsonValue.GetArray("Engagements");
    for(unsigned engagementsIndex = 0; engagementsIndex < engagementsJsonList.GetLength(); ++engagementsIndex)
    {
      m_engagements.push_back(engagementsJsonList[engagementsIndex].AsObject());
    }
  }



  return *this;
}
