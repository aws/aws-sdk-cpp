/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ListedAccess::ListedAccess() : 
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

ListedAccess::ListedAccess(JsonView jsonValue) : 
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListedAccess& ListedAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HomeDirectory"))
  {
    m_homeDirectory = jsonValue.GetString("HomeDirectory");

    m_homeDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeDirectoryType"))
  {
    m_homeDirectoryType = HomeDirectoryTypeMapper::GetHomeDirectoryTypeForName(jsonValue.GetString("HomeDirectoryType"));

    m_homeDirectoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedAccess::Jsonize() const
{
  JsonValue payload;

  if(m_homeDirectoryHasBeenSet)
  {
   payload.WithString("HomeDirectory", m_homeDirectory);

  }

  if(m_homeDirectoryTypeHasBeenSet)
  {
   payload.WithString("HomeDirectoryType", HomeDirectoryTypeMapper::GetNameForHomeDirectoryType(m_homeDirectoryType));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
