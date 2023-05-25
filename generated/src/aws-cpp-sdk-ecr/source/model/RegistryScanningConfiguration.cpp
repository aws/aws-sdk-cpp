/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RegistryScanningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

RegistryScanningConfiguration::RegistryScanningConfiguration() : 
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

RegistryScanningConfiguration::RegistryScanningConfiguration(JsonView jsonValue) : 
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryScanningConfiguration& RegistryScanningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = ScanTypeMapper::GetScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryScanningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", ScanTypeMapper::GetNameForScanType(m_scanType));
  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
