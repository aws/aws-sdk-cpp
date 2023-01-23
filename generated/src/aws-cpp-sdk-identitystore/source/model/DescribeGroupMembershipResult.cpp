/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/DescribeGroupMembershipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGroupMembershipResult::DescribeGroupMembershipResult()
{
}

DescribeGroupMembershipResult::DescribeGroupMembershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGroupMembershipResult& DescribeGroupMembershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

  }

  if(jsonValue.ValueExists("MembershipId"))
  {
    m_membershipId = jsonValue.GetString("MembershipId");

  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

  }

  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetObject("MemberId");

  }



  return *this;
}
