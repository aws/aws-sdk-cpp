/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OwnerGroupProperties.h>
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

OwnerGroupProperties::OwnerGroupProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

OwnerGroupProperties& OwnerGroupProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupIdentifier"))
  {
    m_groupIdentifier = jsonValue.GetString("groupIdentifier");
    m_groupIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue OwnerGroupProperties::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("groupIdentifier", m_groupIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
