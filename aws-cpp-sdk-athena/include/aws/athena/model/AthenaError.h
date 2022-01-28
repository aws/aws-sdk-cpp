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
   * error, or unknown error.</p><p><h3>See Also:</h3>   <a
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
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Unknown</p>
     */
    inline int GetErrorCategory() const{ return m_errorCategory; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Unknown</p>
     */
    inline bool ErrorCategoryHasBeenSet() const { return m_errorCategoryHasBeenSet; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Unknown</p>
     */
    inline void SetErrorCategory(int value) { m_errorCategoryHasBeenSet = true; m_errorCategory = value; }

    /**
     * <p>An integer value that specifies the category of a query failure error. The
     * following list shows the category for each integer value.</p> <p> <b>1</b> -
     * System</p> <p> <b>2</b> - User</p> <p> <b>3</b> - Unknown</p>
     */
    inline AthenaError& WithErrorCategory(int value) { SetErrorCategory(value); return *this;}

  private:

    int m_errorCategory;
    bool m_errorCategoryHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
