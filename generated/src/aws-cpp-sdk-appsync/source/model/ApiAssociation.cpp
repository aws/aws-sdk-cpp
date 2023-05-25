/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

ApiAssociation::ApiAssociation() : 
    m_domainNameHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_deploymentDetailHasBeenSet(false)
{
}

ApiAssociation::ApiAssociation(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_deploymentDetailHasBeenSet(false)
{
  *this = jsonValue;
}

ApiAssociation& ApiAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationStatus"))
  {
    m_associationStatus = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("associationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentDetail"))
  {
    m_deploymentDetail = jsonValue.GetString("deploymentDetail");

    m_deploymentDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("associationStatus", AssociationStatusMapper::GetNameForAssociationStatus(m_associationStatus));
  }

  if(m_deploymentDetailHasBeenSet)
  {
   payload.WithString("deploymentDetail", m_deploymentDetail);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
