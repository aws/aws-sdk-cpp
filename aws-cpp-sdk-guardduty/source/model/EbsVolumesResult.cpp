﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EbsVolumesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

EbsVolumesResult::EbsVolumesResult() : 
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EbsVolumesResult::EbsVolumesResult(JsonView jsonValue) : 
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolumesResult& EbsVolumesResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceStatusMapper::GetDataSourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsVolumesResult::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataSourceStatusMapper::GetNameForDataSourceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
