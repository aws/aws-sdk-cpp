/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AclConfiguration.h>
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

AclConfiguration::AclConfiguration() : 
    m_allowedGroupsColumnNameHasBeenSet(false)
{
}

AclConfiguration::AclConfiguration(JsonView jsonValue) : 
    m_allowedGroupsColumnNameHasBeenSet(false)
{
  *this = jsonValue;
}

AclConfiguration& AclConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedGroupsColumnName"))
  {
    m_allowedGroupsColumnName = jsonValue.GetString("AllowedGroupsColumnName");

    m_allowedGroupsColumnNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AclConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowedGroupsColumnNameHasBeenSet)
  {
   payload.WithString("AllowedGroupsColumnName", m_allowedGroupsColumnName);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
