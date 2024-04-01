/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StorageProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StorageProfileSummary::StorageProfileSummary() : 
    m_displayNameHasBeenSet(false),
    m_osFamily(StorageProfileOperatingSystemFamily::NOT_SET),
    m_osFamilyHasBeenSet(false),
    m_storageProfileIdHasBeenSet(false)
{
}

StorageProfileSummary::StorageProfileSummary(JsonView jsonValue) : 
    m_displayNameHasBeenSet(false),
    m_osFamily(StorageProfileOperatingSystemFamily::NOT_SET),
    m_osFamilyHasBeenSet(false),
    m_storageProfileIdHasBeenSet(false)
{
  *this = jsonValue;
}

StorageProfileSummary& StorageProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osFamily"))
  {
    m_osFamily = StorageProfileOperatingSystemFamilyMapper::GetStorageProfileOperatingSystemFamilyForName(jsonValue.GetString("osFamily"));

    m_osFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageProfileId"))
  {
    m_storageProfileId = jsonValue.GetString("storageProfileId");

    m_storageProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_osFamilyHasBeenSet)
  {
   payload.WithString("osFamily", StorageProfileOperatingSystemFamilyMapper::GetNameForStorageProfileOperatingSystemFamily(m_osFamily));
  }

  if(m_storageProfileIdHasBeenSet)
  {
   payload.WithString("storageProfileId", m_storageProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
