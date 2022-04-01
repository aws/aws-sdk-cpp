/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatabaseTableOutputOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

DatabaseTableOutputOptions::DatabaseTableOutputOptions() : 
    m_tempDirectoryHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

DatabaseTableOutputOptions::DatabaseTableOutputOptions(JsonView jsonValue) : 
    m_tempDirectoryHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseTableOutputOptions& DatabaseTableOutputOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TempDirectory"))
  {
    m_tempDirectory = jsonValue.GetObject("TempDirectory");

    m_tempDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseTableOutputOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tempDirectoryHasBeenSet)
  {
   payload.WithObject("TempDirectory", m_tempDirectory.Jsonize());

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
