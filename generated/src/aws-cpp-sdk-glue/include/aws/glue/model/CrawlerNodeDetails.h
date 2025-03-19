/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Crawl.h>
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
   * <p>The details of a Crawler node present in the workflow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlerNodeDetails">AWS
   * API Reference</a></p>
   */
  class CrawlerNodeDetails
  {
  public:
    AWS_GLUE_API CrawlerNodeDetails() = default;
    AWS_GLUE_API CrawlerNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline const Aws::Vector<Crawl>& GetCrawls() const { return m_crawls; }
    inline bool CrawlsHasBeenSet() const { return m_crawlsHasBeenSet; }
    template<typename CrawlsT = Aws::Vector<Crawl>>
    void SetCrawls(CrawlsT&& value) { m_crawlsHasBeenSet = true; m_crawls = std::forward<CrawlsT>(value); }
    template<typename CrawlsT = Aws::Vector<Crawl>>
    CrawlerNodeDetails& WithCrawls(CrawlsT&& value) { SetCrawls(std::forward<CrawlsT>(value)); return *this;}
    template<typename CrawlsT = Crawl>
    CrawlerNodeDetails& AddCrawls(CrawlsT&& value) { m_crawlsHasBeenSet = true; m_crawls.emplace_back(std::forward<CrawlsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Crawl> m_crawls;
    bool m_crawlsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
