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
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetCrawlerMetricsRequest : public GlueRequest
  {
  public:
    GetCrawlerMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCrawlerMetrics"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNameList() const{ return m_crawlerNameList; }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline bool CrawlerNameListHasBeenSet() const { return m_crawlerNameListHasBeenSet; }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline void SetCrawlerNameList(const Aws::Vector<Aws::String>& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList = value; }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline void SetCrawlerNameList(Aws::Vector<Aws::String>&& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList = std::move(value); }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline GetCrawlerMetricsRequest& WithCrawlerNameList(const Aws::Vector<Aws::String>& value) { SetCrawlerNameList(value); return *this;}

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline GetCrawlerMetricsRequest& WithCrawlerNameList(Aws::Vector<Aws::String>&& value) { SetCrawlerNameList(std::move(value)); return *this;}

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline GetCrawlerMetricsRequest& AddCrawlerNameList(const Aws::String& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList.push_back(value); return *this; }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline GetCrawlerMetricsRequest& AddCrawlerNameList(Aws::String&& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline GetCrawlerMetricsRequest& AddCrawlerNameList(const char* value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList.push_back(value); return *this; }


    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline GetCrawlerMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetCrawlerMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetCrawlerMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetCrawlerMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_crawlerNameList;
    bool m_crawlerNameListHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
