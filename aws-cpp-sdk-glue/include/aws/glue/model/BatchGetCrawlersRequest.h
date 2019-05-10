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
  class AWS_GLUE_API BatchGetCrawlersRequest : public GlueRequest
  {
  public:
    BatchGetCrawlersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCrawlers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNames() const{ return m_crawlerNames; }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline bool CrawlerNamesHasBeenSet() const { return m_crawlerNamesHasBeenSet; }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline void SetCrawlerNames(const Aws::Vector<Aws::String>& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames = value; }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline void SetCrawlerNames(Aws::Vector<Aws::String>&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames = std::move(value); }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline BatchGetCrawlersRequest& WithCrawlerNames(const Aws::Vector<Aws::String>& value) { SetCrawlerNames(value); return *this;}

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline BatchGetCrawlersRequest& WithCrawlerNames(Aws::Vector<Aws::String>&& value) { SetCrawlerNames(std::move(value)); return *this;}

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline BatchGetCrawlersRequest& AddCrawlerNames(const Aws::String& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames.push_back(value); return *this; }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline BatchGetCrawlersRequest& AddCrawlerNames(Aws::String&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline BatchGetCrawlersRequest& AddCrawlerNames(const char* value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_crawlerNames;
    bool m_crawlerNamesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
