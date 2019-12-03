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
  class AWS_FRAUDDETECTOR_API GetModelVersionResult
  {
  public:
    GetModelVersionResult();
    GetModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The model ID. </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(const char* value) { m_modelId.assign(value); }

    /**
     * <p>The model ID. </p>
     */
    inline GetModelVersionResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID. </p>
     */
    inline GetModelVersionResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID. </p>
     */
    inline GetModelVersionResult& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type. </p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type. </p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelType = value; }

    /**
     * <p>The model type. </p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelType = std::move(value); }

    /**
     * <p>The model type. </p>
     */
    inline GetModelVersionResult& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type. </p>
     */
    inline GetModelVersionResult& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model version. </p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }

    /**
     * <p>The model version. </p>
     */
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumber = value; }

    /**
     * <p>The model version. </p>
     */
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumber = std::move(value); }

    /**
     * <p>The model version. </p>
     */
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumber.assign(value); }

    /**
     * <p>The model version. </p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version. </p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version. </p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}


    /**
     * <p>The model version description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The model version description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The model version description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The model version description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The model version description.</p>
     */
    inline GetModelVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The model version description.</p>
     */
    inline GetModelVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The model version description.</p>
     */
    inline GetModelVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The model version status. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The model version status. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The model version status. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The model version status. </p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The model version status. </p>
     */
    inline GetModelVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The model version status. </p>
     */
    inline GetModelVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The model version status. </p>
     */
    inline GetModelVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_modelId;

    ModelTypeEnum m_modelType;

    Aws::String m_modelVersionNumber;

    Aws::String m_description;

    Aws::String m_status;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
