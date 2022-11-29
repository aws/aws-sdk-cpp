/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Standard.h>
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

Standard::Standard() : 
    m_standardsArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabledByDefault(false),
    m_enabledByDefaultHasBeenSet(false),
    m_standardsManagedByHasBeenSet(false)
{
}

Standard::Standard(JsonView jsonValue) : 
    m_standardsArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabledByDefault(false),
    m_enabledByDefaultHasBeenSet(false),
    m_standardsManagedByHasBeenSet(false)
{
  *this = jsonValue;
}

Standard& Standard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsArn"))
  {
    m_standardsArn = jsonValue.GetString("StandardsArn");

    m_standardsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledByDefault"))
  {
    m_enabledByDefault = jsonValue.GetBool("EnabledByDefault");

    m_enabledByDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsManagedBy"))
  {
    m_standardsManagedBy = jsonValue.GetObject("StandardsManagedBy");

    m_standardsManagedByHasBeenSet = true;
  }

  return *this;
}

JsonValue Standard::Jsonize() const
{
  JsonValue payload;

  if(m_standardsArnHasBeenSet)
  {
   payload.WithString("StandardsArn", m_standardsArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_enabledByDefaultHasBeenSet)
  {
   payload.WithBool("EnabledByDefault", m_enabledByDefault);

  }

  if(m_standardsManagedByHasBeenSet)
  {
   payload.WithObject("StandardsManagedBy", m_standardsManagedBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
