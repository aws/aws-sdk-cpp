/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The time period for an anomaly. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnomalyDateInterval">AWS
   * API Reference</a></p>
   */
  class AnomalyDateInterval
  {
  public:
    AWS_COSTEXPLORER_API AnomalyDateInterval();
    AWS_COSTEXPLORER_API AnomalyDateInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalyDateInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The first date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The last date an anomaly was observed. </p>
     */
    inline AnomalyDateInterval& WithEndDate(const char* value) { SetEndDate(value); return *this;}

  private:

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
