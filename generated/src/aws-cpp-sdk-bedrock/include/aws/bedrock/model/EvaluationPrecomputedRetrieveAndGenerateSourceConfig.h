/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of a RAG source used for a retrieve-and-generate Knowledge Base
   * evaluation job where you provide your own inference response data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationPrecomputedRetrieveAndGenerateSourceConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationPrecomputedRetrieveAndGenerateSourceConfig
  {
  public:
    AWS_BEDROCK_API EvaluationPrecomputedRetrieveAndGenerateSourceConfig() = default;
    AWS_BEDROCK_API EvaluationPrecomputedRetrieveAndGenerateSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationPrecomputedRetrieveAndGenerateSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A label that identifies the RAG source used for a retrieve-and-generate
     * Knowledge Base evaluation job where you provide your own inference response
     * data.</p>
     */
    inline const Aws::String& GetRagSourceIdentifier() const { return m_ragSourceIdentifier; }
    inline bool RagSourceIdentifierHasBeenSet() const { return m_ragSourceIdentifierHasBeenSet; }
    template<typename RagSourceIdentifierT = Aws::String>
    void SetRagSourceIdentifier(RagSourceIdentifierT&& value) { m_ragSourceIdentifierHasBeenSet = true; m_ragSourceIdentifier = std::forward<RagSourceIdentifierT>(value); }
    template<typename RagSourceIdentifierT = Aws::String>
    EvaluationPrecomputedRetrieveAndGenerateSourceConfig& WithRagSourceIdentifier(RagSourceIdentifierT&& value) { SetRagSourceIdentifier(std::forward<RagSourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ragSourceIdentifier;
    bool m_ragSourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
