﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

Lifecycle::Lifecycle(JsonView jsonValue)
{
  *this = jsonValue;
}

Lifecycle& Lifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MoveToColdStorageAfterDays"))
  {
    m_moveToColdStorageAfterDays = jsonValue.GetInt64("MoveToColdStorageAfterDays");
    m_moveToColdStorageAfterDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeleteAfterDays"))
  {
    m_deleteAfterDays = jsonValue.GetInt64("DeleteAfterDays");
    m_deleteAfterDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptInToArchiveForSupportedResources"))
  {
    m_optInToArchiveForSupportedResources = jsonValue.GetBool("OptInToArchiveForSupportedResources");
    m_optInToArchiveForSupportedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue Lifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_moveToColdStorageAfterDaysHasBeenSet)
  {
   payload.WithInt64("MoveToColdStorageAfterDays", m_moveToColdStorageAfterDays);

  }

  if(m_deleteAfterDaysHasBeenSet)
  {
   payload.WithInt64("DeleteAfterDays", m_deleteAfterDays);

  }

  if(m_optInToArchiveForSupportedResourcesHasBeenSet)
  {
   payload.WithBool("OptInToArchiveForSupportedResources", m_optInToArchiveForSupportedResources);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
