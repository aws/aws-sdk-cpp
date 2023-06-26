/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ResourceSetSummary::ResourceSetSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_resourceSetStatus(ResourceSetStatus::NOT_SET),
    m_resourceSetStatusHasBeenSet(false)
{
}

ResourceSetSummary::ResourceSetSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_resourceSetStatus(ResourceSetStatus::NOT_SET),
    m_resourceSetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSetSummary& ResourceSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceSetStatus"))
  {
    m_resourceSetStatus = ResourceSetStatusMapper::GetResourceSetStatusForName(jsonValue.GetString("ResourceSetStatus"));

    m_resourceSetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_resourceSetStatusHasBeenSet)
  {
   payload.WithString("ResourceSetStatus", ResourceSetStatusMapper::GetNameForResourceSetStatus(m_resourceSetStatus));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
