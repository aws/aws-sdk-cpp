/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergCompactionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

IcebergCompactionConfiguration::IcebergCompactionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergCompactionConfiguration& IcebergCompactionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("strategy"))
  {
    m_strategy = CompactionStrategyMapper::GetCompactionStrategyForName(jsonValue.GetString("strategy"));
    m_strategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minInputFiles"))
  {
    m_minInputFiles = jsonValue.GetInteger("minInputFiles");
    m_minInputFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteFileThreshold"))
  {
    m_deleteFileThreshold = jsonValue.GetInteger("deleteFileThreshold");
    m_deleteFileThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergCompactionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("strategy", CompactionStrategyMapper::GetNameForCompactionStrategy(m_strategy));
  }

  if(m_minInputFilesHasBeenSet)
  {
   payload.WithInteger("minInputFiles", m_minInputFiles);

  }

  if(m_deleteFileThresholdHasBeenSet)
  {
   payload.WithInteger("deleteFileThreshold", m_deleteFileThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
