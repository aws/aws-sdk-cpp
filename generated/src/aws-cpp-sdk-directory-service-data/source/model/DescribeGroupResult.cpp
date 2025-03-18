/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/DescribeGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGroupResult::DescribeGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGroupResult& DescribeGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");
    m_directoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DistinguishedName"))
  {
    m_distinguishedName = jsonValue.GetString("DistinguishedName");
    m_distinguishedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupScope"))
  {
    m_groupScope = GroupScopeMapper::GetGroupScopeForName(jsonValue.GetString("GroupScope"));
    m_groupScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupType"))
  {
    m_groupType = GroupTypeMapper::GetGroupTypeForName(jsonValue.GetString("GroupType"));
    m_groupTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtherAttributes"))
  {
    Aws::Map<Aws::String, JsonView> otherAttributesJsonMap = jsonValue.GetObject("OtherAttributes").GetAllObjects();
    for(auto& otherAttributesItem : otherAttributesJsonMap)
    {
      m_otherAttributes[otherAttributesItem.first] = otherAttributesItem.second.AsObject();
    }
    m_otherAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Realm"))
  {
    m_realm = jsonValue.GetString("Realm");
    m_realmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");
    m_sAMAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
