/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionTypeVariant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConnectionTypeVariant::ConnectionTypeVariant(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionTypeVariant& ConnectionTypeVariant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionTypeVariantName"))
  {
    m_connectionTypeVariantName = jsonValue.GetString("ConnectionTypeVariantName");
    m_connectionTypeVariantNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoUrl"))
  {
    m_logoUrl = jsonValue.GetString("LogoUrl");
    m_logoUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionTypeVariant::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTypeVariantNameHasBeenSet)
  {
   payload.WithString("ConnectionTypeVariantName", m_connectionTypeVariantName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_logoUrlHasBeenSet)
  {
   payload.WithString("LogoUrl", m_logoUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
