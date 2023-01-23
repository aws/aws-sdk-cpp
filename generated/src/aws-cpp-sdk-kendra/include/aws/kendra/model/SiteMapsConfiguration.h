/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides the configuration information for the sitemap URLs to crawl.</p> <p>
   * <i>When selecting websites to index, you must adhere to the <a
   * href="https://aws.amazon.com/aup/">Amazon Acceptable Use Policy</a> and all
   * other Amazon terms. Remember that you must only use Amazon Kendra Web Crawler to
   * index your own webpages, or webpages that you have authorization to index.</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SiteMapsConfiguration">AWS
   * API Reference</a></p>
   */
  class SiteMapsConfiguration
  {
  public:
    AWS_KENDRA_API SiteMapsConfiguration();
    AWS_KENDRA_API SiteMapsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SiteMapsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSiteMaps() const{ return m_siteMaps; }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline bool SiteMapsHasBeenSet() const { return m_siteMapsHasBeenSet; }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline void SetSiteMaps(const Aws::Vector<Aws::String>& value) { m_siteMapsHasBeenSet = true; m_siteMaps = value; }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline void SetSiteMaps(Aws::Vector<Aws::String>&& value) { m_siteMapsHasBeenSet = true; m_siteMaps = std::move(value); }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline SiteMapsConfiguration& WithSiteMaps(const Aws::Vector<Aws::String>& value) { SetSiteMaps(value); return *this;}

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline SiteMapsConfiguration& WithSiteMaps(Aws::Vector<Aws::String>&& value) { SetSiteMaps(std::move(value)); return *this;}

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline SiteMapsConfiguration& AddSiteMaps(const Aws::String& value) { m_siteMapsHasBeenSet = true; m_siteMaps.push_back(value); return *this; }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline SiteMapsConfiguration& AddSiteMaps(Aws::String&& value) { m_siteMapsHasBeenSet = true; m_siteMaps.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline SiteMapsConfiguration& AddSiteMaps(const char* value) { m_siteMapsHasBeenSet = true; m_siteMaps.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_siteMaps;
    bool m_siteMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
