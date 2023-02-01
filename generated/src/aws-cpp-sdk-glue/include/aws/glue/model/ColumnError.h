/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ErrorDetail.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Encapsulates a column name that failed and the reason for
   * failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnError">AWS
   * API Reference</a></p>
   */
  class ColumnError
  {
  public:
    AWS_GLUE_API ColumnError();
    AWS_GLUE_API ColumnError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column that failed.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of the column that failed.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of the column that failed.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of the column that failed.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of the column that failed.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of the column that failed.</p>
     */
    inline ColumnError& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of the column that failed.</p>
     */
    inline ColumnError& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the column that failed.</p>
     */
    inline ColumnError& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline ColumnError& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline ColumnError& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
