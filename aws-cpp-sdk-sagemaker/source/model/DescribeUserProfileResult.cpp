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

#include <aws/sagemaker/model/DescribeUserProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserProfileResult::DescribeUserProfileResult() : 
    m_status(UserProfileStatus::NOT_SET)
{
}

DescribeUserProfileResult::DescribeUserProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(UserProfileStatus::NOT_SET)
{
  *this = result;
}

DescribeUserProfileResult& DescribeUserProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

  }

  if(jsonValue.ValueExists("UserProfileArn"))
  {
    m_userProfileArn = jsonValue.GetString("UserProfileArn");

  }

  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");

  }

  if(jsonValue.ValueExists("HomeEfsFileSystemUid"))
  {
    m_homeEfsFileSystemUid = jsonValue.GetString("HomeEfsFileSystemUid");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UserProfileStatusMapper::GetUserProfileStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("SingleSignOnUserIdentifier"))
  {
    m_singleSignOnUserIdentifier = jsonValue.GetString("SingleSignOnUserIdentifier");

  }

  if(jsonValue.ValueExists("SingleSignOnUserValue"))
  {
    m_singleSignOnUserValue = jsonValue.GetString("SingleSignOnUserValue");

  }

  if(jsonValue.ValueExists("UserSettings"))
  {
    m_userSettings = jsonValue.GetObject("UserSettings");

  }



  return *this;
}
