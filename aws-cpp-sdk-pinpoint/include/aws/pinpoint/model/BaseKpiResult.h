/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/ResultRow.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard metric
   * that applies to an application, campaign, or journey.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaseKpiResult">AWS
   * API Reference</a></p>
   */
  class BaseKpiResult
  {
  public:
    AWS_PINPOINT_API BaseKpiResult();
    AWS_PINPOINT_API BaseKpiResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API BaseKpiResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline const Aws::Vector<ResultRow>& GetRows() const{ return m_rows; }

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline void SetRows(const Aws::Vector<ResultRow>& value) { m_rowsHasBeenSet = true; m_rows = value; }

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline void SetRows(Aws::Vector<ResultRow>&& value) { m_rowsHasBeenSet = true; m_rows = std::move(value); }

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline BaseKpiResult& WithRows(const Aws::Vector<ResultRow>& value) { SetRows(value); return *this;}

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline BaseKpiResult& WithRows(Aws::Vector<ResultRow>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline BaseKpiResult& AddRows(const ResultRow& value) { m_rowsHasBeenSet = true; m_rows.push_back(value); return *this; }

    /**
     * <p>An array of objects that provides the results of a query that retrieved the
     * data for a standard metric that applies to an application, campaign, or
     * journey.</p>
     */
    inline BaseKpiResult& AddRows(ResultRow&& value) { m_rowsHasBeenSet = true; m_rows.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResultRow> m_rows;
    bool m_rowsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
