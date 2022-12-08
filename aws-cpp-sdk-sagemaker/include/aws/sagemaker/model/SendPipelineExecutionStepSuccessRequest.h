/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputParameter.h>
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
  class SendPipelineExecutionStepSuccessRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendPipelineExecutionStepSuccess"; }

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
    inline SendPipelineExecutionStepSuccessRequest& WithCallbackToken(const Aws::String& value) { SetCallbackToken(value); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithCallbackToken(Aws::String&& value) { SetCallbackToken(std::move(value)); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithCallbackToken(const char* value) { SetCallbackToken(value); return *this;}


    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline const Aws::Vector<OutputParameter>& GetOutputParameters() const{ return m_outputParameters; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline bool OutputParametersHasBeenSet() const { return m_outputParametersHasBeenSet; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline void SetOutputParameters(const Aws::Vector<OutputParameter>& value) { m_outputParametersHasBeenSet = true; m_outputParameters = value; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline void SetOutputParameters(Aws::Vector<OutputParameter>&& value) { m_outputParametersHasBeenSet = true; m_outputParameters = std::move(value); }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithOutputParameters(const Aws::Vector<OutputParameter>& value) { SetOutputParameters(value); return *this;}

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithOutputParameters(Aws::Vector<OutputParameter>&& value) { SetOutputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& AddOutputParameters(const OutputParameter& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(value); return *this; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& AddOutputParameters(OutputParameter&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(std::move(value)); return *this; }


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
    inline SendPipelineExecutionStepSuccessRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline SendPipelineExecutionStepSuccessRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_callbackToken;
    bool m_callbackTokenHasBeenSet = false;

    Aws::Vector<OutputParameter> m_outputParameters;
    bool m_outputParametersHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
