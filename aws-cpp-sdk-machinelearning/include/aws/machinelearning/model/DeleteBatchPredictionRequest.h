/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API DeleteBatchPredictionRequest : public MachineLearningRequest
  {
  public:
    DeleteBatchPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBatchPrediction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline DeleteBatchPredictionRequest& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline DeleteBatchPredictionRequest& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the
     * <code>BatchPrediction</code>.</p>
     */
    inline DeleteBatchPredictionRequest& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}

  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
