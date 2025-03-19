/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/CodeError.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Contains the list of errors from a code evaluation response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EvaluateCodeErrorDetail">AWS
   * API Reference</a></p>
   */
  class EvaluateCodeErrorDetail
  {
  public:
    AWS_APPSYNC_API EvaluateCodeErrorDetail() = default;
    AWS_APPSYNC_API EvaluateCodeErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EvaluateCodeErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error payload.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EvaluateCodeErrorDetail& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline const Aws::Vector<CodeError>& GetCodeErrors() const { return m_codeErrors; }
    inline bool CodeErrorsHasBeenSet() const { return m_codeErrorsHasBeenSet; }
    template<typename CodeErrorsT = Aws::Vector<CodeError>>
    void SetCodeErrors(CodeErrorsT&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors = std::forward<CodeErrorsT>(value); }
    template<typename CodeErrorsT = Aws::Vector<CodeError>>
    EvaluateCodeErrorDetail& WithCodeErrors(CodeErrorsT&& value) { SetCodeErrors(std::forward<CodeErrorsT>(value)); return *this;}
    template<typename CodeErrorsT = CodeError>
    EvaluateCodeErrorDetail& AddCodeErrors(CodeErrorsT&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors.emplace_back(std::forward<CodeErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<CodeError> m_codeErrors;
    bool m_codeErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
