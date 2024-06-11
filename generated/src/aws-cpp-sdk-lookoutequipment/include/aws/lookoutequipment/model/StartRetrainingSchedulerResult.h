﻿/**
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
  class StartRetrainingSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API StartRetrainingSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API StartRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API StartRetrainingSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model whose retraining scheduler is being started. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline StartRetrainingSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline StartRetrainingSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline StartRetrainingSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model whose retraining scheduler is being started. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline StartRetrainingSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline StartRetrainingSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline StartRetrainingSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RetrainingSchedulerStatus& value) { m_status = value; }
    inline void SetStatus(RetrainingSchedulerStatus&& value) { m_status = std::move(value); }
    inline StartRetrainingSchedulerResult& WithStatus(const RetrainingSchedulerStatus& value) { SetStatus(value); return *this;}
    inline StartRetrainingSchedulerResult& WithStatus(RetrainingSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartRetrainingSchedulerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartRetrainingSchedulerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartRetrainingSchedulerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    RetrainingSchedulerStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
