/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Metrics for a specified crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlerMetrics">AWS
   * API Reference</a></p>
   */
  class CrawlerMetrics
  {
  public:
    AWS_GLUE_API CrawlerMetrics() = default;
    AWS_GLUE_API CrawlerMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the crawler.</p>
     */
    inline const Aws::String& GetCrawlerName() const { return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    template<typename CrawlerNameT = Aws::String>
    void SetCrawlerName(CrawlerNameT&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::forward<CrawlerNameT>(value); }
    template<typename CrawlerNameT = Aws::String>
    CrawlerMetrics& WithCrawlerName(CrawlerNameT&& value) { SetCrawlerName(std::forward<CrawlerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time left to complete a running crawl.</p>
     */
    inline double GetTimeLeftSeconds() const { return m_timeLeftSeconds; }
    inline bool TimeLeftSecondsHasBeenSet() const { return m_timeLeftSecondsHasBeenSet; }
    inline void SetTimeLeftSeconds(double value) { m_timeLeftSecondsHasBeenSet = true; m_timeLeftSeconds = value; }
    inline CrawlerMetrics& WithTimeLeftSeconds(double value) { SetTimeLeftSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the crawler is still estimating how long it will take to complete
     * this run.</p>
     */
    inline bool GetStillEstimating() const { return m_stillEstimating; }
    inline bool StillEstimatingHasBeenSet() const { return m_stillEstimatingHasBeenSet; }
    inline void SetStillEstimating(bool value) { m_stillEstimatingHasBeenSet = true; m_stillEstimating = value; }
    inline CrawlerMetrics& WithStillEstimating(bool value) { SetStillEstimating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the crawler's most recent run, in seconds.</p>
     */
    inline double GetLastRuntimeSeconds() const { return m_lastRuntimeSeconds; }
    inline bool LastRuntimeSecondsHasBeenSet() const { return m_lastRuntimeSecondsHasBeenSet; }
    inline void SetLastRuntimeSeconds(double value) { m_lastRuntimeSecondsHasBeenSet = true; m_lastRuntimeSeconds = value; }
    inline CrawlerMetrics& WithLastRuntimeSeconds(double value) { SetLastRuntimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The median duration of this crawler's runs, in seconds.</p>
     */
    inline double GetMedianRuntimeSeconds() const { return m_medianRuntimeSeconds; }
    inline bool MedianRuntimeSecondsHasBeenSet() const { return m_medianRuntimeSecondsHasBeenSet; }
    inline void SetMedianRuntimeSeconds(double value) { m_medianRuntimeSecondsHasBeenSet = true; m_medianRuntimeSeconds = value; }
    inline CrawlerMetrics& WithMedianRuntimeSeconds(double value) { SetMedianRuntimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables created by this crawler.</p>
     */
    inline int GetTablesCreated() const { return m_tablesCreated; }
    inline bool TablesCreatedHasBeenSet() const { return m_tablesCreatedHasBeenSet; }
    inline void SetTablesCreated(int value) { m_tablesCreatedHasBeenSet = true; m_tablesCreated = value; }
    inline CrawlerMetrics& WithTablesCreated(int value) { SetTablesCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables updated by this crawler.</p>
     */
    inline int GetTablesUpdated() const { return m_tablesUpdated; }
    inline bool TablesUpdatedHasBeenSet() const { return m_tablesUpdatedHasBeenSet; }
    inline void SetTablesUpdated(int value) { m_tablesUpdatedHasBeenSet = true; m_tablesUpdated = value; }
    inline CrawlerMetrics& WithTablesUpdated(int value) { SetTablesUpdated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables deleted by this crawler.</p>
     */
    inline int GetTablesDeleted() const { return m_tablesDeleted; }
    inline bool TablesDeletedHasBeenSet() const { return m_tablesDeletedHasBeenSet; }
    inline void SetTablesDeleted(int value) { m_tablesDeletedHasBeenSet = true; m_tablesDeleted = value; }
    inline CrawlerMetrics& WithTablesDeleted(int value) { SetTablesDeleted(value); return *this;}
    ///@}
  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;

    double m_timeLeftSeconds{0.0};
    bool m_timeLeftSecondsHasBeenSet = false;

    bool m_stillEstimating{false};
    bool m_stillEstimatingHasBeenSet = false;

    double m_lastRuntimeSeconds{0.0};
    bool m_lastRuntimeSecondsHasBeenSet = false;

    double m_medianRuntimeSeconds{0.0};
    bool m_medianRuntimeSecondsHasBeenSet = false;

    int m_tablesCreated{0};
    bool m_tablesCreatedHasBeenSet = false;

    int m_tablesUpdated{0};
    bool m_tablesUpdatedHasBeenSet = false;

    int m_tablesDeleted{0};
    bool m_tablesDeletedHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
