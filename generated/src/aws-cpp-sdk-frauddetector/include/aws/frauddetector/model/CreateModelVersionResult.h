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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{
  class CreateModelVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API CreateModelVersionResult() = default;
    AWS_FRAUDDETECTOR_API CreateModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API CreateModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    CreateModelVersionResult& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline CreateModelVersionResult& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number of the model version created.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const { return m_modelVersionNumber; }
    template<typename ModelVersionNumberT = Aws::String>
    void SetModelVersionNumber(ModelVersionNumberT&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::forward<ModelVersionNumberT>(value); }
    template<typename ModelVersionNumberT = Aws::String>
    CreateModelVersionResult& WithModelVersionNumber(ModelVersionNumberT&& value) { SetModelVersionNumber(std::forward<ModelVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version status. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateModelVersionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateModelVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
