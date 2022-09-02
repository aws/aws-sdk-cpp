/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DomainSettingsForUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DomainSettingsForUpdate::DomainSettingsForUpdate() : 
    m_rStudioServerProDomainSettingsForUpdateHasBeenSet(false),
    m_executionRoleIdentityConfig(ExecutionRoleIdentityConfig::NOT_SET),
    m_executionRoleIdentityConfigHasBeenSet(false)
{
}

DomainSettingsForUpdate::DomainSettingsForUpdate(JsonView jsonValue) : 
    m_rStudioServerProDomainSettingsForUpdateHasBeenSet(false),
    m_executionRoleIdentityConfig(ExecutionRoleIdentityConfig::NOT_SET),
    m_executionRoleIdentityConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSettingsForUpdate& DomainSettingsForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RStudioServerProDomainSettingsForUpdate"))
  {
    m_rStudioServerProDomainSettingsForUpdate = jsonValue.GetObject("RStudioServerProDomainSettingsForUpdate");

    m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleIdentityConfig"))
  {
    m_executionRoleIdentityConfig = ExecutionRoleIdentityConfigMapper::GetExecutionRoleIdentityConfigForName(jsonValue.GetString("ExecutionRoleIdentityConfig"));

    m_executionRoleIdentityConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSettingsForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_rStudioServerProDomainSettingsForUpdateHasBeenSet)
  {
   payload.WithObject("RStudioServerProDomainSettingsForUpdate", m_rStudioServerProDomainSettingsForUpdate.Jsonize());

  }

  if(m_executionRoleIdentityConfigHasBeenSet)
  {
   payload.WithString("ExecutionRoleIdentityConfig", ExecutionRoleIdentityConfigMapper::GetNameForExecutionRoleIdentityConfig(m_executionRoleIdentityConfig));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
