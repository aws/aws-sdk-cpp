/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepDetailsEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepDetailsEntity::StepDetailsEntity() : 
    m_dependenciesHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

StepDetailsEntity::StepDetailsEntity(JsonView jsonValue) : 
    m_dependenciesHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

StepDetailsEntity& StepDetailsEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsString());
    }
    m_dependenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetObject("template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue StepDetailsEntity::Jsonize() const
{
  JsonValue payload;

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_templateHasBeenSet)
  {
    if(!m_template.View().IsNull())
    {
       payload.WithObject("template", JsonValue(m_template.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
