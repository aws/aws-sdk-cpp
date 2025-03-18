/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/DescribeUserResult.h>
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

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");
    m_givenNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");
    m_surnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserPrincipalName"))
  {
    m_userPrincipalName = jsonValue.GetString("UserPrincipalName");
    m_userPrincipalNameHasBeenSet = true;
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
