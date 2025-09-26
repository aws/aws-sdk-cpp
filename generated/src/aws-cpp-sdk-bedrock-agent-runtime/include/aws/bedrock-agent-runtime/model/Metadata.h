/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Usage.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Provides information about the execution process for different types of
   * invocations, such as model invocation, knowledge base invocation, agent
   * collaborator invocation, guardrail invocation, and code interpreter
   * Invocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Metadata() = default;
    AWS_BEDROCKAGENTRUNTIME_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In the final response, <code>startTime</code> is the start time of the agent
     * invocation operation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Metadata& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the final response, <code>endTime</code> is the end time of the agent
     * invocation operation.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Metadata& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total execution time for the specific invocation being processed (model,
     * knowledge base, guardrail, agent collaborator, or code interpreter). It
     * represents how long the individual invocation took.</p>
     */
    inline long long GetTotalTimeMs() const { return m_totalTimeMs; }
    inline bool TotalTimeMsHasBeenSet() const { return m_totalTimeMsHasBeenSet; }
    inline void SetTotalTimeMs(long long value) { m_totalTimeMsHasBeenSet = true; m_totalTimeMs = value; }
    inline Metadata& WithTotalTimeMs(long long value) { SetTotalTimeMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total time it took for the agent to complete execution. This field is
     * only set for the final response.</p>
     */
    inline long long GetOperationTotalTimeMs() const { return m_operationTotalTimeMs; }
    inline bool OperationTotalTimeMsHasBeenSet() const { return m_operationTotalTimeMsHasBeenSet; }
    inline void SetOperationTotalTimeMs(long long value) { m_operationTotalTimeMsHasBeenSet = true; m_operationTotalTimeMs = value; }
    inline Metadata& WithOperationTotalTimeMs(long long value) { SetOperationTotalTimeMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier associated with the downstream invocation. This ID can be
     * used for tracing, debugging, and identifying specific invocations in customer
     * logs or systems.</p>
     */
    inline const Aws::String& GetClientRequestId() const { return m_clientRequestId; }
    inline bool ClientRequestIdHasBeenSet() const { return m_clientRequestIdHasBeenSet; }
    template<typename ClientRequestIdT = Aws::String>
    void SetClientRequestId(ClientRequestIdT&& value) { m_clientRequestIdHasBeenSet = true; m_clientRequestId = std::forward<ClientRequestIdT>(value); }
    template<typename ClientRequestIdT = Aws::String>
    Metadata& WithClientRequestId(ClientRequestIdT&& value) { SetClientRequestId(std::forward<ClientRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific to model invocation and contains details about the usage of a
     * foundation model.</p>
     */
    inline const Usage& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Usage>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Usage>
    Metadata& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    long long m_totalTimeMs{0};
    bool m_totalTimeMsHasBeenSet = false;

    long long m_operationTotalTimeMs{0};
    bool m_operationTotalTimeMsHasBeenSet = false;

    Aws::String m_clientRequestId;
    bool m_clientRequestIdHasBeenSet = false;

    Usage m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
