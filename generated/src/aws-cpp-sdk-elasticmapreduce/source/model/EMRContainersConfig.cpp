/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/EMRContainersConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

EMRContainersConfig::EMRContainersConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EMRContainersConfig& EMRContainersConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");
    m_jobRunIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EMRContainersConfig::Jsonize() const
{
  JsonValue payload;

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
