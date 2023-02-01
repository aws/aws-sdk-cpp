/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/SpaceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

SpaceSummary::SpaceSummary() : 
    m_nameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SpaceSummary::SpaceSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SpaceSummary& SpaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = jsonValue.GetString("regionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SpaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", m_regionName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
