/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotsitewise/model/DescribeAccessPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccessPolicyResult::DescribeAccessPolicyResult() : 
    m_accessPolicyPermission(Permission::NOT_SET)
{
}

DescribeAccessPolicyResult::DescribeAccessPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_accessPolicyPermission(Permission::NOT_SET)
{
  *this = result;
}

DescribeAccessPolicyResult& DescribeAccessPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessPolicyId"))
  {
    m_accessPolicyId = jsonValue.GetString("accessPolicyId");

  }

  if(jsonValue.ValueExists("accessPolicyArn"))
  {
    m_accessPolicyArn = jsonValue.GetString("accessPolicyArn");

  }

  if(jsonValue.ValueExists("accessPolicyIdentity"))
  {
    m_accessPolicyIdentity = jsonValue.GetObject("accessPolicyIdentity");

  }

  if(jsonValue.ValueExists("accessPolicyResource"))
  {
    m_accessPolicyResource = jsonValue.GetObject("accessPolicyResource");

  }

  if(jsonValue.ValueExists("accessPolicyPermission"))
  {
    m_accessPolicyPermission = PermissionMapper::GetPermissionForName(jsonValue.GetString("accessPolicyPermission"));

  }

  if(jsonValue.ValueExists("accessPolicyCreationDate"))
  {
    m_accessPolicyCreationDate = jsonValue.GetDouble("accessPolicyCreationDate");

  }

  if(jsonValue.ValueExists("accessPolicyLastUpdateDate"))
  {
    m_accessPolicyLastUpdateDate = jsonValue.GetDouble("accessPolicyLastUpdateDate");

  }



  return *this;
}
