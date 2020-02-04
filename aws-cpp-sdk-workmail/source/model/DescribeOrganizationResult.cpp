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

#include <aws/workmail/model/DescribeOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationResult::DescribeOrganizationResult()
{
}

DescribeOrganizationResult::DescribeOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationResult& DescribeOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

  }

  if(jsonValue.ValueExists("DirectoryType"))
  {
    m_directoryType = jsonValue.GetString("DirectoryType");

  }

  if(jsonValue.ValueExists("DefaultMailDomain"))
  {
    m_defaultMailDomain = jsonValue.GetString("DefaultMailDomain");

  }

  if(jsonValue.ValueExists("CompletedDate"))
  {
    m_completedDate = jsonValue.GetDouble("CompletedDate");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

  }



  return *this;
}
