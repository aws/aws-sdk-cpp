/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteRealtimeEndpointRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API DeleteRealtimeEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRealtimeEndpoint"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline DeleteRealtimeEndpointRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline DeleteRealtimeEndpointRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> during creation.</p>
     */
    inline DeleteRealtimeEndpointRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
