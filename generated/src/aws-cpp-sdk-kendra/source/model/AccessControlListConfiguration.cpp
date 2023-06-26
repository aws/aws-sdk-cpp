/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AccessControlListConfiguration.h>
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

AccessControlListConfiguration::AccessControlListConfiguration() : 
    m_keyPathHasBeenSet(false)
{
}

AccessControlListConfiguration::AccessControlListConfiguration(JsonView jsonValue) : 
    m_keyPathHasBeenSet(false)
{
  *this = jsonValue;
}

AccessControlListConfiguration& AccessControlListConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyPath"))
  {
    m_keyPath = jsonValue.GetString("KeyPath");

    m_keyPathHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessControlListConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyPathHasBeenSet)
  {
   payload.WithString("KeyPath", m_keyPath);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
