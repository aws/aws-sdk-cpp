/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RegistryListItem.h>
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

RegistryListItem::RegistryListItem() : 
    m_registryNameHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(RegistryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

RegistryListItem::RegistryListItem(JsonView jsonValue) : 
    m_registryNameHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(RegistryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryListItem& RegistryListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

    m_registryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RegistryStatusMapper::GetRegistryStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetString("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryListItem::Jsonize() const
{
  JsonValue payload;

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("RegistryArn", m_registryArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RegistryStatusMapper::GetNameForRegistryStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithString("UpdatedTime", m_updatedTime);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
