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
    m_rStudioServerProDomainSettingsForUpdateHasBeenSet(false)
{
}

DomainSettingsForUpdate::DomainSettingsForUpdate(JsonView jsonValue) : 
    m_rStudioServerProDomainSettingsForUpdateHasBeenSet(false)
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

  return *this;
}

JsonValue DomainSettingsForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_rStudioServerProDomainSettingsForUpdateHasBeenSet)
  {
   payload.WithObject("RStudioServerProDomainSettingsForUpdate", m_rStudioServerProDomainSettingsForUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
