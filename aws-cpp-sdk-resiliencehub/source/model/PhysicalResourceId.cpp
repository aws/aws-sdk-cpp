/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PhysicalResourceId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

PhysicalResourceId::PhysicalResourceId() : 
    m_awsAccountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_type(PhysicalIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PhysicalResourceId::PhysicalResourceId(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_type(PhysicalIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalResourceId& PhysicalResourceId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PhysicalIdentifierTypeMapper::GetPhysicalIdentifierTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalResourceId::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PhysicalIdentifierTypeMapper::GetNameForPhysicalIdentifierType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
