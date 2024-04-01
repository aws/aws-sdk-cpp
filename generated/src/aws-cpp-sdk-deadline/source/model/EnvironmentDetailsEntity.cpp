/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/EnvironmentDetailsEntity.h>
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

EnvironmentDetailsEntity::EnvironmentDetailsEntity() : 
    m_environmentIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

EnvironmentDetailsEntity::EnvironmentDetailsEntity(JsonView jsonValue) : 
    m_environmentIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentDetailsEntity& EnvironmentDetailsEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetObject("template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentDetailsEntity::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

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
