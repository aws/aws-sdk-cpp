/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/RegistryCatalogData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

RegistryCatalogData::RegistryCatalogData() : 
    m_displayNameHasBeenSet(false)
{
}

RegistryCatalogData::RegistryCatalogData(JsonView jsonValue) : 
    m_displayNameHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryCatalogData& RegistryCatalogData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryCatalogData::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
