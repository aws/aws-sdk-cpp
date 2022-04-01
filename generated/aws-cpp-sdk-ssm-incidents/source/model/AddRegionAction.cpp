/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/AddRegionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

AddRegionAction::AddRegionAction() : 
    m_regionNameHasBeenSet(false),
    m_sseKmsKeyIdHasBeenSet(false)
{
}

AddRegionAction::AddRegionAction(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_sseKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AddRegionAction& AddRegionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = jsonValue.GetString("regionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sseKmsKeyId"))
  {
    m_sseKmsKeyId = jsonValue.GetString("sseKmsKeyId");

    m_sseKmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AddRegionAction::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", m_regionName);

  }

  if(m_sseKmsKeyIdHasBeenSet)
  {
   payload.WithString("sseKmsKeyId", m_sseKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
