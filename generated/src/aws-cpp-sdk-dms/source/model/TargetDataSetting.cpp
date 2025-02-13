﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TargetDataSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

TargetDataSetting::TargetDataSetting() : 
    m_tablePreparationMode(TablePreparationMode::NOT_SET),
    m_tablePreparationModeHasBeenSet(false)
{
}

TargetDataSetting::TargetDataSetting(JsonView jsonValue)
  : TargetDataSetting()
{
  *this = jsonValue;
}

TargetDataSetting& TargetDataSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TablePreparationMode"))
  {
    m_tablePreparationMode = TablePreparationModeMapper::GetTablePreparationModeForName(jsonValue.GetString("TablePreparationMode"));

    m_tablePreparationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetDataSetting::Jsonize() const
{
  JsonValue payload;

  if(m_tablePreparationModeHasBeenSet)
  {
   payload.WithString("TablePreparationMode", TablePreparationModeMapper::GetNameForTablePreparationMode(m_tablePreparationMode));
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
