/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/PreparedStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

PreparedStatement::PreparedStatement() : 
    m_statementNameHasBeenSet(false),
    m_queryStatementHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

PreparedStatement::PreparedStatement(JsonView jsonValue) : 
    m_statementNameHasBeenSet(false),
    m_queryStatementHasBeenSet(false),
    m_workGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PreparedStatement& PreparedStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatementName"))
  {
    m_statementName = jsonValue.GetString("StatementName");

    m_statementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStatement"))
  {
    m_queryStatement = jsonValue.GetString("QueryStatement");

    m_queryStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroupName"))
  {
    m_workGroupName = jsonValue.GetString("WorkGroupName");

    m_workGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PreparedStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("QueryStatement", m_queryStatement);

  }

  if(m_workGroupNameHasBeenSet)
  {
   payload.WithString("WorkGroupName", m_workGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
