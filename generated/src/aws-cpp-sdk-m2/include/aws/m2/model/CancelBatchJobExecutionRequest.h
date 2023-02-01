/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class CancelBatchJobExecutionRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CancelBatchJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelBatchJobExecution"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CancelBatchJobExecutionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CancelBatchJobExecutionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline CancelBatchJobExecutionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline CancelBatchJobExecutionRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline CancelBatchJobExecutionRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline CancelBatchJobExecutionRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
