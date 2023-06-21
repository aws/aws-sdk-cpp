/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CodeSnippetErrorCode.h>
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
    AWS_INSPECTOR2_API CodeSnippetError();
    AWS_INSPECTOR2_API CodeSnippetError(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSnippetError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline const CodeSnippetErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline void SetErrorCode(const CodeSnippetErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline void SetErrorCode(CodeSnippetErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline CodeSnippetError& WithErrorCode(const CodeSnippetErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the error that prevented a code snippet from being
     * retrieved.</p>
     */
    inline CodeSnippetError& WithErrorCode(CodeSnippetErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline CodeSnippetError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline CodeSnippetError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message received when Amazon Inspector failed to retrieve a code
     * snippet.</p>
     */
    inline CodeSnippetError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline CodeSnippetError& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline CodeSnippetError& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the finding that a code snippet couldn't be retrieved for.</p>
     */
    inline CodeSnippetError& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}

  private:

    CodeSnippetErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
