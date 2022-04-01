/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateContainerServiceRegistryLoginResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateContainerServiceRegistryLoginResult::CreateContainerServiceRegistryLoginResult()
{
}

CreateContainerServiceRegistryLoginResult::CreateContainerServiceRegistryLoginResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateContainerServiceRegistryLoginResult& CreateContainerServiceRegistryLoginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryLogin"))
  {
    m_registryLogin = jsonValue.GetObject("registryLogin");

  }



  return *this;
}
