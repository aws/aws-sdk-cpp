/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

JobDependency::JobDependency() : 
    m_jobIdHasBeenSet(false),
    m_type(ArrayJobDependency::NOT_SET),
    m_typeHasBeenSet(false)
{
}

JobDependency::JobDependency(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_type(ArrayJobDependency::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

JobDependency& JobDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ArrayJobDependencyMapper::GetArrayJobDependencyForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDependency::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ArrayJobDependencyMapper::GetNameForArrayJobDependency(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
