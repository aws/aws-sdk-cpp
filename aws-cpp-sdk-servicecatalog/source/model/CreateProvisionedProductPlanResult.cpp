/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CreateProvisionedProductPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisionedProductPlanResult::CreateProvisionedProductPlanResult()
{
}

CreateProvisionedProductPlanResult::CreateProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateProvisionedProductPlanResult& CreateProvisionedProductPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PlanName"))
  {
    m_planName = jsonValue.GetString("PlanName");

  }

  if(jsonValue.ValueExists("PlanId"))
  {
    m_planId = jsonValue.GetString("PlanId");

  }

  if(jsonValue.ValueExists("ProvisionProductId"))
  {
    m_provisionProductId = jsonValue.GetString("ProvisionProductId");

  }

  if(jsonValue.ValueExists("ProvisionedProductName"))
  {
    m_provisionedProductName = jsonValue.GetString("ProvisionedProductName");

  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

  }



  return *this;
}
