/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListPolicyAttachmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPolicyAttachmentsResult::ListPolicyAttachmentsResult()
{
}

ListPolicyAttachmentsResult::ListPolicyAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPolicyAttachmentsResult& ListPolicyAttachmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObjectIdentifiers"))
  {
    Aws::Utils::Array<JsonView> objectIdentifiersJsonList = jsonValue.GetArray("ObjectIdentifiers");
    for(unsigned objectIdentifiersIndex = 0; objectIdentifiersIndex < objectIdentifiersJsonList.GetLength(); ++objectIdentifiersIndex)
    {
      m_objectIdentifiers.push_back(objectIdentifiersJsonList[objectIdentifiersIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
