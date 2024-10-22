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


    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CancelBatchJobExecutionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CancelBatchJobExecutionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CancelBatchJobExecutionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Secrets Manager containing user's credentials for
     * authentication and authorization for Cancel Batch Job Execution operation.</p>
     */
    inline const Aws::String& GetAuthSecretsManagerArn() const{ return m_authSecretsManagerArn; }
    inline bool AuthSecretsManagerArnHasBeenSet() const { return m_authSecretsManagerArnHasBeenSet; }
    inline void SetAuthSecretsManagerArn(const Aws::String& value) { m_authSecretsManagerArnHasBeenSet = true; m_authSecretsManagerArn = value; }
    inline void SetAuthSecretsManagerArn(Aws::String&& value) { m_authSecretsManagerArnHasBeenSet = true; m_authSecretsManagerArn = std::move(value); }
    inline void SetAuthSecretsManagerArn(const char* value) { m_authSecretsManagerArnHasBeenSet = true; m_authSecretsManagerArn.assign(value); }
    inline CancelBatchJobExecutionRequest& WithAuthSecretsManagerArn(const Aws::String& value) { SetAuthSecretsManagerArn(value); return *this;}
    inline CancelBatchJobExecutionRequest& WithAuthSecretsManagerArn(Aws::String&& value) { SetAuthSecretsManagerArn(std::move(value)); return *this;}
    inline CancelBatchJobExecutionRequest& WithAuthSecretsManagerArn(const char* value) { SetAuthSecretsManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the batch job execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline CancelBatchJobExecutionRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline CancelBatchJobExecutionRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline CancelBatchJobExecutionRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_authSecretsManagerArn;
    bool m_authSecretsManagerArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
