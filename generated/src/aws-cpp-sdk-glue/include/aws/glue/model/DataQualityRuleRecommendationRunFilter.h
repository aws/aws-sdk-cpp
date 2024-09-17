/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataSource.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A filter for listing data quality recommendation runs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleRecommendationRunFilter">AWS
   * API Reference</a></p>
   */
  class DataQualityRuleRecommendationRunFilter
  {
  public:
    AWS_GLUE_API DataQualityRuleRecommendationRunFilter();
    AWS_GLUE_API DataQualityRuleRecommendationRunFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRuleRecommendationRunFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter based on a specified data source (Glue table).</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline DataQualityRuleRecommendationRunFilter& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DataQualityRuleRecommendationRunFilter& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on time for results started before provided time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const{ return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    inline void SetStartedBefore(const Aws::Utils::DateTime& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = value; }
    inline void SetStartedBefore(Aws::Utils::DateTime&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::move(value); }
    inline DataQualityRuleRecommendationRunFilter& WithStartedBefore(const Aws::Utils::DateTime& value) { SetStartedBefore(value); return *this;}
    inline DataQualityRuleRecommendationRunFilter& WithStartedBefore(Aws::Utils::DateTime&& value) { SetStartedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on time for results started after provided time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const{ return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    inline void SetStartedAfter(const Aws::Utils::DateTime& value) { m_startedAfterHasBeenSet = true; m_startedAfter = value; }
    inline void SetStartedAfter(Aws::Utils::DateTime&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::move(value); }
    inline DataQualityRuleRecommendationRunFilter& WithStartedAfter(const Aws::Utils::DateTime& value) { SetStartedAfter(value); return *this;}
    inline DataQualityRuleRecommendationRunFilter& WithStartedAfter(Aws::Utils::DateTime&& value) { SetStartedAfter(std::move(value)); return *this;}
    ///@}
  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore;
    bool m_startedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter;
    bool m_startedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
