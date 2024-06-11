/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ImportModelVersionResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult();
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the machine learning model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline ImportModelVersionResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline ImportModelVersionResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline ImportModelVersionResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model being created. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline ImportModelVersionResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline ImportModelVersionResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline ImportModelVersionResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version being created. </p>
     */
    inline const Aws::String& GetModelVersionArn() const{ return m_modelVersionArn; }
    inline void SetModelVersionArn(const Aws::String& value) { m_modelVersionArn = value; }
    inline void SetModelVersionArn(Aws::String&& value) { m_modelVersionArn = std::move(value); }
    inline void SetModelVersionArn(const char* value) { m_modelVersionArn.assign(value); }
    inline ImportModelVersionResult& WithModelVersionArn(const Aws::String& value) { SetModelVersionArn(value); return *this;}
    inline ImportModelVersionResult& WithModelVersionArn(Aws::String&& value) { SetModelVersionArn(std::move(value)); return *this;}
    inline ImportModelVersionResult& WithModelVersionArn(const char* value) { SetModelVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model being created.</p>
     */
    inline long long GetModelVersion() const{ return m_modelVersion; }
    inline void SetModelVersion(long long value) { m_modelVersion = value; }
    inline ImportModelVersionResult& WithModelVersion(long long value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>ImportModelVersion</code> operation. </p>
     */
    inline const ModelVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ModelVersionStatus& value) { m_status = value; }
    inline void SetStatus(ModelVersionStatus&& value) { m_status = std::move(value); }
    inline ImportModelVersionResult& WithStatus(const ModelVersionStatus& value) { SetStatus(value); return *this;}
    inline ImportModelVersionResult& WithStatus(ModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportModelVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportModelVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportModelVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    Aws::String m_modelVersionArn;

    long long m_modelVersion;

    ModelVersionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
