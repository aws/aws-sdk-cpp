/*
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
