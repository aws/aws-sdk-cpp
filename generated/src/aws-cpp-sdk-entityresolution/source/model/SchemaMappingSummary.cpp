/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/SchemaMappingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

SchemaMappingSummary::SchemaMappingSummary() : 
    m_createdAtHasBeenSet(false),
    m_hasWorkflows(false),
    m_hasWorkflowsHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

SchemaMappingSummary::SchemaMappingSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_hasWorkflows(false),
    m_hasWorkflowsHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaMappingSummary& SchemaMappingSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasWorkflows"))
  {
    m_hasWorkflows = jsonValue.GetBool("hasWorkflows");

    m_hasWorkflowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaArn"))
  {
    m_schemaArn = jsonValue.GetString("schemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaMappingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_hasWorkflowsHasBeenSet)
  {
   payload.WithBool("hasWorkflows", m_hasWorkflows);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("schemaArn", m_schemaArn);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
