/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedAttributeGroupsResult::ListAssociatedAttributeGroupsResult()
{
}

ListAssociatedAttributeGroupsResult::ListAssociatedAttributeGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociatedAttributeGroupsResult& ListAssociatedAttributeGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("attributeGroups"))
  {
    Aws::Utils::Array<JsonView> attributeGroupsJsonList = jsonValue.GetArray("attributeGroups");
    for(unsigned attributeGroupsIndex = 0; attributeGroupsIndex < attributeGroupsJsonList.GetLength(); ++attributeGroupsIndex)
    {
      m_attributeGroups.push_back(attributeGroupsJsonList[attributeGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
