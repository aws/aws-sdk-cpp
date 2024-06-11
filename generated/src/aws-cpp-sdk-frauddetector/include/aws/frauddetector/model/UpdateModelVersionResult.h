﻿/**
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
  class UpdateModelVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateModelVersionResult();
    AWS_FRAUDDETECTOR_API UpdateModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API UpdateModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelId.assign(value); }
    inline UpdateModelVersionResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline UpdateModelVersionResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline UpdateModelVersionResult& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }
    inline void SetModelType(const ModelTypeEnum& value) { m_modelType = value; }
    inline void SetModelType(ModelTypeEnum&& value) { m_modelType = std::move(value); }
    inline UpdateModelVersionResult& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}
    inline UpdateModelVersionResult& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number of the model version updated.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumber = value; }
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumber = std::move(value); }
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumber.assign(value); }
    inline UpdateModelVersionResult& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}
    inline UpdateModelVersionResult& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}
    inline UpdateModelVersionResult& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the updated model version.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline UpdateModelVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline UpdateModelVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline UpdateModelVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateModelVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateModelVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateModelVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelId;

    ModelTypeEnum m_modelType;

    Aws::String m_modelVersionNumber;

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
