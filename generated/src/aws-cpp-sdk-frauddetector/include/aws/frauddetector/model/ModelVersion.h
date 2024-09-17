/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModelVersion
  {
  public:
    AWS_FRAUDDETECTOR_API ModelVersion();
    AWS_FRAUDDETECTOR_API ModelVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline ModelVersion& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline ModelVersion& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline ModelVersion& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }
    inline ModelVersion& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}
    inline ModelVersion& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = value; }
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::move(value); }
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber.assign(value); }
    inline ModelVersion& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}
    inline ModelVersion& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}
    inline ModelVersion& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ModelVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ModelVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ModelVersion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
