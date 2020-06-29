/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ServiceActionAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ServiceActionAssociation::ServiceActionAssociation() : 
    m_serviceActionIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false)
{
}

ServiceActionAssociation::ServiceActionAssociation(JsonView jsonValue) : 
    m_serviceActionIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceActionAssociation& ServiceActionAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceActionId"))
  {
    m_serviceActionId = jsonValue.GetString("ServiceActionId");

    m_serviceActionIdHasBeenSet = true;
  }

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

  return *this;
}

JsonValue ServiceActionAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_serviceActionIdHasBeenSet)
  {
   payload.WithString("ServiceActionId", m_serviceActionId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
