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
    AWS_BEDROCK_API BatchDeleteEvaluationJobError();
    AWS_BEDROCK_API BatchDeleteEvaluationJobError(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API BatchDeleteEvaluationJobError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the evaluation job being deleted.</p>
     */
    inline const Aws::String& GetJobIdentifier() const{ return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    inline void SetJobIdentifier(const Aws::String& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = value; }
    inline void SetJobIdentifier(Aws::String&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::move(value); }
    inline void SetJobIdentifier(const char* value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier.assign(value); }
    inline BatchDeleteEvaluationJobError& WithJobIdentifier(const Aws::String& value) { SetJobIdentifier(value); return *this;}
    inline BatchDeleteEvaluationJobError& WithJobIdentifier(Aws::String&& value) { SetJobIdentifier(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobError& WithJobIdentifier(const char* value) { SetJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A HTTP status code of the evaluation job being deleted.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BatchDeleteEvaluationJobError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BatchDeleteEvaluationJobError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message about the evaluation job deletion.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchDeleteEvaluationJobError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchDeleteEvaluationJobError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobError& WithMessage(const char* value) { SetMessage(value); return *this;}
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
