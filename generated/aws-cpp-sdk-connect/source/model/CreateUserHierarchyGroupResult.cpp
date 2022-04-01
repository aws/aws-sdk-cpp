/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateUserHierarchyGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateUserHierarchyGroupResult::CreateUserHierarchyGroupResult()
{
}

CreateUserHierarchyGroupResult::CreateUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateUserHierarchyGroupResult& CreateUserHierarchyGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HierarchyGroupId"))
  {
    m_hierarchyGroupId = jsonValue.GetString("HierarchyGroupId");

  }

  if(jsonValue.ValueExists("HierarchyGroupArn"))
  {
    m_hierarchyGroupArn = jsonValue.GetString("HierarchyGroupArn");

  }



  return *this;
}
