/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EmailAddressMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EmailAddressMetadata::EmailAddressMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailAddressMetadata& EmailAddressMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAddressId"))
  {
    m_emailAddressId = jsonValue.GetString("EmailAddressId");
    m_emailAddressIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailAddressArn"))
  {
    m_emailAddressArn = jsonValue.GetString("EmailAddressArn");
    m_emailAddressArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AliasConfigurations"))
  {
    Aws::Utils::Array<JsonView> aliasConfigurationsJsonList = jsonValue.GetArray("AliasConfigurations");
    for(unsigned aliasConfigurationsIndex = 0; aliasConfigurationsIndex < aliasConfigurationsJsonList.GetLength(); ++aliasConfigurationsIndex)
    {
      m_aliasConfigurations.push_back(aliasConfigurationsJsonList[aliasConfigurationsIndex].AsObject());
    }
    m_aliasConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAddressMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_emailAddressIdHasBeenSet)
  {
   payload.WithString("EmailAddressId", m_emailAddressId);

  }

  if(m_emailAddressArnHasBeenSet)
  {
   payload.WithString("EmailAddressArn", m_emailAddressArn);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_aliasConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasConfigurationsJsonList(m_aliasConfigurations.size());
   for(unsigned aliasConfigurationsIndex = 0; aliasConfigurationsIndex < aliasConfigurationsJsonList.GetLength(); ++aliasConfigurationsIndex)
   {
     aliasConfigurationsJsonList[aliasConfigurationsIndex].AsObject(m_aliasConfigurations[aliasConfigurationsIndex].Jsonize());
   }
   payload.WithArray("AliasConfigurations", std::move(aliasConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
