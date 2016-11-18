﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API GetBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    GetBatchPredictionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation.</p>
     */
    inline GetBatchPredictionRequest& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}

  private:
    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
