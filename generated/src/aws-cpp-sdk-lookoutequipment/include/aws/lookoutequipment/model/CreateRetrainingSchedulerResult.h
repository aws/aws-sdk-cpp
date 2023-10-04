/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
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
  class CreateRetrainingSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateRetrainingSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API CreateRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateRetrainingSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model that you added the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline void SetStatus(const RetrainingSchedulerStatus& value) { m_status = value; }

    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline void SetStatus(RetrainingSchedulerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline CreateRetrainingSchedulerResult& WithStatus(const RetrainingSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline CreateRetrainingSchedulerResult& WithStatus(RetrainingSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRetrainingSchedulerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRetrainingSchedulerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRetrainingSchedulerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    RetrainingSchedulerStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
