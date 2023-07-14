/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

SlotTypeConfiguration::SlotTypeConfiguration() : 
    m_regexConfigurationHasBeenSet(false)
{
}

SlotTypeConfiguration::SlotTypeConfiguration(JsonView jsonValue) : 
    m_regexConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeConfiguration& SlotTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regexConfiguration"))
  {
    m_regexConfiguration = jsonValue.GetObject("regexConfiguration");

    m_regexConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_regexConfigurationHasBeenSet)
  {
   payload.WithObject("regexConfiguration", m_regexConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
