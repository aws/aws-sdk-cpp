﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/WebCrawlerMode.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for the seed or starting point URLs to
   * crawl.</p> <p> <i>When selecting websites to index, you must adhere to the <a
   * href="https://aws.amazon.com/aup/">Amazon Acceptable Use Policy</a> and all
   * other Amazon terms. Remember that you must only use Amazon Kendra Web Crawler to
   * index your own web pages, or web pages that you have authorization to index.</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SeedUrlConfiguration">AWS
   * API Reference</a></p>
   */
  class SeedUrlConfiguration
  {
  public:
    AWS_KENDRA_API SeedUrlConfiguration() = default;
    AWS_KENDRA_API SeedUrlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SeedUrlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of seed or starting point URLs of the websites you want to
     * crawl.</p> <p>The list can include a maximum of 100 seed URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSeedUrls() const { return m_seedUrls; }
    inline bool SeedUrlsHasBeenSet() const { return m_seedUrlsHasBeenSet; }
    template<typename SeedUrlsT = Aws::Vector<Aws::String>>
    void SetSeedUrls(SeedUrlsT&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls = std::forward<SeedUrlsT>(value); }
    template<typename SeedUrlsT = Aws::Vector<Aws::String>>
    SeedUrlConfiguration& WithSeedUrls(SeedUrlsT&& value) { SetSeedUrls(std::forward<SeedUrlsT>(value)); return *this;}
    template<typename SeedUrlsT = Aws::String>
    SeedUrlConfiguration& AddSeedUrls(SeedUrlsT&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls.emplace_back(std::forward<SeedUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can choose one of the following modes:</p> <ul> <li> <p>
     * <code>HOST_ONLY</code>—crawl only the website host names. For example, if the
     * seed URL is "abc.example.com", then only URLs with host name "abc.example.com"
     * are crawled.</p> </li> <li> <p> <code>SUBDOMAINS</code>—crawl the website host
     * names with subdomains. For example, if the seed URL is "abc.example.com", then
     * "a.abc.example.com" and "b.abc.example.com" are also crawled.</p> </li> <li> <p>
     * <code>EVERYTHING</code>—crawl the website host names with subdomains and other
     * domains that the web pages link to.</p> </li> </ul> <p>The default mode is set
     * to <code>HOST_ONLY</code>.</p>
     */
    inline WebCrawlerMode GetWebCrawlerMode() const { return m_webCrawlerMode; }
    inline bool WebCrawlerModeHasBeenSet() const { return m_webCrawlerModeHasBeenSet; }
    inline void SetWebCrawlerMode(WebCrawlerMode value) { m_webCrawlerModeHasBeenSet = true; m_webCrawlerMode = value; }
    inline SeedUrlConfiguration& WithWebCrawlerMode(WebCrawlerMode value) { SetWebCrawlerMode(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_seedUrls;
    bool m_seedUrlsHasBeenSet = false;

    WebCrawlerMode m_webCrawlerMode{WebCrawlerMode::NOT_SET};
    bool m_webCrawlerModeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
