/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API CrawlerMetrics
  {
  public:
    CrawlerMetrics();
    CrawlerMetrics(Aws::Utils::Json::JsonView jsonValue);
    CrawlerMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the crawler.</p>
     */
    inline const Aws::String& GetCrawlerName() const{ return m_crawlerName; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetCrawlerName(const Aws::String& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = value; }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetCrawlerName(Aws::String&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::move(value); }

    /**
     * <p>The name of the crawler.</p>
     */
    inline void SetCrawlerName(const char* value) { m_crawlerNameHasBeenSet = true; m_crawlerName.assign(value); }

    /**
     * <p>The name of the crawler.</p>
     */
    inline CrawlerMetrics& WithCrawlerName(const Aws::String& value) { SetCrawlerName(value); return *this;}

    /**
     * <p>The name of the crawler.</p>
     */
    inline CrawlerMetrics& WithCrawlerName(Aws::String&& value) { SetCrawlerName(std::move(value)); return *this;}

    /**
     * <p>The name of the crawler.</p>
     */
    inline CrawlerMetrics& WithCrawlerName(const char* value) { SetCrawlerName(value); return *this;}


    /**
     * <p>The estimated time left to complete a running crawl.</p>
     */
    inline double GetTimeLeftSeconds() const{ return m_timeLeftSeconds; }

    /**
     * <p>The estimated time left to complete a running crawl.</p>
     */
    inline bool TimeLeftSecondsHasBeenSet() const { return m_timeLeftSecondsHasBeenSet; }

    /**
     * <p>The estimated time left to complete a running crawl.</p>
     */
    inline void SetTimeLeftSeconds(double value) { m_timeLeftSecondsHasBeenSet = true; m_timeLeftSeconds = value; }

    /**
     * <p>The estimated time left to complete a running crawl.</p>
     */
    inline CrawlerMetrics& WithTimeLeftSeconds(double value) { SetTimeLeftSeconds(value); return *this;}


    /**
     * <p>True if the crawler is still estimating how long it will take to complete
     * this run.</p>
     */
    inline bool GetStillEstimating() const{ return m_stillEstimating; }

    /**
     * <p>True if the crawler is still estimating how long it will take to complete
     * this run.</p>
     */
    inline bool StillEstimatingHasBeenSet() const { return m_stillEstimatingHasBeenSet; }

    /**
     * <p>True if the crawler is still estimating how long it will take to complete
     * this run.</p>
     */
    inline void SetStillEstimating(bool value) { m_stillEstimatingHasBeenSet = true; m_stillEstimating = value; }

    /**
     * <p>True if the crawler is still estimating how long it will take to complete
     * this run.</p>
     */
    inline CrawlerMetrics& WithStillEstimating(bool value) { SetStillEstimating(value); return *this;}


    /**
     * <p>The duration of the crawler's most recent run, in seconds.</p>
     */
    inline double GetLastRuntimeSeconds() const{ return m_lastRuntimeSeconds; }

    /**
     * <p>The duration of the crawler's most recent run, in seconds.</p>
     */
    inline bool LastRuntimeSecondsHasBeenSet() const { return m_lastRuntimeSecondsHasBeenSet; }

    /**
     * <p>The duration of the crawler's most recent run, in seconds.</p>
     */
    inline void SetLastRuntimeSeconds(double value) { m_lastRuntimeSecondsHasBeenSet = true; m_lastRuntimeSeconds = value; }

    /**
     * <p>The duration of the crawler's most recent run, in seconds.</p>
     */
    inline CrawlerMetrics& WithLastRuntimeSeconds(double value) { SetLastRuntimeSeconds(value); return *this;}


    /**
     * <p>The median duration of this crawler's runs, in seconds.</p>
     */
    inline double GetMedianRuntimeSeconds() const{ return m_medianRuntimeSeconds; }

    /**
     * <p>The median duration of this crawler's runs, in seconds.</p>
     */
    inline bool MedianRuntimeSecondsHasBeenSet() const { return m_medianRuntimeSecondsHasBeenSet; }

    /**
     * <p>The median duration of this crawler's runs, in seconds.</p>
     */
    inline void SetMedianRuntimeSeconds(double value) { m_medianRuntimeSecondsHasBeenSet = true; m_medianRuntimeSeconds = value; }

    /**
     * <p>The median duration of this crawler's runs, in seconds.</p>
     */
    inline CrawlerMetrics& WithMedianRuntimeSeconds(double value) { SetMedianRuntimeSeconds(value); return *this;}


    /**
     * <p>The number of tables created by this crawler.</p>
     */
    inline int GetTablesCreated() const{ return m_tablesCreated; }

    /**
     * <p>The number of tables created by this crawler.</p>
     */
    inline bool TablesCreatedHasBeenSet() const { return m_tablesCreatedHasBeenSet; }

    /**
     * <p>The number of tables created by this crawler.</p>
     */
    inline void SetTablesCreated(int value) { m_tablesCreatedHasBeenSet = true; m_tablesCreated = value; }

    /**
     * <p>The number of tables created by this crawler.</p>
     */
    inline CrawlerMetrics& WithTablesCreated(int value) { SetTablesCreated(value); return *this;}


    /**
     * <p>The number of tables updated by this crawler.</p>
     */
    inline int GetTablesUpdated() const{ return m_tablesUpdated; }

    /**
     * <p>The number of tables updated by this crawler.</p>
     */
    inline bool TablesUpdatedHasBeenSet() const { return m_tablesUpdatedHasBeenSet; }

    /**
     * <p>The number of tables updated by this crawler.</p>
     */
    inline void SetTablesUpdated(int value) { m_tablesUpdatedHasBeenSet = true; m_tablesUpdated = value; }

    /**
     * <p>The number of tables updated by this crawler.</p>
     */
    inline CrawlerMetrics& WithTablesUpdated(int value) { SetTablesUpdated(value); return *this;}


    /**
     * <p>The number of tables deleted by this crawler.</p>
     */
    inline int GetTablesDeleted() const{ return m_tablesDeleted; }

    /**
     * <p>The number of tables deleted by this crawler.</p>
     */
    inline bool TablesDeletedHasBeenSet() const { return m_tablesDeletedHasBeenSet; }

    /**
     * <p>The number of tables deleted by this crawler.</p>
     */
    inline void SetTablesDeleted(int value) { m_tablesDeletedHasBeenSet = true; m_tablesDeleted = value; }

    /**
     * <p>The number of tables deleted by this crawler.</p>
     */
    inline CrawlerMetrics& WithTablesDeleted(int value) { SetTablesDeleted(value); return *this;}

  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet;

    double m_timeLeftSeconds;
    bool m_timeLeftSecondsHasBeenSet;

    bool m_stillEstimating;
    bool m_stillEstimatingHasBeenSet;

    double m_lastRuntimeSeconds;
    bool m_lastRuntimeSecondsHasBeenSet;

    double m_medianRuntimeSeconds;
    bool m_medianRuntimeSecondsHasBeenSet;

    int m_tablesCreated;
    bool m_tablesCreatedHasBeenSet;

    int m_tablesUpdated;
    bool m_tablesUpdatedHasBeenSet;

    int m_tablesDeleted;
    bool m_tablesDeletedHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
