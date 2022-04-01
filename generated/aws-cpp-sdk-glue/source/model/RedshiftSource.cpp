/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RedshiftSource.h>
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

RedshiftSource::RedshiftSource() : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_redshiftTmpDirHasBeenSet(false),
    m_tmpDirIAMRoleHasBeenSet(false)
{
}

RedshiftSource::RedshiftSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_redshiftTmpDirHasBeenSet(false),
    m_tmpDirIAMRoleHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftSource& RedshiftSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftTmpDir"))
  {
    m_redshiftTmpDir = jsonValue.GetString("RedshiftTmpDir");

    m_redshiftTmpDirHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TmpDirIAMRole"))
  {
    m_tmpDirIAMRole = jsonValue.GetString("TmpDirIAMRole");

    m_tmpDirIAMRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_redshiftTmpDirHasBeenSet)
  {
   payload.WithString("RedshiftTmpDir", m_redshiftTmpDir);

  }

  if(m_tmpDirIAMRoleHasBeenSet)
  {
   payload.WithString("TmpDirIAMRole", m_tmpDirIAMRole);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
