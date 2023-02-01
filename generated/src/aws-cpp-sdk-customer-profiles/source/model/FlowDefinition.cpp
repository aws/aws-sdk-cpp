/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/FlowDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

FlowDefinition::FlowDefinition() : 
    m_descriptionHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_kmsArnHasBeenSet(false),
    m_sourceFlowConfigHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_triggerConfigHasBeenSet(false)
{
}

FlowDefinition::FlowDefinition(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_kmsArnHasBeenSet(false),
    m_sourceFlowConfigHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_triggerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

FlowDefinition& FlowDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowName"))
  {
    m_flowName = jsonValue.GetString("FlowName");

    m_flowNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsArn"))
  {
    m_kmsArn = jsonValue.GetString("KmsArn");

    m_kmsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFlowConfig"))
  {
    m_sourceFlowConfig = jsonValue.GetObject("SourceFlowConfig");

    m_sourceFlowConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tasks"))
  {
    Aws::Utils::Array<JsonView> tasksJsonList = jsonValue.GetArray("Tasks");
    for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
    {
      m_tasks.push_back(tasksJsonList[tasksIndex].AsObject());
    }
    m_tasksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerConfig"))
  {
    m_triggerConfig = jsonValue.GetObject("TriggerConfig");

    m_triggerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("FlowName", m_flowName);

  }

  if(m_kmsArnHasBeenSet)
  {
   payload.WithString("KmsArn", m_kmsArn);

  }

  if(m_sourceFlowConfigHasBeenSet)
  {
   payload.WithObject("SourceFlowConfig", m_sourceFlowConfig.Jsonize());

  }

  if(m_tasksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tasksJsonList(m_tasks.size());
   for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
   {
     tasksJsonList[tasksIndex].AsObject(m_tasks[tasksIndex].Jsonize());
   }
   payload.WithArray("Tasks", std::move(tasksJsonList));

  }

  if(m_triggerConfigHasBeenSet)
  {
   payload.WithObject("TriggerConfig", m_triggerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
