/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainUnitUserProperties.h>
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

DomainUnitUserProperties::DomainUnitUserProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainUnitUserProperties& DomainUnitUserProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainUnitUserProperties::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
