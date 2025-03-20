/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/EvaluationPrecomputedRetrieveSourceConfig.h>
#include <aws/bedrock/model/EvaluationPrecomputedRetrieveAndGenerateSourceConfig.h>
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
   * <p>A summary of a RAG source used for a Knowledge Base evaluation job where you
   * provide your own inference response data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationPrecomputedRagSourceConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationPrecomputedRagSourceConfig
  {
  public:
    AWS_BEDROCK_API EvaluationPrecomputedRagSourceConfig() = default;
    AWS_BEDROCK_API EvaluationPrecomputedRagSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationPrecomputedRagSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A summary of a RAG source used for a retrieve-only Knowledge Base evaluation
     * job where you provide your own inference response data.</p>
     */
    inline const EvaluationPrecomputedRetrieveSourceConfig& GetRetrieveSourceConfig() const { return m_retrieveSourceConfig; }
    inline bool RetrieveSourceConfigHasBeenSet() const { return m_retrieveSourceConfigHasBeenSet; }
    template<typename RetrieveSourceConfigT = EvaluationPrecomputedRetrieveSourceConfig>
    void SetRetrieveSourceConfig(RetrieveSourceConfigT&& value) { m_retrieveSourceConfigHasBeenSet = true; m_retrieveSourceConfig = std::forward<RetrieveSourceConfigT>(value); }
    template<typename RetrieveSourceConfigT = EvaluationPrecomputedRetrieveSourceConfig>
    EvaluationPrecomputedRagSourceConfig& WithRetrieveSourceConfig(RetrieveSourceConfigT&& value) { SetRetrieveSourceConfig(std::forward<RetrieveSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of a RAG source used for a retrieve-and-generate Knowledge Base
     * evaluation job where you provide your own inference response data.</p>
     */
    inline const EvaluationPrecomputedRetrieveAndGenerateSourceConfig& GetRetrieveAndGenerateSourceConfig() const { return m_retrieveAndGenerateSourceConfig; }
    inline bool RetrieveAndGenerateSourceConfigHasBeenSet() const { return m_retrieveAndGenerateSourceConfigHasBeenSet; }
    template<typename RetrieveAndGenerateSourceConfigT = EvaluationPrecomputedRetrieveAndGenerateSourceConfig>
    void SetRetrieveAndGenerateSourceConfig(RetrieveAndGenerateSourceConfigT&& value) { m_retrieveAndGenerateSourceConfigHasBeenSet = true; m_retrieveAndGenerateSourceConfig = std::forward<RetrieveAndGenerateSourceConfigT>(value); }
    template<typename RetrieveAndGenerateSourceConfigT = EvaluationPrecomputedRetrieveAndGenerateSourceConfig>
    EvaluationPrecomputedRagSourceConfig& WithRetrieveAndGenerateSourceConfig(RetrieveAndGenerateSourceConfigT&& value) { SetRetrieveAndGenerateSourceConfig(std::forward<RetrieveAndGenerateSourceConfigT>(value)); return *this;}
    ///@}
  private:

    EvaluationPrecomputedRetrieveSourceConfig m_retrieveSourceConfig;
    bool m_retrieveSourceConfigHasBeenSet = false;

    EvaluationPrecomputedRetrieveAndGenerateSourceConfig m_retrieveAndGenerateSourceConfig;
    bool m_retrieveAndGenerateSourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
