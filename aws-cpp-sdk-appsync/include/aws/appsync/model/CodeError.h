/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/CodeErrorLocation.h>
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
   * <p>Describes an AppSync error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CodeError">AWS
   * API Reference</a></p>
   */
  class CodeError
  {
  public:
    AWS_APPSYNC_API CodeError();
    AWS_APPSYNC_API CodeError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CodeError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline CodeError& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline CodeError& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}

    /**
     * <p>The type of code error. </p> <p>Examples include, but aren't limited to:
     * <code>LINT_ERROR</code>, <code>PARSER_ERROR</code>.</p>
     */
    inline CodeError& WithErrorType(const char* value) { SetErrorType(value); return *this;}


    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline CodeError& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline CodeError& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A user presentable error.</p> <p>Examples include, but aren't limited to:
     * <code>Parsing error: Unterminated string literal</code>.</p>
     */
    inline CodeError& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline const CodeErrorLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline void SetLocation(const CodeErrorLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline void SetLocation(CodeErrorLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline CodeError& WithLocation(const CodeErrorLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The line, column, and span location of the error in the code.</p>
     */
    inline CodeError& WithLocation(CodeErrorLocation&& value) { SetLocation(std::move(value)); return *this;}

  private:

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    CodeErrorLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
