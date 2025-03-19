/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/Urls.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ProxyConfiguration.h>
#include <aws/kendra/model/AuthenticationConfiguration.h>
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
   * <p>Provides the configuration information required for Amazon Kendra Web
   * Crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/WebCrawlerConfiguration">AWS
   * API Reference</a></p>
   */
  class WebCrawlerConfiguration
  {
  public:
    AWS_KENDRA_API WebCrawlerConfiguration() = default;
    AWS_KENDRA_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the seed or starting point URLs of the websites or the sitemap URLs
     * of the websites you want to crawl.</p> <p>You can include website subdomains.
     * You can list up to 100 seed URLs and up to three sitemap URLs.</p> <p>You can
     * only crawl websites that use the secure communication protocol, Hypertext
     * Transfer Protocol Secure (HTTPS). If you receive an error when crawling a
     * website, it could be that the website is blocked from crawling.</p> <p> <i>When
     * selecting websites to index, you must adhere to the <a
     * href="https://aws.amazon.com/aup/">Amazon Acceptable Use Policy</a> and all
     * other Amazon terms. Remember that you must only use Amazon Kendra Web Crawler to
     * index your own web pages, or web pages that you have authorization to index.</i>
     * </p>
     */
    inline const Urls& GetUrls() const { return m_urls; }
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }
    template<typename UrlsT = Urls>
    void SetUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls = std::forward<UrlsT>(value); }
    template<typename UrlsT = Urls>
    WebCrawlerConfiguration& WithUrls(UrlsT&& value) { SetUrls(std::forward<UrlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'depth' or number of levels from the seed level to crawl. For example,
     * the seed URL page is depth 1 and any hyperlinks on this page that are also
     * crawled are depth 2.</p>
     */
    inline int GetCrawlDepth() const { return m_crawlDepth; }
    inline bool CrawlDepthHasBeenSet() const { return m_crawlDepthHasBeenSet; }
    inline void SetCrawlDepth(int value) { m_crawlDepthHasBeenSet = true; m_crawlDepth = value; }
    inline WebCrawlerConfiguration& WithCrawlDepth(int value) { SetCrawlDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of URLs on a web page to include when crawling a website.
     * This number is per web page.</p> <p>As a website’s web pages are crawled, any
     * URLs the web pages link to are also crawled. URLs on a web page are crawled in
     * order of appearance.</p> <p>The default maximum links per page is 100.</p>
     */
    inline int GetMaxLinksPerPage() const { return m_maxLinksPerPage; }
    inline bool MaxLinksPerPageHasBeenSet() const { return m_maxLinksPerPageHasBeenSet; }
    inline void SetMaxLinksPerPage(int value) { m_maxLinksPerPageHasBeenSet = true; m_maxLinksPerPage = value; }
    inline WebCrawlerConfiguration& WithMaxLinksPerPage(int value) { SetMaxLinksPerPage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MB) of a web page or attachment to crawl.</p> <p>Files
     * larger than this size (in MB) are skipped/not crawled.</p> <p>The default
     * maximum size of a web page or attachment is set to 50 MB.</p>
     */
    inline double GetMaxContentSizePerPageInMegaBytes() const { return m_maxContentSizePerPageInMegaBytes; }
    inline bool MaxContentSizePerPageInMegaBytesHasBeenSet() const { return m_maxContentSizePerPageInMegaBytesHasBeenSet; }
    inline void SetMaxContentSizePerPageInMegaBytes(double value) { m_maxContentSizePerPageInMegaBytesHasBeenSet = true; m_maxContentSizePerPageInMegaBytes = value; }
    inline WebCrawlerConfiguration& WithMaxContentSizePerPageInMegaBytes(double value) { SetMaxContentSizePerPageInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of URLs crawled per website host per minute.</p> <p>A
     * minimum of one URL is required.</p> <p>The default maximum number of URLs
     * crawled per website host per minute is 300.</p>
     */
    inline int GetMaxUrlsPerMinuteCrawlRate() const { return m_maxUrlsPerMinuteCrawlRate; }
    inline bool MaxUrlsPerMinuteCrawlRateHasBeenSet() const { return m_maxUrlsPerMinuteCrawlRateHasBeenSet; }
    inline void SetMaxUrlsPerMinuteCrawlRate(int value) { m_maxUrlsPerMinuteCrawlRateHasBeenSet = true; m_maxUrlsPerMinuteCrawlRate = value; }
    inline WebCrawlerConfiguration& WithMaxUrlsPerMinuteCrawlRate(int value) { SetMaxUrlsPerMinuteCrawlRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrlInclusionPatterns() const { return m_urlInclusionPatterns; }
    inline bool UrlInclusionPatternsHasBeenSet() const { return m_urlInclusionPatternsHasBeenSet; }
    template<typename UrlInclusionPatternsT = Aws::Vector<Aws::String>>
    void SetUrlInclusionPatterns(UrlInclusionPatternsT&& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns = std::forward<UrlInclusionPatternsT>(value); }
    template<typename UrlInclusionPatternsT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithUrlInclusionPatterns(UrlInclusionPatternsT&& value) { SetUrlInclusionPatterns(std::forward<UrlInclusionPatternsT>(value)); return *this;}
    template<typename UrlInclusionPatternsT = Aws::String>
    WebCrawlerConfiguration& AddUrlInclusionPatterns(UrlInclusionPatternsT&& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns.emplace_back(std::forward<UrlInclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrlExclusionPatterns() const { return m_urlExclusionPatterns; }
    inline bool UrlExclusionPatternsHasBeenSet() const { return m_urlExclusionPatternsHasBeenSet; }
    template<typename UrlExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetUrlExclusionPatterns(UrlExclusionPatternsT&& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns = std::forward<UrlExclusionPatternsT>(value); }
    template<typename UrlExclusionPatternsT = Aws::Vector<Aws::String>>
    WebCrawlerConfiguration& WithUrlExclusionPatterns(UrlExclusionPatternsT&& value) { SetUrlExclusionPatterns(std::forward<UrlExclusionPatternsT>(value)); return *this;}
    template<typename UrlExclusionPatternsT = Aws::String>
    WebCrawlerConfiguration& AddUrlExclusionPatterns(UrlExclusionPatternsT&& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns.emplace_back(std::forward<UrlExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information required to connect to your internal websites via a
     * web proxy.</p> <p>You must provide the website host name and port number. For
     * example, the host name of https://a.example.com/page1.html is "a.example.com"
     * and the port is 443, the standard port for HTTPS.</p> <p>Web proxy credentials
     * are optional and you can use them to connect to a web proxy server that requires
     * basic authentication. To store web proxy credentials, you use a secret in <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">Secrets
     * Manager</a>.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    WebCrawlerConfiguration& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required to connect to websites using
     * authentication.</p> <p>You can connect to websites using basic authentication of
     * user name and password. You use a secret in <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">Secrets
     * Manager</a> to store your authentication credentials.</p> <p>You must provide
     * the website host name and port number. For example, the host name of
     * https://a.example.com/page1.html is "a.example.com" and the port is 443, the
     * standard port for HTTPS.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    WebCrawlerConfiguration& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}
  private:

    Urls m_urls;
    bool m_urlsHasBeenSet = false;

    int m_crawlDepth{0};
    bool m_crawlDepthHasBeenSet = false;

    int m_maxLinksPerPage{0};
    bool m_maxLinksPerPageHasBeenSet = false;

    double m_maxContentSizePerPageInMegaBytes{0.0};
    bool m_maxContentSizePerPageInMegaBytesHasBeenSet = false;

    int m_maxUrlsPerMinuteCrawlRate{0};
    bool m_maxUrlsPerMinuteCrawlRateHasBeenSet = false;

    Aws::Vector<Aws::String> m_urlInclusionPatterns;
    bool m_urlInclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_urlExclusionPatterns;
    bool m_urlExclusionPatternsHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
