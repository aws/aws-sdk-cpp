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


    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model being used by the inference
     * scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model being used by the inference scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being started. </p>
     */
    inline StartInferenceSchedulerResult& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline StartInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelArn;

    Aws::String m_modelName;

    Aws::String m_inferenceSchedulerName;

    Aws::String m_inferenceSchedulerArn;

    InferenceSchedulerStatus m_status;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
