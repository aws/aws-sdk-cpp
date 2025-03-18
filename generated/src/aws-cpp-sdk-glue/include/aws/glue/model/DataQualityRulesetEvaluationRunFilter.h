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
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter() = default;
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetEvaluationRunFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter based on a data source (an Glue table) associated with the run.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DataQualityRulesetEvaluationRunFilter& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    void SetStartedBefore(StartedBeforeT&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::forward<StartedBeforeT>(value); }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    DataQualityRulesetEvaluationRunFilter& WithStartedBefore(StartedBeforeT&& value) { SetStartedBefore(std::forward<StartedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    void SetStartedAfter(StartedAfterT&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::forward<StartedAfterT>(value); }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    DataQualityRulesetEvaluationRunFilter& WithStartedAfter(StartedAfterT&& value) { SetStartedAfter(std::forward<StartedAfterT>(value)); return *this;}
    ///@}
  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore{};
    bool m_startedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter{};
    bool m_startedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
