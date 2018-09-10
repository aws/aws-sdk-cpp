﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
