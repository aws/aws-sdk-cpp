/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>

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
namespace Athena
{
namespace Model
{

  /**
   * <p>Provides information about an Athena query error. The
   * <code>AthenaError</code> feature provides standardized error information to help
   * you understand failed queries and take steps after a query failure occurs.
   * <code>AthenaError</code> includes an <code>ErrorCategory</code> field that
   * specifies whether the cause of the failed query is due to system error, user
   * error, or other error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/AthenaError">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API AthenaError
  {
  public:
    AthenaError();
    AthenaError(Aws::Utils::Json::JsonView jsonValue);
    AthenaError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Other</p>
     */
    inline int GetErrorCategory() const{ return m_errorCategory; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Other</p>
     */
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Other</p>
     */
    inline void SetErrorCategory(int value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Other</p>
     */
    inline AthenaError& WithErrorCategory(int value) { SetErrorCategory(value); return *this;}


    /**
     * <p>An integer value that provides specific information about an Athena query
     * error. For the meaning of specific values, see the <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/error-reference.html#error-reference-error-type-reference">Error
     * Type Reference</a> in the <i>Amazon Athena User Guide</i>.</p>
     */
    inline int GetErrorType() const{ return m_errorType; }

    /**
     * <p>An integer value that provides specific information about an Athena query
     * error. For the meaning of specific values, see the <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/error-reference.html#error-reference-error-type-reference">Error
     * Type Reference</a> in the <i>Amazon Athena User Guide</i>.</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>An integer value that provides specific information about an Athena query
     * error. For the meaning of specific values, see the <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/error-reference.html#error-reference-error-type-reference">Error
     * Type Reference</a> in the <i>Amazon Athena User Guide</i>.</p>
     */
    inline void SetErrorType(int value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>An integer value that provides specific information about an Athena query
     * error. For the meaning of specific values, see the <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/error-reference.html#error-reference-error-type-reference">Error
     * Type Reference</a> in the <i>Amazon Athena User Guide</i>.</p>
     */
    inline AthenaError& WithErrorType(int value) { SetErrorType(value); return *this;}

  private:

    int m_errorCategory;
    bool m_errorCategoryHasBeenSet;

    int m_errorType;
    bool m_errorTypeHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
