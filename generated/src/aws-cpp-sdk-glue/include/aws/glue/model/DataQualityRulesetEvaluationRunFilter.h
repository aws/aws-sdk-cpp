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
   * <p>The filter criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRulesetEvaluationRunFilter">AWS
   * API Reference</a></p>
   */
  class DataQualityRulesetEvaluationRunFilter
  {
  public:
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter();
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const{ return m_startedBefore; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline void SetStartedBefore(const Aws::Utils::DateTime& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = value; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline void SetStartedBefore(Aws::Utils::DateTime&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::move(value); }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithStartedBefore(const Aws::Utils::DateTime& value) { SetStartedBefore(value); return *this;}

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithStartedBefore(Aws::Utils::DateTime&& value) { SetStartedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const{ return m_startedAfter; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline void SetStartedAfter(const Aws::Utils::DateTime& value) { m_startedAfterHasBeenSet = true; m_startedAfter = value; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline void SetStartedAfter(Aws::Utils::DateTime&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::move(value); }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithStartedAfter(const Aws::Utils::DateTime& value) { SetStartedAfter(value); return *this;}

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline DataQualityRulesetEvaluationRunFilter& WithStartedAfter(Aws::Utils::DateTime&& value) { SetStartedAfter(std::move(value)); return *this;}

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
