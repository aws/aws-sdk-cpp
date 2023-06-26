/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/SystemTemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

SystemTemplateSummary::SystemTemplateSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_revisionNumber(0),
    m_revisionNumberHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

SystemTemplateSummary::SystemTemplateSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_revisionNumber(0),
    m_revisionNumberHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

SystemTemplateSummary& SystemTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionNumber"))
  {
    m_revisionNumber = jsonValue.GetInt64("revisionNumber");

    m_revisionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_revisionNumberHasBeenSet)
  {
   payload.WithInt64("revisionNumber", m_revisionNumber);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
