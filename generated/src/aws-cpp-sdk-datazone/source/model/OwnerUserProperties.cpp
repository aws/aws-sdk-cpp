/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OwnerUserProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

OwnerUserProperties::OwnerUserProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

OwnerUserProperties& OwnerUserProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userIdentifier"))
  {
    m_userIdentifier = jsonValue.GetString("userIdentifier");
    m_userIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue OwnerUserProperties::Jsonize() const
{
  JsonValue payload;

  if(m_userIdentifierHasBeenSet)
  {
   payload.WithString("userIdentifier", m_userIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
