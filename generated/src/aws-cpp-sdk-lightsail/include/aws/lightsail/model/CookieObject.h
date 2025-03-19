/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ForwardValues.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes whether an Amazon Lightsail content delivery network (CDN)
   * distribution forwards cookies to the origin and, if so, which ones.</p> <p>For
   * the cookies that you specify, your distribution caches separate versions of the
   * specified content based on the cookie values in viewer requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CookieObject">AWS
   * API Reference</a></p>
   */
  class CookieObject
  {
  public:
    AWS_LIGHTSAIL_API CookieObject() = default;
    AWS_LIGHTSAIL_API CookieObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CookieObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline ForwardValues GetOption() const { return m_option; }
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }
    inline void SetOption(ForwardValues value) { m_optionHasBeenSet = true; m_option = value; }
    inline CookieObject& WithOption(ForwardValues value) { SetOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCookiesAllowList() const { return m_cookiesAllowList; }
    inline bool CookiesAllowListHasBeenSet() const { return m_cookiesAllowListHasBeenSet; }
    template<typename CookiesAllowListT = Aws::Vector<Aws::String>>
    void SetCookiesAllowList(CookiesAllowListT&& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList = std::forward<CookiesAllowListT>(value); }
    template<typename CookiesAllowListT = Aws::Vector<Aws::String>>
    CookieObject& WithCookiesAllowList(CookiesAllowListT&& value) { SetCookiesAllowList(std::forward<CookiesAllowListT>(value)); return *this;}
    template<typename CookiesAllowListT = Aws::String>
    CookieObject& AddCookiesAllowList(CookiesAllowListT&& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList.emplace_back(std::forward<CookiesAllowListT>(value)); return *this; }
    ///@}
  private:

    ForwardValues m_option{ForwardValues::NOT_SET};
    bool m_optionHasBeenSet = false;

    Aws::Vector<Aws::String> m_cookiesAllowList;
    bool m_cookiesAllowListHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
