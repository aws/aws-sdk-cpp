/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSnippetErrorCode.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains information about any errors encountered while trying to retrieve a
   * code snippet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSnippetError">AWS
   * API Reference</a></p>
   */
  class CodeSnippetError
  {
  public:
    AWS_INSPECTOR2_API CodeSnippetError() = default;
    AWS_INSPECTOR2_API CodeSnippetError(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSnippetError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    CodeSnippetError& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline CodeSnippetErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(CodeSnippetErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline CodeSnippetError& WithErrorCode(CodeSnippetErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    CodeSnippetError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    CodeSnippetErrorCode m_errorCode{CodeSnippetErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
