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
  class CreateInferenceSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerName = value; }

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerResult& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline CreateInferenceSchedulerResult& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline CreateInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_inferenceSchedulerArn;

    Aws::String m_inferenceSchedulerName;

    InferenceSchedulerStatus m_status;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
