/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchGetCrawlersRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetCrawlersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCrawlers"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of crawler names, which might be the names returned from the
     * <code>ListCrawlers</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNames() const { return m_crawlerNames; }
    inline bool CrawlerNamesHasBeenSet() const { return m_crawlerNamesHasBeenSet; }
    template<typename CrawlerNamesT = Aws::Vector<Aws::String>>
    void SetCrawlerNames(CrawlerNamesT&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames = std::forward<CrawlerNamesT>(value); }
    template<typename CrawlerNamesT = Aws::Vector<Aws::String>>
    BatchGetCrawlersRequest& WithCrawlerNames(CrawlerNamesT&& value) { SetCrawlerNames(std::forward<CrawlerNamesT>(value)); return *this;}
    template<typename CrawlerNamesT = Aws::String>
    BatchGetCrawlersRequest& AddCrawlerNames(CrawlerNamesT&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames.emplace_back(std::forward<CrawlerNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_crawlerNames;
    bool m_crawlerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
