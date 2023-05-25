/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ExecutionEngineConfig.h>
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

ExecutionEngineConfig::ExecutionEngineConfig() : 
    m_idHasBeenSet(false),
    m_type(ExecutionEngineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_masterInstanceSecurityGroupIdHasBeenSet(false)
{
}

ExecutionEngineConfig::ExecutionEngineConfig(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(ExecutionEngineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_masterInstanceSecurityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionEngineConfig& ExecutionEngineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ExecutionEngineTypeMapper::GetExecutionEngineTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterInstanceSecurityGroupId"))
  {
    m_masterInstanceSecurityGroupId = jsonValue.GetString("MasterInstanceSecurityGroupId");

    m_masterInstanceSecurityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionEngineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ExecutionEngineTypeMapper::GetNameForExecutionEngineType(m_type));
  }

  if(m_masterInstanceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("MasterInstanceSecurityGroupId", m_masterInstanceSecurityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
