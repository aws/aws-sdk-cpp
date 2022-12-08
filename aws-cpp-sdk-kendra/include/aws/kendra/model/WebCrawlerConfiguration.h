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
    AWS_KENDRA_API WebCrawlerConfiguration();
    AWS_KENDRA_API WebCrawlerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API WebCrawlerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline const Urls& GetUrls() const{ return m_urls; }

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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline void SetUrls(const Urls& value) { m_urlsHasBeenSet = true; m_urls = value; }

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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline void SetUrls(Urls&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline WebCrawlerConfiguration& WithUrls(const Urls& value) { SetUrls(value); return *this;}

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
     * index your own webpages, or webpages that you have authorization to index.</i>
     * </p>
     */
    inline WebCrawlerConfiguration& WithUrls(Urls&& value) { SetUrls(std::move(value)); return *this;}


    /**
     * <p>Specifies the number of levels in a website that you want to crawl.</p>
     * <p>The first level begins from the website seed or starting point URL. For
     * example, if a website has 3 levels – index level (i.e. seed in this example),
     * sections level, and subsections level – and you are only interested in crawling
     * information up to the sections level (i.e. levels 0-1), you can set your depth
     * to 1.</p> <p>The default crawl depth is set to 2.</p>
     */
    inline int GetCrawlDepth() const{ return m_crawlDepth; }

    /**
     * <p>Specifies the number of levels in a website that you want to crawl.</p>
     * <p>The first level begins from the website seed or starting point URL. For
     * example, if a website has 3 levels – index level (i.e. seed in this example),
     * sections level, and subsections level – and you are only interested in crawling
     * information up to the sections level (i.e. levels 0-1), you can set your depth
     * to 1.</p> <p>The default crawl depth is set to 2.</p>
     */
    inline bool CrawlDepthHasBeenSet() const { return m_crawlDepthHasBeenSet; }

    /**
     * <p>Specifies the number of levels in a website that you want to crawl.</p>
     * <p>The first level begins from the website seed or starting point URL. For
     * example, if a website has 3 levels – index level (i.e. seed in this example),
     * sections level, and subsections level – and you are only interested in crawling
     * information up to the sections level (i.e. levels 0-1), you can set your depth
     * to 1.</p> <p>The default crawl depth is set to 2.</p>
     */
    inline void SetCrawlDepth(int value) { m_crawlDepthHasBeenSet = true; m_crawlDepth = value; }

    /**
     * <p>Specifies the number of levels in a website that you want to crawl.</p>
     * <p>The first level begins from the website seed or starting point URL. For
     * example, if a website has 3 levels – index level (i.e. seed in this example),
     * sections level, and subsections level – and you are only interested in crawling
     * information up to the sections level (i.e. levels 0-1), you can set your depth
     * to 1.</p> <p>The default crawl depth is set to 2.</p>
     */
    inline WebCrawlerConfiguration& WithCrawlDepth(int value) { SetCrawlDepth(value); return *this;}


    /**
     * <p>The maximum number of URLs on a webpage to include when crawling a website.
     * This number is per webpage.</p> <p>As a website’s webpages are crawled, any URLs
     * the webpages link to are also crawled. URLs on a webpage are crawled in order of
     * appearance.</p> <p>The default maximum links per page is 100.</p>
     */
    inline int GetMaxLinksPerPage() const{ return m_maxLinksPerPage; }

    /**
     * <p>The maximum number of URLs on a webpage to include when crawling a website.
     * This number is per webpage.</p> <p>As a website’s webpages are crawled, any URLs
     * the webpages link to are also crawled. URLs on a webpage are crawled in order of
     * appearance.</p> <p>The default maximum links per page is 100.</p>
     */
    inline bool MaxLinksPerPageHasBeenSet() const { return m_maxLinksPerPageHasBeenSet; }

    /**
     * <p>The maximum number of URLs on a webpage to include when crawling a website.
     * This number is per webpage.</p> <p>As a website’s webpages are crawled, any URLs
     * the webpages link to are also crawled. URLs on a webpage are crawled in order of
     * appearance.</p> <p>The default maximum links per page is 100.</p>
     */
    inline void SetMaxLinksPerPage(int value) { m_maxLinksPerPageHasBeenSet = true; m_maxLinksPerPage = value; }

    /**
     * <p>The maximum number of URLs on a webpage to include when crawling a website.
     * This number is per webpage.</p> <p>As a website’s webpages are crawled, any URLs
     * the webpages link to are also crawled. URLs on a webpage are crawled in order of
     * appearance.</p> <p>The default maximum links per page is 100.</p>
     */
    inline WebCrawlerConfiguration& WithMaxLinksPerPage(int value) { SetMaxLinksPerPage(value); return *this;}


    /**
     * <p>The maximum size (in MB) of a webpage or attachment to crawl.</p> <p>Files
     * larger than this size (in MB) are skipped/not crawled.</p> <p>The default
     * maximum size of a webpage or attachment is set to 50 MB.</p>
     */
    inline double GetMaxContentSizePerPageInMegaBytes() const{ return m_maxContentSizePerPageInMegaBytes; }

    /**
     * <p>The maximum size (in MB) of a webpage or attachment to crawl.</p> <p>Files
     * larger than this size (in MB) are skipped/not crawled.</p> <p>The default
     * maximum size of a webpage or attachment is set to 50 MB.</p>
     */
    inline bool MaxContentSizePerPageInMegaBytesHasBeenSet() const { return m_maxContentSizePerPageInMegaBytesHasBeenSet; }

    /**
     * <p>The maximum size (in MB) of a webpage or attachment to crawl.</p> <p>Files
     * larger than this size (in MB) are skipped/not crawled.</p> <p>The default
     * maximum size of a webpage or attachment is set to 50 MB.</p>
     */
    inline void SetMaxContentSizePerPageInMegaBytes(double value) { m_maxContentSizePerPageInMegaBytesHasBeenSet = true; m_maxContentSizePerPageInMegaBytes = value; }

    /**
     * <p>The maximum size (in MB) of a webpage or attachment to crawl.</p> <p>Files
     * larger than this size (in MB) are skipped/not crawled.</p> <p>The default
     * maximum size of a webpage or attachment is set to 50 MB.</p>
     */
    inline WebCrawlerConfiguration& WithMaxContentSizePerPageInMegaBytes(double value) { SetMaxContentSizePerPageInMegaBytes(value); return *this;}


    /**
     * <p>The maximum number of URLs crawled per website host per minute.</p> <p>A
     * minimum of one URL is required.</p> <p>The default maximum number of URLs
     * crawled per website host per minute is 300.</p>
     */
    inline int GetMaxUrlsPerMinuteCrawlRate() const{ return m_maxUrlsPerMinuteCrawlRate; }

    /**
     * <p>The maximum number of URLs crawled per website host per minute.</p> <p>A
     * minimum of one URL is required.</p> <p>The default maximum number of URLs
     * crawled per website host per minute is 300.</p>
     */
    inline bool MaxUrlsPerMinuteCrawlRateHasBeenSet() const { return m_maxUrlsPerMinuteCrawlRateHasBeenSet; }

    /**
     * <p>The maximum number of URLs crawled per website host per minute.</p> <p>A
     * minimum of one URL is required.</p> <p>The default maximum number of URLs
     * crawled per website host per minute is 300.</p>
     */
    inline void SetMaxUrlsPerMinuteCrawlRate(int value) { m_maxUrlsPerMinuteCrawlRateHasBeenSet = true; m_maxUrlsPerMinuteCrawlRate = value; }

    /**
     * <p>The maximum number of URLs crawled per website host per minute.</p> <p>A
     * minimum of one URL is required.</p> <p>The default maximum number of URLs
     * crawled per website host per minute is 300.</p>
     */
    inline WebCrawlerConfiguration& WithMaxUrlsPerMinuteCrawlRate(int value) { SetMaxUrlsPerMinuteCrawlRate(value); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrlInclusionPatterns() const{ return m_urlInclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline bool UrlInclusionPatternsHasBeenSet() const { return m_urlInclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline void SetUrlInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline void SetUrlInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& WithUrlInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetUrlInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& WithUrlInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetUrlInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlInclusionPatterns(const Aws::String& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlInclusionPatterns(Aws::String&& value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain URLs to crawl. URLs
     * that match the patterns are included in the index. URLs that don't match the
     * patterns are excluded from the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlInclusionPatterns(const char* value) { m_urlInclusionPatternsHasBeenSet = true; m_urlInclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrlExclusionPatterns() const{ return m_urlExclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline bool UrlExclusionPatternsHasBeenSet() const { return m_urlExclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline void SetUrlExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline void SetUrlExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& WithUrlExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetUrlExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& WithUrlExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetUrlExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlExclusionPatterns(const Aws::String& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlExclusionPatterns(Aws::String&& value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain URLs to crawl. URLs
     * that match the patterns are excluded from the index. URLs that don't match the
     * patterns are included in the index. If a URL matches both an inclusion and
     * exclusion pattern, the exclusion pattern takes precedence and the URL file isn't
     * included in the index.</p>
     */
    inline WebCrawlerConfiguration& AddUrlExclusionPatterns(const char* value) { m_urlExclusionPatternsHasBeenSet = true; m_urlExclusionPatterns.push_back(value); return *this; }


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
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

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
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

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
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

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
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

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
    inline WebCrawlerConfiguration& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

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
    inline WebCrawlerConfiguration& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}


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
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }

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
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }

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
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }

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
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }

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
    inline WebCrawlerConfiguration& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}

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
    inline WebCrawlerConfiguration& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}

  private:

    Urls m_urls;
    bool m_urlsHasBeenSet = false;

    int m_crawlDepth;
    bool m_crawlDepthHasBeenSet = false;

    int m_maxLinksPerPage;
    bool m_maxLinksPerPageHasBeenSet = false;

    double m_maxContentSizePerPageInMegaBytes;
    bool m_maxContentSizePerPageInMegaBytesHasBeenSet = false;

    int m_maxUrlsPerMinuteCrawlRate;
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
