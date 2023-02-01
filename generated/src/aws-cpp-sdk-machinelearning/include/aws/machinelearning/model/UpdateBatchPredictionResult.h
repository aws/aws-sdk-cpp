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
   * <p>Represents the output of an <code>UpdateBatchPrediction</code> operation.</p>
   * <p>You can see the updated content by using the <code>GetBatchPrediction</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateBatchPredictionOutput">AWS
   * API Reference</a></p>
   */
  class UpdateBatchPredictionResult
  {
  public:
    AWS_MACHINELEARNING_API UpdateBatchPredictionResult();
    AWS_MACHINELEARNING_API UpdateBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API UpdateBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionId = value; }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionId.assign(value); }

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline UpdateBatchPredictionResult& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline UpdateBatchPredictionResult& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> during creation. This
     * value should be identical to the value of the <code>BatchPredictionId</code> in
     * the request.</p>
     */
    inline UpdateBatchPredictionResult& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
