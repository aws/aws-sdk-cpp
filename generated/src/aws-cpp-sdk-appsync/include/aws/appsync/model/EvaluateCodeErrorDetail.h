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
    AWS_APPSYNC_API EvaluateCodeErrorDetail();
    AWS_APPSYNC_API EvaluateCodeErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EvaluateCodeErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error payload.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error payload.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error payload.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error payload.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error payload.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error payload.</p>
     */
    inline EvaluateCodeErrorDetail& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error payload.</p>
     */
    inline EvaluateCodeErrorDetail& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error payload.</p>
     */
    inline EvaluateCodeErrorDetail& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline const Aws::Vector<CodeError>& GetCodeErrors() const{ return m_codeErrors; }

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline bool CodeErrorsHasBeenSet() const { return m_codeErrorsHasBeenSet; }

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline void SetCodeErrors(const Aws::Vector<CodeError>& value) { m_codeErrorsHasBeenSet = true; m_codeErrors = value; }

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline void SetCodeErrors(Aws::Vector<CodeError>&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors = std::move(value); }

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline EvaluateCodeErrorDetail& WithCodeErrors(const Aws::Vector<CodeError>& value) { SetCodeErrors(value); return *this;}

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline EvaluateCodeErrorDetail& WithCodeErrors(Aws::Vector<CodeError>&& value) { SetCodeErrors(std::move(value)); return *this;}

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline EvaluateCodeErrorDetail& AddCodeErrors(const CodeError& value) { m_codeErrorsHasBeenSet = true; m_codeErrors.push_back(value); return *this; }

    /**
     * <p>Contains the list of <code>CodeError</code> objects.</p>
     */
    inline EvaluateCodeErrorDetail& AddCodeErrors(CodeError&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<CodeError> m_codeErrors;
    bool m_codeErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
