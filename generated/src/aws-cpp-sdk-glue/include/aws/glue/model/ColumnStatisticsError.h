/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatistics.h>
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
   * <p>Encapsulates a <code>ColumnStatistics</code> object that failed and the
   * reason for failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatisticsError">AWS
   * API Reference</a></p>
   */
  class ColumnStatisticsError
  {
  public:
    AWS_GLUE_API ColumnStatisticsError();
    AWS_GLUE_API ColumnStatisticsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ColumnStatistics</code> of the column.</p>
     */
    inline const ColumnStatistics& GetColumnStatistics() const{ return m_columnStatistics; }
    inline bool ColumnStatisticsHasBeenSet() const { return m_columnStatisticsHasBeenSet; }
    inline void SetColumnStatistics(const ColumnStatistics& value) { m_columnStatisticsHasBeenSet = true; m_columnStatistics = value; }
    inline void SetColumnStatistics(ColumnStatistics&& value) { m_columnStatisticsHasBeenSet = true; m_columnStatistics = std::move(value); }
    inline ColumnStatisticsError& WithColumnStatistics(const ColumnStatistics& value) { SetColumnStatistics(value); return *this;}
    inline ColumnStatisticsError& WithColumnStatistics(ColumnStatistics&& value) { SetColumnStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message with the reason for the failure of an operation.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ColumnStatisticsError& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline ColumnStatisticsError& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    ColumnStatistics m_columnStatistics;
    bool m_columnStatisticsHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
