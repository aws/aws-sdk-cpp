/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SharedDirectory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

SharedDirectory::SharedDirectory() : 
    m_ownerAccountIdHasBeenSet(false),
    m_ownerDirectoryIdHasBeenSet(false),
    m_shareMethod(ShareMethod::NOT_SET),
    m_shareMethodHasBeenSet(false),
    m_sharedAccountIdHasBeenSet(false),
    m_sharedDirectoryIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_shareNotesHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

SharedDirectory::SharedDirectory(JsonView jsonValue) : 
    m_ownerAccountIdHasBeenSet(false),
    m_ownerDirectoryIdHasBeenSet(false),
    m_shareMethod(ShareMethod::NOT_SET),
    m_shareMethodHasBeenSet(false),
    m_sharedAccountIdHasBeenSet(false),
    m_sharedDirectoryIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_shareNotesHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SharedDirectory& SharedDirectory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerDirectoryId"))
  {
    m_ownerDirectoryId = jsonValue.GetString("OwnerDirectoryId");

    m_ownerDirectoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareMethod"))
  {
    m_shareMethod = ShareMethodMapper::GetShareMethodForName(jsonValue.GetString("ShareMethod"));

    m_shareMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedAccountId"))
  {
    m_sharedAccountId = jsonValue.GetString("SharedAccountId");

    m_sharedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedDirectoryId"))
  {
    m_sharedDirectoryId = jsonValue.GetString("SharedDirectoryId");

    m_sharedDirectoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareNotes"))
  {
    m_shareNotes = jsonValue.GetString("ShareNotes");

    m_shareNotesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDateTime"))
  {
    m_createdDateTime = jsonValue.GetDouble("CreatedDateTime");

    m_createdDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SharedDirectory::Jsonize() const
{
  JsonValue payload;

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_ownerDirectoryIdHasBeenSet)
  {
   payload.WithString("OwnerDirectoryId", m_ownerDirectoryId);

  }

  if(m_shareMethodHasBeenSet)
  {
   payload.WithString("ShareMethod", ShareMethodMapper::GetNameForShareMethod(m_shareMethod));
  }

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("SharedAccountId", m_sharedAccountId);

  }

  if(m_sharedDirectoryIdHasBeenSet)
  {
   payload.WithString("SharedDirectoryId", m_sharedDirectoryId);

  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_shareNotesHasBeenSet)
  {
   payload.WithString("ShareNotes", m_shareNotes);

  }

  if(m_createdDateTimeHasBeenSet)
  {
   payload.WithDouble("CreatedDateTime", m_createdDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
