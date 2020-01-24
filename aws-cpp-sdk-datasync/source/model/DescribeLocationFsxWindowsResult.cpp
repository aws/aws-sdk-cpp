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

#include <aws/datasync/model/DescribeLocationFsxWindowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationFsxWindowsResult::DescribeLocationFsxWindowsResult()
{
}

DescribeLocationFsxWindowsResult::DescribeLocationFsxWindowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationFsxWindowsResult& DescribeLocationFsxWindowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("SecurityGroupArns"))
  {
    Array<JsonView> securityGroupArnsJsonList = jsonValue.GetArray("SecurityGroupArns");
    for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
    {
      m_securityGroupArns.push_back(securityGroupArnsJsonList[securityGroupArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }



  return *this;
}
