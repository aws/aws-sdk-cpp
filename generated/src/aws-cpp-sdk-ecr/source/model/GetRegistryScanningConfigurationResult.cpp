/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/GetRegistryScanningConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRegistryScanningConfigurationResult::GetRegistryScanningConfigurationResult()
{
}

GetRegistryScanningConfigurationResult::GetRegistryScanningConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRegistryScanningConfigurationResult& GetRegistryScanningConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("scanningConfiguration"))
  {
    m_scanningConfiguration = jsonValue.GetObject("scanningConfiguration");

  }



  return *this;
}
