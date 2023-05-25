/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRulesetFilterCriteria.h>
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

DataQualityRulesetFilterCriteria::DataQualityRulesetFilterCriteria() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_lastModifiedBeforeHasBeenSet(false),
    m_lastModifiedAfterHasBeenSet(false),
    m_targetTableHasBeenSet(false)
{
}

DataQualityRulesetFilterCriteria::DataQualityRulesetFilterCriteria(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_lastModifiedBeforeHasBeenSet(false),
    m_lastModifiedAfterHasBeenSet(false),
    m_targetTableHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityRulesetFilterCriteria& DataQualityRulesetFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBefore"))
  {
    m_createdBefore = jsonValue.GetDouble("CreatedBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAfter"))
  {
    m_createdAfter = jsonValue.GetDouble("CreatedAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBefore"))
  {
    m_lastModifiedBefore = jsonValue.GetDouble("LastModifiedBefore");

    m_lastModifiedBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedAfter"))
  {
    m_lastModifiedAfter = jsonValue.GetDouble("LastModifiedAfter");

    m_lastModifiedAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTable"))
  {
    m_targetTable = jsonValue.GetObject("TargetTable");

    m_targetTableHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityRulesetFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedBefore", m_lastModifiedBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedAfter", m_lastModifiedAfter.SecondsWithMSPrecision());
  }

  if(m_targetTableHasBeenSet)
  {
   payload.WithObject("TargetTable", m_targetTable.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
