/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/SyncConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

SyncConfig::SyncConfig() : 
    m_conflictHandler(ConflictHandlerType::NOT_SET),
    m_conflictHandlerHasBeenSet(false),
    m_conflictDetection(ConflictDetectionType::NOT_SET),
    m_conflictDetectionHasBeenSet(false),
    m_lambdaConflictHandlerConfigHasBeenSet(false)
{
}

SyncConfig::SyncConfig(JsonView jsonValue) : 
    m_conflictHandler(ConflictHandlerType::NOT_SET),
    m_conflictHandlerHasBeenSet(false),
    m_conflictDetection(ConflictDetectionType::NOT_SET),
    m_conflictDetectionHasBeenSet(false),
    m_lambdaConflictHandlerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SyncConfig& SyncConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conflictHandler"))
  {
    m_conflictHandler = ConflictHandlerTypeMapper::GetConflictHandlerTypeForName(jsonValue.GetString("conflictHandler"));

    m_conflictHandlerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conflictDetection"))
  {
    m_conflictDetection = ConflictDetectionTypeMapper::GetConflictDetectionTypeForName(jsonValue.GetString("conflictDetection"));

    m_conflictDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaConflictHandlerConfig"))
  {
    m_lambdaConflictHandlerConfig = jsonValue.GetObject("lambdaConflictHandlerConfig");

    m_lambdaConflictHandlerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncConfig::Jsonize() const
{
  JsonValue payload;

  if(m_conflictHandlerHasBeenSet)
  {
   payload.WithString("conflictHandler", ConflictHandlerTypeMapper::GetNameForConflictHandlerType(m_conflictHandler));
  }

  if(m_conflictDetectionHasBeenSet)
  {
   payload.WithString("conflictDetection", ConflictDetectionTypeMapper::GetNameForConflictDetectionType(m_conflictDetection));
  }

  if(m_lambdaConflictHandlerConfigHasBeenSet)
  {
   payload.WithObject("lambdaConflictHandlerConfig", m_lambdaConflictHandlerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
