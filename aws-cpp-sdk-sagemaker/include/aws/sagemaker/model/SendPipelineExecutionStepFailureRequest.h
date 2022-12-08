/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class SendPipelineExecutionStepFailureRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepFailureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendPipelineExecutionStepFailure"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetCallbackToken() const{ return m_callbackToken; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline bool CallbackTokenHasBeenSet() const { return m_callbackTokenHasBeenSet; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(const Aws::String& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = value; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(Aws::String&& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = std::move(value); }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(const char* value) { m_callbackTokenHasBeenSet = true; m_callbackToken.assign(value); }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(const Aws::String& value) { SetCallbackToken(value); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(Aws::String&& value) { SetCallbackToken(std::move(value)); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(const char* value) { SetCallbackToken(value); return *this;}


    /**
     * <p>A message describing why the step failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A message describing why the step failed.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_callbackToken;
    bool m_callbackTokenHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
