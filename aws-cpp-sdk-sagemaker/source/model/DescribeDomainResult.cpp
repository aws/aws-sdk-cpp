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

#include <aws/sagemaker/model/DescribeDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainResult::DescribeDomainResult() : 
    m_status(DomainStatus::NOT_SET),
    m_authMode(AuthMode::NOT_SET)
{
}

DescribeDomainResult::DescribeDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DomainStatus::NOT_SET),
    m_authMode(AuthMode::NOT_SET)
{
  *this = result;
}

DescribeDomainResult& DescribeDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainArn"))
  {
    m_domainArn = jsonValue.GetString("DomainArn");

  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("HomeEfsFileSystemId"))
  {
    m_homeEfsFileSystemId = jsonValue.GetString("HomeEfsFileSystemId");

  }

  if(jsonValue.ValueExists("SingleSignOnManagedApplicationInstanceId"))
  {
    m_singleSignOnManagedApplicationInstanceId = jsonValue.GetString("SingleSignOnManagedApplicationInstanceId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("AuthMode"))
  {
    m_authMode = AuthModeMapper::GetAuthModeForName(jsonValue.GetString("AuthMode"));

  }

  if(jsonValue.ValueExists("DefaultUserSettings"))
  {
    m_defaultUserSettings = jsonValue.GetObject("DefaultUserSettings");

  }

  if(jsonValue.ValueExists("HomeEfsFileSystemKmsKeyId"))
  {
    m_homeEfsFileSystemKmsKeyId = jsonValue.GetString("HomeEfsFileSystemKmsKeyId");

  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

  }



  return *this;
}
