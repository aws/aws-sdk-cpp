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

#include <aws/worklink/model/DescribeIdentityProviderConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIdentityProviderConfigurationResult::DescribeIdentityProviderConfigurationResult() : 
    m_identityProviderType(IdentityProviderType::NOT_SET)
{
}

DescribeIdentityProviderConfigurationResult::DescribeIdentityProviderConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_identityProviderType(IdentityProviderType::NOT_SET)
{
  *this = result;
}

DescribeIdentityProviderConfigurationResult& DescribeIdentityProviderConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("IdentityProviderType"));

  }

  if(jsonValue.ValueExists("ServiceProviderSamlMetadata"))
  {
    m_serviceProviderSamlMetadata = jsonValue.GetString("ServiceProviderSamlMetadata");

  }

  if(jsonValue.ValueExists("IdentityProviderSamlMetadata"))
  {
    m_identityProviderSamlMetadata = jsonValue.GetString("IdentityProviderSamlMetadata");

  }



  return *this;
}
