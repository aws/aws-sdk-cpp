/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/InvocationLogSource.h>
#include <aws/bedrock/model/RequestMetadataFilters.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Settings for using invocation logs to customize a model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/InvocationLogsConfig">AWS
   * API Reference</a></p>
   */
  class InvocationLogsConfig
  {
  public:
    AWS_BEDROCK_API InvocationLogsConfig() = default;
    AWS_BEDROCK_API InvocationLogsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API InvocationLogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to use the model's response for training, or just the prompt. The
     * default value is <code>False</code>.</p>
     */
    inline bool GetUsePromptResponse() const { return m_usePromptResponse; }
    inline bool UsePromptResponseHasBeenSet() const { return m_usePromptResponseHasBeenSet; }
    inline void SetUsePromptResponse(bool value) { m_usePromptResponseHasBeenSet = true; m_usePromptResponse = value; }
    inline InvocationLogsConfig& WithUsePromptResponse(bool value) { SetUsePromptResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the invocation logs.</p>
     */
    inline const InvocationLogSource& GetInvocationLogSource() const { return m_invocationLogSource; }
    inline bool InvocationLogSourceHasBeenSet() const { return m_invocationLogSourceHasBeenSet; }
    template<typename InvocationLogSourceT = InvocationLogSource>
    void SetInvocationLogSource(InvocationLogSourceT&& value) { m_invocationLogSourceHasBeenSet = true; m_invocationLogSource = std::forward<InvocationLogSourceT>(value); }
    template<typename InvocationLogSourceT = InvocationLogSource>
    InvocationLogsConfig& WithInvocationLogSource(InvocationLogSourceT&& value) { SetInvocationLogSource(std::forward<InvocationLogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules for filtering invocation logs based on request metadata.</p>
     */
    inline const RequestMetadataFilters& GetRequestMetadataFilters() const { return m_requestMetadataFilters; }
    inline bool RequestMetadataFiltersHasBeenSet() const { return m_requestMetadataFiltersHasBeenSet; }
    template<typename RequestMetadataFiltersT = RequestMetadataFilters>
    void SetRequestMetadataFilters(RequestMetadataFiltersT&& value) { m_requestMetadataFiltersHasBeenSet = true; m_requestMetadataFilters = std::forward<RequestMetadataFiltersT>(value); }
    template<typename RequestMetadataFiltersT = RequestMetadataFilters>
    InvocationLogsConfig& WithRequestMetadataFilters(RequestMetadataFiltersT&& value) { SetRequestMetadataFilters(std::forward<RequestMetadataFiltersT>(value)); return *this;}
    ///@}
  private:

    bool m_usePromptResponse{false};
    bool m_usePromptResponseHasBeenSet = false;

    InvocationLogSource m_invocationLogSource;
    bool m_invocationLogSourceHasBeenSet = false;

    RequestMetadataFilters m_requestMetadataFilters;
    bool m_requestMetadataFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
