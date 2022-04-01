/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
