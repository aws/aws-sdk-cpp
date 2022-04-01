/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ResourceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

ResourceDescription::ResourceDescription() : 
    m_identifierHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

ResourceDescription::ResourceDescription(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDescription& ResourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetString("Properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("Properties", m_properties);

  }

  return payload;
}

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
