/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/lookoutequipment/model/ModelPromoteMode.h>
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
  class DescribeRetrainingSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline DescribeRetrainingSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline DescribeRetrainingSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline DescribeRetrainingSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline DescribeRetrainingSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const{ return m_retrainingStartDate; }
    inline void SetRetrainingStartDate(const Aws::Utils::DateTime& value) { m_retrainingStartDate = value; }
    inline void SetRetrainingStartDate(Aws::Utils::DateTime&& value) { m_retrainingStartDate = std::move(value); }
    inline DescribeRetrainingSchedulerResult& WithRetrainingStartDate(const Aws::Utils::DateTime& value) { SetRetrainingStartDate(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithRetrainingStartDate(Aws::Utils::DateTime&& value) { SetRetrainingStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which the model retraining is set. This follows the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a>
     * guidelines.</p>
     */
    inline const Aws::String& GetRetrainingFrequency() const{ return m_retrainingFrequency; }
    inline void SetRetrainingFrequency(const Aws::String& value) { m_retrainingFrequency = value; }
    inline void SetRetrainingFrequency(Aws::String&& value) { m_retrainingFrequency = std::move(value); }
    inline void SetRetrainingFrequency(const char* value) { m_retrainingFrequency.assign(value); }
    inline DescribeRetrainingSchedulerResult& WithRetrainingFrequency(const Aws::String& value) { SetRetrainingFrequency(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithRetrainingFrequency(Aws::String&& value) { SetRetrainingFrequency(std::move(value)); return *this;}
    inline DescribeRetrainingSchedulerResult& WithRetrainingFrequency(const char* value) { SetRetrainingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of past days of data used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const{ return m_lookbackWindow; }
    inline void SetLookbackWindow(const Aws::String& value) { m_lookbackWindow = value; }
    inline void SetLookbackWindow(Aws::String&& value) { m_lookbackWindow = std::move(value); }
    inline void SetLookbackWindow(const char* value) { m_lookbackWindow.assign(value); }
    inline DescribeRetrainingSchedulerResult& WithLookbackWindow(const Aws::String& value) { SetLookbackWindow(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithLookbackWindow(Aws::String&& value) { SetLookbackWindow(std::move(value)); return *this;}
    inline DescribeRetrainingSchedulerResult& WithLookbackWindow(const char* value) { SetLookbackWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RetrainingSchedulerStatus& value) { m_status = value; }
    inline void SetStatus(RetrainingSchedulerStatus&& value) { m_status = std::move(value); }
    inline DescribeRetrainingSchedulerResult& WithStatus(const RetrainingSchedulerStatus& value) { SetStatus(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithStatus(RetrainingSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the service uses new models. In <code>MANAGED</code> mode, new
     * models are used for inference if they have better performance than the current
     * model. In <code>MANUAL</code> mode, the new models are not used until they are
     * <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">manually
     * activated</a>.</p>
     */
    inline const ModelPromoteMode& GetPromoteMode() const{ return m_promoteMode; }
    inline void SetPromoteMode(const ModelPromoteMode& value) { m_promoteMode = value; }
    inline void SetPromoteMode(ModelPromoteMode&& value) { m_promoteMode = std::move(value); }
    inline DescribeRetrainingSchedulerResult& WithPromoteMode(const ModelPromoteMode& value) { SetPromoteMode(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithPromoteMode(ModelPromoteMode&& value) { SetPromoteMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the retraining scheduler was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeRetrainingSchedulerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the retraining scheduler was updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline DescribeRetrainingSchedulerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRetrainingSchedulerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRetrainingSchedulerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRetrainingSchedulerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;

    Aws::String m_modelArn;

    Aws::Utils::DateTime m_retrainingStartDate;

    Aws::String m_retrainingFrequency;

    Aws::String m_lookbackWindow;

    RetrainingSchedulerStatus m_status;

    ModelPromoteMode m_promoteMode;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
