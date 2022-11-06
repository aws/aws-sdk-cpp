/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListOutgoingTypedLinksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOutgoingTypedLinksResult::ListOutgoingTypedLinksResult()
{
}

ListOutgoingTypedLinksResult::ListOutgoingTypedLinksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOutgoingTypedLinksResult& ListOutgoingTypedLinksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TypedLinkSpecifiers"))
  {
    Aws::Utils::Array<JsonView> typedLinkSpecifiersJsonList = jsonValue.GetArray("TypedLinkSpecifiers");
    for(unsigned typedLinkSpecifiersIndex = 0; typedLinkSpecifiersIndex < typedLinkSpecifiersJsonList.GetLength(); ++typedLinkSpecifiersIndex)
    {
      m_typedLinkSpecifiers.push_back(typedLinkSpecifiersJsonList[typedLinkSpecifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
