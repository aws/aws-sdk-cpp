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
   * index your own web pages, or web pages that you have authorization to index.</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SiteMapsConfiguration">AWS
   * API Reference</a></p>
   */
  class SiteMapsConfiguration
  {
  public:
    AWS_KENDRA_API SiteMapsConfiguration() = default;
    AWS_KENDRA_API SiteMapsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SiteMapsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of sitemap URLs of the websites you want to crawl.</p> <p>The list
     * can include a maximum of three sitemap URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSiteMaps() const { return m_siteMaps; }
    inline bool SiteMapsHasBeenSet() const { return m_siteMapsHasBeenSet; }
    template<typename SiteMapsT = Aws::Vector<Aws::String>>
    void SetSiteMaps(SiteMapsT&& value) { m_siteMapsHasBeenSet = true; m_siteMaps = std::forward<SiteMapsT>(value); }
    template<typename SiteMapsT = Aws::Vector<Aws::String>>
    SiteMapsConfiguration& WithSiteMaps(SiteMapsT&& value) { SetSiteMaps(std::forward<SiteMapsT>(value)); return *this;}
    template<typename SiteMapsT = Aws::String>
    SiteMapsConfiguration& AddSiteMaps(SiteMapsT&& value) { m_siteMapsHasBeenSet = true; m_siteMaps.emplace_back(std::forward<SiteMapsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_siteMaps;
    bool m_siteMapsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
