/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/ModelVersionStatus.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateModelVersionStatusRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateModelVersionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelVersionStatus"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The model ID of the model version to update.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    UpdateModelVersionStatusRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline UpdateModelVersionStatusRequest& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const { return m_modelVersionNumber; }
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }
    template<typename ModelVersionNumberT = Aws::String>
    void SetModelVersionNumber(ModelVersionNumberT&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::forward<ModelVersionNumberT>(value); }
    template<typename ModelVersionNumberT = Aws::String>
    UpdateModelVersionStatusRequest& WithModelVersionNumber(ModelVersionNumberT&& value) { SetModelVersionNumber(std::forward<ModelVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version status.</p>
     */
    inline ModelVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateModelVersionStatusRequest& WithStatus(ModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    ModelVersionStatus m_status{ModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
