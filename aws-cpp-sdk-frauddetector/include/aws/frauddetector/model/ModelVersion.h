/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The model version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVersion">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API ModelVersion
  {
  public:
    ModelVersion();
    ModelVersion(Aws::Utils::Json::JsonView jsonValue);
    ModelVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parent model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The parent model ID.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The parent model ID.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The parent model ID.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The parent model ID.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The parent model ID.</p>
     */
    inline ModelVersion& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The parent model ID.</p>
     */
    inline ModelVersion& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The parent model ID.</p>
     */
    inline ModelVersion& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type.</p>
     */
    inline ModelVersion& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline ModelVersion& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }

    /**
     * <p>The model version.</p>
     */
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = value; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::move(value); }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber.assign(value); }

    /**
     * <p>The model version.</p>
     */
    inline ModelVersion& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline ModelVersion& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline ModelVersion& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
