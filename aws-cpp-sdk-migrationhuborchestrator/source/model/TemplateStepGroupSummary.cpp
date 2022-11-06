/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/TemplateStepGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

TemplateStepGroupSummary::TemplateStepGroupSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

TemplateStepGroupSummary::TemplateStepGroupSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateStepGroupSummary& TemplateStepGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
    m_previousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateStepGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_previousHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> previousJsonList(m_previous.size());
   for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
   {
     previousJsonList[previousIndex].AsString(m_previous[previousIndex]);
   }
   payload.WithArray("previous", std::move(previousJsonList));

  }

  if(m_nextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextJsonList(m_next.size());
   for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
   {
     nextJsonList[nextIndex].AsString(m_next[nextIndex]);
   }
   payload.WithArray("next", std::move(nextJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
