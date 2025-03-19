/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/AsyncInvokeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-runtime/model/AsyncInvokeOutputDataConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A summary of an asynchronous invocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AsyncInvokeSummary">AWS
   * API Reference</a></p>
   */
  class AsyncInvokeSummary
  {
  public:
    AWS_BEDROCKRUNTIME_API AsyncInvokeSummary() = default;
    AWS_BEDROCKRUNTIME_API AsyncInvokeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API AsyncInvokeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The invocation's ARN.</p>
     */
    inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
    inline bool InvocationArnHasBeenSet() const { return m_invocationArnHasBeenSet; }
    template<typename InvocationArnT = Aws::String>
    void SetInvocationArn(InvocationArnT&& value) { m_invocationArnHasBeenSet = true; m_invocationArn = std::forward<InvocationArnT>(value); }
    template<typename InvocationArnT = Aws::String>
    AsyncInvokeSummary& WithInvocationArn(InvocationArnT&& value) { SetInvocationArn(std::forward<InvocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invoked model's ARN.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    AsyncInvokeSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's idempotency token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    AsyncInvokeSummary& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's status.</p>
     */
    inline AsyncInvokeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AsyncInvokeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AsyncInvokeSummary& WithStatus(AsyncInvokeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    AsyncInvokeSummary& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the invocation was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    AsyncInvokeSummary& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the invocation was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AsyncInvokeSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the invocation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AsyncInvokeSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's output data settings.</p>
     */
    inline const AsyncInvokeOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = AsyncInvokeOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = AsyncInvokeOutputDataConfig>
    AsyncInvokeSummary& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;
    bool m_invocationArnHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    AsyncInvokeStatus m_status{AsyncInvokeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    AsyncInvokeOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
