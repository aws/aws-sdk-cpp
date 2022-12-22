/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ShadowModeConfig.h>
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

ShadowModeConfig::ShadowModeConfig() : 
    m_sourceModelVariantNameHasBeenSet(false),
    m_shadowModelVariantsHasBeenSet(false)
{
}

ShadowModeConfig::ShadowModeConfig(JsonView jsonValue) : 
    m_sourceModelVariantNameHasBeenSet(false),
    m_shadowModelVariantsHasBeenSet(false)
{
  *this = jsonValue;
}

ShadowModeConfig& ShadowModeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceModelVariantName"))
  {
    m_sourceModelVariantName = jsonValue.GetString("SourceModelVariantName");

    m_sourceModelVariantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShadowModelVariants"))
  {
    Aws::Utils::Array<JsonView> shadowModelVariantsJsonList = jsonValue.GetArray("ShadowModelVariants");
    for(unsigned shadowModelVariantsIndex = 0; shadowModelVariantsIndex < shadowModelVariantsJsonList.GetLength(); ++shadowModelVariantsIndex)
    {
      m_shadowModelVariants.push_back(shadowModelVariantsJsonList[shadowModelVariantsIndex].AsObject());
    }
    m_shadowModelVariantsHasBeenSet = true;
  }

  return *this;
}

JsonValue ShadowModeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sourceModelVariantNameHasBeenSet)
  {
   payload.WithString("SourceModelVariantName", m_sourceModelVariantName);

  }

  if(m_shadowModelVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shadowModelVariantsJsonList(m_shadowModelVariants.size());
   for(unsigned shadowModelVariantsIndex = 0; shadowModelVariantsIndex < shadowModelVariantsJsonList.GetLength(); ++shadowModelVariantsIndex)
   {
     shadowModelVariantsJsonList[shadowModelVariantsIndex].AsObject(m_shadowModelVariants[shadowModelVariantsIndex].Jsonize());
   }
   payload.WithArray("ShadowModelVariants", std::move(shadowModelVariantsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
