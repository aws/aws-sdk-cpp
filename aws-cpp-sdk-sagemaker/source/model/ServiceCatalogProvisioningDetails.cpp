/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ServiceCatalogProvisioningDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ServiceCatalogProvisioningDetails::ServiceCatalogProvisioningDetails() : 
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false)
{
}

ServiceCatalogProvisioningDetails::ServiceCatalogProvisioningDetails(JsonView jsonValue) : 
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceCatalogProvisioningDetails& ServiceCatalogProvisioningDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathId"))
  {
    m_pathId = jsonValue.GetString("PathId");

    m_pathIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningParameters"))
  {
    Aws::Utils::Array<JsonView> provisioningParametersJsonList = jsonValue.GetArray("ProvisioningParameters");
    for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
    {
      m_provisioningParameters.push_back(provisioningParametersJsonList[provisioningParametersIndex].AsObject());
    }
    m_provisioningParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceCatalogProvisioningDetails::Jsonize() const
{
  JsonValue payload;

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_provisioningParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisioningParametersJsonList(m_provisioningParameters.size());
   for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
   {
     provisioningParametersJsonList[provisioningParametersIndex].AsObject(m_provisioningParameters[provisioningParametersIndex].Jsonize());
   }
   payload.WithArray("ProvisioningParameters", std::move(provisioningParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
