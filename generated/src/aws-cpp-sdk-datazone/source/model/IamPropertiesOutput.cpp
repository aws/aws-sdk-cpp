/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/IamPropertiesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

IamPropertiesOutput::IamPropertiesOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

IamPropertiesOutput& IamPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glueLineageSyncEnabled"))
  {
    m_glueLineageSyncEnabled = jsonValue.GetBool("glueLineageSyncEnabled");
    m_glueLineageSyncEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue IamPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_glueLineageSyncEnabledHasBeenSet)
  {
   payload.WithBool("glueLineageSyncEnabled", m_glueLineageSyncEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
