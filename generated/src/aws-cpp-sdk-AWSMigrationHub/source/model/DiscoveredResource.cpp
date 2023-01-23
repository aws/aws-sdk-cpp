/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

DiscoveredResource::DiscoveredResource() : 
    m_configurationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

DiscoveredResource::DiscoveredResource(JsonView jsonValue) : 
    m_configurationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoveredResource& DiscoveredResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationId"))
  {
    m_configurationId = jsonValue.GetString("ConfigurationId");

    m_configurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoveredResource::Jsonize() const
{
  JsonValue payload;

  if(m_configurationIdHasBeenSet)
  {
   payload.WithString("ConfigurationId", m_configurationId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
