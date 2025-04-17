/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssignSlaActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AssignSlaActionDefinition::AssignSlaActionDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

AssignSlaActionDefinition& AssignSlaActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlaAssignmentType"))
  {
    m_slaAssignmentType = SlaAssignmentTypeMapper::GetSlaAssignmentTypeForName(jsonValue.GetString("SlaAssignmentType"));
    m_slaAssignmentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CaseSlaConfiguration"))
  {
    m_caseSlaConfiguration = jsonValue.GetObject("CaseSlaConfiguration");
    m_caseSlaConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AssignSlaActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_slaAssignmentTypeHasBeenSet)
  {
   payload.WithString("SlaAssignmentType", SlaAssignmentTypeMapper::GetNameForSlaAssignmentType(m_slaAssignmentType));
  }

  if(m_caseSlaConfigurationHasBeenSet)
  {
   payload.WithObject("CaseSlaConfiguration", m_caseSlaConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
