/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/TableSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

TableSummary::TableSummary() : 
    m_keyspaceNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

TableSummary::TableSummary(JsonView jsonValue) : 
    m_keyspaceNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

TableSummary& TableSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");

    m_keyspaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TableSummary::Jsonize() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
