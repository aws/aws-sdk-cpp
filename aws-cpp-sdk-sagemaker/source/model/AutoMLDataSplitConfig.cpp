/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLDataSplitConfig.h>
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

AutoMLDataSplitConfig::AutoMLDataSplitConfig() : 
    m_validationFraction(0.0),
    m_validationFractionHasBeenSet(false)
{
}

AutoMLDataSplitConfig::AutoMLDataSplitConfig(JsonView jsonValue) : 
    m_validationFraction(0.0),
    m_validationFractionHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLDataSplitConfig& AutoMLDataSplitConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValidationFraction"))
  {
    m_validationFraction = jsonValue.GetDouble("ValidationFraction");

    m_validationFractionHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLDataSplitConfig::Jsonize() const
{
  JsonValue payload;

  if(m_validationFractionHasBeenSet)
  {
   payload.WithDouble("ValidationFraction", m_validationFraction);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
