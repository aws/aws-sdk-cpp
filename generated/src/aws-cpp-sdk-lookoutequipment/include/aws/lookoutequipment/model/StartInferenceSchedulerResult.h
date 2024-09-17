/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
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
  class StartInferenceSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API StartInferenceSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API StartInferenceSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API StartInferenceSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model being used by
     * the inference scheduler. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline StartInferenceSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline StartInferenceSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline StartInferenceSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the machine learning model being used by the inference scheduler.
     * </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline StartInferenceSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline StartInferenceSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline StartInferenceSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerName = value; }
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerName = std::move(value); }
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerName.assign(value); }
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArn = value; }
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArn = std::move(value); }
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArn.assign(value); }
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_status = value; }
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_status = std::move(value); }
    inline StartInferenceSchedulerResult& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}
    inline StartInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartInferenceSchedulerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartInferenceSchedulerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartInferenceSchedulerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;

    Aws::String m_modelName;

    Aws::String m_inferenceSchedulerName;

    Aws::String m_inferenceSchedulerArn;

    InferenceSchedulerStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
