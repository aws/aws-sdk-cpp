/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/RecrawlBehavior.h>
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
   * <p>When crawling an Amazon S3 data source after the first crawl is complete,
   * specifies whether to crawl the entire dataset again or to crawl only folders
   * that were added since the last crawler run. For more information, see <a
   * href="https://docs.aws.amazon.com/glue/latest/dg/incremental-crawls.html">Incremental
   * Crawls in Glue</a> in the developer guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RecrawlPolicy">AWS
   * API Reference</a></p>
   */
  class RecrawlPolicy
  {
  public:
    AWS_GLUE_API RecrawlPolicy();
    AWS_GLUE_API RecrawlPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RecrawlPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline const RecrawlBehavior& GetRecrawlBehavior() const{ return m_recrawlBehavior; }

    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline bool RecrawlBehaviorHasBeenSet() const { return m_recrawlBehaviorHasBeenSet; }

    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline void SetRecrawlBehavior(const RecrawlBehavior& value) { m_recrawlBehaviorHasBeenSet = true; m_recrawlBehavior = value; }

    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline void SetRecrawlBehavior(RecrawlBehavior&& value) { m_recrawlBehaviorHasBeenSet = true; m_recrawlBehavior = std::move(value); }

    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline RecrawlPolicy& WithRecrawlBehavior(const RecrawlBehavior& value) { SetRecrawlBehavior(value); return *this;}

    /**
     * <p>Specifies whether to crawl the entire dataset again or to crawl only folders
     * that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVERYTHING</code> specifies crawling the entire dataset again.</p>
     * <p>A value of <code>CRAWL_NEW_FOLDERS_ONLY</code> specifies crawling only
     * folders that were added since the last crawler run.</p> <p>A value of
     * <code>CRAWL_EVENT_MODE</code> specifies crawling only the changes identified by
     * Amazon S3 events.</p>
     */
    inline RecrawlPolicy& WithRecrawlBehavior(RecrawlBehavior&& value) { SetRecrawlBehavior(std::move(value)); return *this;}

  private:

    RecrawlBehavior m_recrawlBehavior;
    bool m_recrawlBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
