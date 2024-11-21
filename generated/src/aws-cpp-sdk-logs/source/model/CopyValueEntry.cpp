﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CopyValueEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

CopyValueEntry::CopyValueEntry() : 
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_overwriteIfExists(false),
    m_overwriteIfExistsHasBeenSet(false)
{
}

CopyValueEntry::CopyValueEntry(JsonView jsonValue)
  : CopyValueEntry()
{
  *this = jsonValue;
}

CopyValueEntry& CopyValueEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overwriteIfExists"))
  {
    m_overwriteIfExists = jsonValue.GetBool("overwriteIfExists");

    m_overwriteIfExistsHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyValueEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_overwriteIfExistsHasBeenSet)
  {
   payload.WithBool("overwriteIfExists", m_overwriteIfExists);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
