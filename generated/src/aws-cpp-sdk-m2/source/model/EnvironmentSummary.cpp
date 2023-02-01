/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/EnvironmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

EnvironmentSummary::EnvironmentSummary() : 
    m_creationTimeHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EnvironmentLifecycle::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EnvironmentSummary::EnvironmentSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(EnvironmentLifecycle::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentSummary& EnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");

    m_environmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentLifecycleMapper::GetEnvironmentLifecycleForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("environmentArn", m_environmentArn);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentLifecycleMapper::GetNameForEnvironmentLifecycle(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
