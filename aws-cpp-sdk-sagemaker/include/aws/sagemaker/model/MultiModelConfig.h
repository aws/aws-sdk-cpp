/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelCacheSetting.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies additional configuration for hosting multi-model
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MultiModelConfig">AWS
   * API Reference</a></p>
   */
  class MultiModelConfig
  {
  public:
    AWS_SAGEMAKER_API MultiModelConfig();
    AWS_SAGEMAKER_API MultiModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MultiModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline const ModelCacheSetting& GetModelCacheSetting() const{ return m_modelCacheSetting; }

    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline bool ModelCacheSettingHasBeenSet() const { return m_modelCacheSettingHasBeenSet; }

    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline void SetModelCacheSetting(const ModelCacheSetting& value) { m_modelCacheSettingHasBeenSet = true; m_modelCacheSetting = value; }

    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline void SetModelCacheSetting(ModelCacheSetting&& value) { m_modelCacheSettingHasBeenSet = true; m_modelCacheSetting = std::move(value); }

    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline MultiModelConfig& WithModelCacheSetting(const ModelCacheSetting& value) { SetModelCacheSetting(value); return *this;}

    /**
     * <p>Whether to cache models for a multi-model endpoint. By default, multi-model
     * endpoints cache models so that a model does not have to be loaded into memory
     * each time it is invoked. Some use cases do not benefit from model caching. For
     * example, if an endpoint hosts a large number of models that are each invoked
     * infrequently, the endpoint might perform better if you disable model caching. To
     * disable model caching, set the value of this parameter to
     * <code>Disabled</code>.</p>
     */
    inline MultiModelConfig& WithModelCacheSetting(ModelCacheSetting&& value) { SetModelCacheSetting(std::move(value)); return *this;}

  private:

    ModelCacheSetting m_modelCacheSetting;
    bool m_modelCacheSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
