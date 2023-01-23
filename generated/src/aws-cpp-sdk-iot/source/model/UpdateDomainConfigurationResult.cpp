/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateDomainConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDomainConfigurationResult::UpdateDomainConfigurationResult()
{
}

UpdateDomainConfigurationResult::UpdateDomainConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDomainConfigurationResult& UpdateDomainConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainConfigurationName"))
  {
    m_domainConfigurationName = jsonValue.GetString("domainConfigurationName");

  }

  if(jsonValue.ValueExists("domainConfigurationArn"))
  {
    m_domainConfigurationArn = jsonValue.GetString("domainConfigurationArn");

  }



  return *this;
}
