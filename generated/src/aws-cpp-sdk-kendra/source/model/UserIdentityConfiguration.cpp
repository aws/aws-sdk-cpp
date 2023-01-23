/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserIdentityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

UserIdentityConfiguration::UserIdentityConfiguration() : 
    m_identityAttributeNameHasBeenSet(false)
{
}

UserIdentityConfiguration::UserIdentityConfiguration(JsonView jsonValue) : 
    m_identityAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentityConfiguration& UserIdentityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityAttributeName"))
  {
    m_identityAttributeName = jsonValue.GetString("IdentityAttributeName");

    m_identityAttributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_identityAttributeNameHasBeenSet)
  {
   payload.WithString("IdentityAttributeName", m_identityAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
