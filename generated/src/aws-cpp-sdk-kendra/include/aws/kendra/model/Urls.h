/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/SeedUrlConfiguration.h>
#include <aws/kendra/model/SiteMapsConfiguration.h>
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
   * <p>Provides the configuration information of the URLs to crawl.</p> <p>You can
   * only crawl websites that use the secure communication protocol, Hypertext
   * Transfer Protocol Secure (HTTPS). If you receive an error when crawling a
   * website, it could be that the website is blocked from crawling.</p> <p> <i>When
   * selecting websites to index, you must adhere to the <a
   * href="https://aws.amazon.com/aup/">Amazon Acceptable Use Policy</a> and all
   * other Amazon terms. Remember that you must only use Amazon Kendra Web Crawler to
   * index your own web pages, or web pages that you have authorization to index.</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Urls">AWS API
   * Reference</a></p>
   */
  class Urls
  {
  public:
    AWS_KENDRA_API Urls() = default;
    AWS_KENDRA_API Urls(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Urls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of the seed or starting point URLs of the websites you want to
     * crawl.</p> <p>You can choose to crawl only the website host names, or the
     * website host names with subdomains, or the website host names with subdomains
     * and other domains that the web pages link to.</p> <p>You can list up to 100 seed
     * URLs.</p>
     */
    inline const SeedUrlConfiguration& GetSeedUrlConfiguration() const { return m_seedUrlConfiguration; }
    inline bool SeedUrlConfigurationHasBeenSet() const { return m_seedUrlConfigurationHasBeenSet; }
    template<typename SeedUrlConfigurationT = SeedUrlConfiguration>
    void SetSeedUrlConfiguration(SeedUrlConfigurationT&& value) { m_seedUrlConfigurationHasBeenSet = true; m_seedUrlConfiguration = std::forward<SeedUrlConfigurationT>(value); }
    template<typename SeedUrlConfigurationT = SeedUrlConfiguration>
    Urls& WithSeedUrlConfiguration(SeedUrlConfigurationT&& value) { SetSeedUrlConfiguration(std::forward<SeedUrlConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the sitemap URLs of the websites you want to crawl.</p>
     * <p>Only URLs belonging to the same website host names are crawled. You can list
     * up to three sitemap URLs.</p>
     */
    inline const SiteMapsConfiguration& GetSiteMapsConfiguration() const { return m_siteMapsConfiguration; }
    inline bool SiteMapsConfigurationHasBeenSet() const { return m_siteMapsConfigurationHasBeenSet; }
    template<typename SiteMapsConfigurationT = SiteMapsConfiguration>
    void SetSiteMapsConfiguration(SiteMapsConfigurationT&& value) { m_siteMapsConfigurationHasBeenSet = true; m_siteMapsConfiguration = std::forward<SiteMapsConfigurationT>(value); }
    template<typename SiteMapsConfigurationT = SiteMapsConfiguration>
    Urls& WithSiteMapsConfiguration(SiteMapsConfigurationT&& value) { SetSiteMapsConfiguration(std::forward<SiteMapsConfigurationT>(value)); return *this;}
    ///@}
  private:

    SeedUrlConfiguration m_seedUrlConfiguration;
    bool m_seedUrlConfigurationHasBeenSet = false;

    SiteMapsConfiguration m_siteMapsConfiguration;
    bool m_siteMapsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
