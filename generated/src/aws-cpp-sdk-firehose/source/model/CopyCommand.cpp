﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/CopyCommand.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

CopyCommand::CopyCommand(JsonView jsonValue)
{
  *this = jsonValue;
}

CopyCommand& CopyCommand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataTableName"))
  {
    m_dataTableName = jsonValue.GetString("DataTableName");
    m_dataTableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataTableColumns"))
  {
    m_dataTableColumns = jsonValue.GetString("DataTableColumns");
    m_dataTableColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CopyOptions"))
  {
    m_copyOptions = jsonValue.GetString("CopyOptions");
    m_copyOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CopyCommand::Jsonize() const
{
  JsonValue payload;

  if(m_dataTableNameHasBeenSet)
  {
   payload.WithString("DataTableName", m_dataTableName);

  }

  if(m_dataTableColumnsHasBeenSet)
  {
   payload.WithString("DataTableColumns", m_dataTableColumns);

  }

  if(m_copyOptionsHasBeenSet)
  {
   payload.WithString("CopyOptions", m_copyOptions);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
