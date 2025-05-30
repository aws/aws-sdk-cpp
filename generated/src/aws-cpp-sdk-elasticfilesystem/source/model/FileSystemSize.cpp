﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/FileSystemSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

FileSystemSize::FileSystemSize(JsonView jsonValue)
{
  *this = jsonValue;
}

FileSystemSize& FileSystemSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueInIA"))
  {
    m_valueInIA = jsonValue.GetInt64("ValueInIA");
    m_valueInIAHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueInStandard"))
  {
    m_valueInStandard = jsonValue.GetInt64("ValueInStandard");
    m_valueInStandardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueInArchive"))
  {
    m_valueInArchive = jsonValue.GetInt64("ValueInArchive");
    m_valueInArchiveHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSystemSize::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_valueInIAHasBeenSet)
  {
   payload.WithInt64("ValueInIA", m_valueInIA);

  }

  if(m_valueInStandardHasBeenSet)
  {
   payload.WithInt64("ValueInStandard", m_valueInStandard);

  }

  if(m_valueInArchiveHasBeenSet)
  {
   payload.WithInt64("ValueInArchive", m_valueInArchive);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
