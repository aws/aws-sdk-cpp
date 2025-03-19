/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/IamPropertiesPatch.h>
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

IamPropertiesPatch::IamPropertiesPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

IamPropertiesPatch& IamPropertiesPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueLineageSyncEnabled"))
  {
    m_glueLineageSyncEnabled = jsonValue.GetBool("glueLineageSyncEnabled");
    m_glueLineageSyncEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue IamPropertiesPatch::Jsonize() const
{
  JsonValue payload;

  if(m_glueLineageSyncEnabledHasBeenSet)
  {
   payload.WithBool("glueLineageSyncEnabled", m_glueLineageSyncEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
