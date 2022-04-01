/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CidrBlockAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

CidrBlockAssociation::CidrBlockAssociation() : 
    m_associationIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
}

CidrBlockAssociation::CidrBlockAssociation(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockStateHasBeenSet(false)
{
  *this = jsonValue;
}

CidrBlockAssociation& CidrBlockAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlockState"))
  {
    m_cidrBlockState = jsonValue.GetString("CidrBlockState");

    m_cidrBlockStateHasBeenSet = true;
  }

  return *this;
}

JsonValue CidrBlockAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_cidrBlockStateHasBeenSet)
  {
   payload.WithString("CidrBlockState", m_cidrBlockState);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
