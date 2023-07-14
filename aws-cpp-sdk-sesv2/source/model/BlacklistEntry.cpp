/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BlacklistEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

BlacklistEntry::BlacklistEntry() : 
    m_rblNameHasBeenSet(false),
    m_listingTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

BlacklistEntry::BlacklistEntry(JsonView jsonValue) : 
    m_rblNameHasBeenSet(false),
    m_listingTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

BlacklistEntry& BlacklistEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RblName"))
  {
    m_rblName = jsonValue.GetString("RblName");

    m_rblNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListingTime"))
  {
    m_listingTime = jsonValue.GetDouble("ListingTime");

    m_listingTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BlacklistEntry::Jsonize() const
{
  JsonValue payload;

  if(m_rblNameHasBeenSet)
  {
   payload.WithString("RblName", m_rblName);

  }

  if(m_listingTimeHasBeenSet)
  {
   payload.WithDouble("ListingTime", m_listingTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
