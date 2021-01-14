/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MultiModelConfig.h>
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

MultiModelConfig::MultiModelConfig() : 
    m_modelCacheSetting(ModelCacheSetting::NOT_SET),
    m_modelCacheSettingHasBeenSet(false)
{
}

MultiModelConfig::MultiModelConfig(JsonView jsonValue) : 
    m_modelCacheSetting(ModelCacheSetting::NOT_SET),
    m_modelCacheSettingHasBeenSet(false)
{
  *this = jsonValue;
}

MultiModelConfig& MultiModelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelCacheSetting"))
  {
    m_modelCacheSetting = ModelCacheSettingMapper::GetModelCacheSettingForName(jsonValue.GetString("ModelCacheSetting"));

    m_modelCacheSettingHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiModelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelCacheSettingHasBeenSet)
  {
   payload.WithString("ModelCacheSetting", ModelCacheSettingMapper::GetNameForModelCacheSetting(m_modelCacheSetting));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
