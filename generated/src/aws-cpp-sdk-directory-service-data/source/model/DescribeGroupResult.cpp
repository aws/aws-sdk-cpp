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

DescribeGroupResult::DescribeGroupResult() : 
    m_groupScope(GroupScope::NOT_SET),
    m_groupType(GroupType::NOT_SET)
{
}

DescribeGroupResult::DescribeGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeGroupResult()
{
  *this = result;
}

DescribeGroupResult& DescribeGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

  }

  if(jsonValue.ValueExists("DistinguishedName"))
  {
    m_distinguishedName = jsonValue.GetString("DistinguishedName");

  }

  if(jsonValue.ValueExists("GroupScope"))
  {
    m_groupScope = GroupScopeMapper::GetGroupScopeForName(jsonValue.GetString("GroupScope"));

  }

  if(jsonValue.ValueExists("GroupType"))
  {
    m_groupType = GroupTypeMapper::GetGroupTypeForName(jsonValue.GetString("GroupType"));

  }

  if(jsonValue.ValueExists("OtherAttributes"))
  {
    Aws::Map<Aws::String, JsonView> otherAttributesJsonMap = jsonValue.GetObject("OtherAttributes").GetAllObjects();
    for(auto& otherAttributesItem : otherAttributesJsonMap)
    {
      m_otherAttributes[otherAttributesItem.first] = otherAttributesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("Realm"))
  {
    m_realm = jsonValue.GetString("Realm");

  }

  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");

  }

  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
