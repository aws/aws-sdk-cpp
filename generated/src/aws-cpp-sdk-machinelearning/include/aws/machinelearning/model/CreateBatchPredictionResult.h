/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>CreateBatchPrediction</code> operation, and
   * is an acknowledgement that Amazon ML received the request.</p> <p>The
   * <code>CreateBatchPrediction</code> operation is asynchronous. You can poll for
   * status updates by using the <code>&gt;GetBatchPrediction</code> operation and
   * checking the <code>Status</code> parameter of the result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateBatchPredictionOutput">AWS
   * API Reference</a></p>
   */
  class CreateBatchPredictionResult
  {
  public:
    AWS_MACHINELEARNING_API CreateBatchPredictionResult();
    AWS_MACHINELEARNING_API CreateBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline CreateBatchPredictionResult& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline CreateBatchPredictionResult& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value is identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline CreateBatchPredictionResult& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
