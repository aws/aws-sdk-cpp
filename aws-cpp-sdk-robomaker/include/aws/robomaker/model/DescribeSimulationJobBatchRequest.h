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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API DescribeSimulationJobBatchRequest : public RoboMakerRequest
  {
  public:
    DescribeSimulationJobBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSimulationJobBatch"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The id of the batch to describe.</p>
     */
    inline const Aws::String& GetBatch() const{ return m_batch; }

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline bool BatchHasBeenSet() const { return m_batchHasBeenSet; }

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline void SetBatch(const Aws::String& value) { m_batchHasBeenSet = true; m_batch = value; }

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline void SetBatch(Aws::String&& value) { m_batchHasBeenSet = true; m_batch = std::move(value); }

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline void SetBatch(const char* value) { m_batchHasBeenSet = true; m_batch.assign(value); }

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline DescribeSimulationJobBatchRequest& WithBatch(const Aws::String& value) { SetBatch(value); return *this;}

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline DescribeSimulationJobBatchRequest& WithBatch(Aws::String&& value) { SetBatch(std::move(value)); return *this;}

    /**
     * <p>The id of the batch to describe.</p>
     */
    inline DescribeSimulationJobBatchRequest& WithBatch(const char* value) { SetBatch(value); return *this;}

  private:

    Aws::String m_batch;
    bool m_batchHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
