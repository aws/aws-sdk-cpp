/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/LocationListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

LocationListEntry::LocationListEntry() : 
    m_locationArnHasBeenSet(false),
    m_locationUriHasBeenSet(false)
{
}

LocationListEntry::LocationListEntry(JsonView jsonValue) : 
    m_locationArnHasBeenSet(false),
    m_locationUriHasBeenSet(false)
{
  *this = jsonValue;
}

LocationListEntry& LocationListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

    m_locationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

    m_locationUriHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_locationUriHasBeenSet)
  {
   payload.WithString("LocationUri", m_locationUri);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
