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
   * <p>A JSON array that provides the status of the evaluation jobs being
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteEvaluationJobError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteEvaluationJobError
  {
  public:
    AWS_BEDROCK_API BatchDeleteEvaluationJobError() = default;
    AWS_BEDROCK_API BatchDeleteEvaluationJobError(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API BatchDeleteEvaluationJobError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the evaluation job being deleted.</p>
     */
    inline const Aws::String& GetJobIdentifier() const { return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    template<typename JobIdentifierT = Aws::String>
    void SetJobIdentifier(JobIdentifierT&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::forward<JobIdentifierT>(value); }
    template<typename JobIdentifierT = Aws::String>
    BatchDeleteEvaluationJobError& WithJobIdentifier(JobIdentifierT&& value) { SetJobIdentifier(std::forward<JobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A HTTP status code of the evaluation job being deleted.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    BatchDeleteEvaluationJobError& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message about the evaluation job deletion.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchDeleteEvaluationJobError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
