/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an error in AWS CodePipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_CODEPIPELINE_API ErrorDetails();
    AWS_CODEPIPELINE_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline ErrorDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline ErrorDetails& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The system ID or number code of the error.</p>
     */
    inline ErrorDetails& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The text of the error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The text of the error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The text of the error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
