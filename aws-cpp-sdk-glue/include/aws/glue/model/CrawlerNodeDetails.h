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
  class AWS_GLUE_API CrawlerNodeDetails
  {
  public:
    CrawlerNodeDetails();
    CrawlerNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    CrawlerNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline const Aws::Vector<Crawl>& GetCrawls() const{ return m_crawls; }

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline bool CrawlsHasBeenSet() const { return m_crawlsHasBeenSet; }

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline void SetCrawls(const Aws::Vector<Crawl>& value) { m_crawlsHasBeenSet = true; m_crawls = value; }

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline void SetCrawls(Aws::Vector<Crawl>&& value) { m_crawlsHasBeenSet = true; m_crawls = std::move(value); }

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline CrawlerNodeDetails& WithCrawls(const Aws::Vector<Crawl>& value) { SetCrawls(value); return *this;}

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline CrawlerNodeDetails& WithCrawls(Aws::Vector<Crawl>&& value) { SetCrawls(std::move(value)); return *this;}

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline CrawlerNodeDetails& AddCrawls(const Crawl& value) { m_crawlsHasBeenSet = true; m_crawls.push_back(value); return *this; }

    /**
     * <p>A list of crawls represented by the crawl node.</p>
     */
    inline CrawlerNodeDetails& AddCrawls(Crawl&& value) { m_crawlsHasBeenSet = true; m_crawls.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Crawl> m_crawls;
    bool m_crawlsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
