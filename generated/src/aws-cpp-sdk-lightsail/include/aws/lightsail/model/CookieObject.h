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
    AWS_LIGHTSAIL_API CookieObject();
    AWS_LIGHTSAIL_API CookieObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CookieObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline const ForwardValues& GetOption() const{ return m_option; }

    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }

    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline void SetOption(const ForwardValues& value) { m_optionHasBeenSet = true; m_option = value; }

    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline void SetOption(ForwardValues&& value) { m_optionHasBeenSet = true; m_option = std::move(value); }

    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline CookieObject& WithOption(const ForwardValues& value) { SetOption(value); return *this;}

    /**
     * <p>Specifies which cookies to forward to the distribution's origin for a cache
     * behavior: <code>all</code>, <code>none</code>, or <code>allow-list</code> to
     * forward only the cookies specified in the <code>cookiesAllowList</code>
     * parameter.</p>
     */
    inline CookieObject& WithOption(ForwardValues&& value) { SetOption(std::move(value)); return *this;}


    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCookiesAllowList() const{ return m_cookiesAllowList; }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline bool CookiesAllowListHasBeenSet() const { return m_cookiesAllowListHasBeenSet; }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline void SetCookiesAllowList(const Aws::Vector<Aws::String>& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList = value; }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline void SetCookiesAllowList(Aws::Vector<Aws::String>&& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList = std::move(value); }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline CookieObject& WithCookiesAllowList(const Aws::Vector<Aws::String>& value) { SetCookiesAllowList(value); return *this;}

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline CookieObject& WithCookiesAllowList(Aws::Vector<Aws::String>&& value) { SetCookiesAllowList(std::move(value)); return *this;}

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline CookieObject& AddCookiesAllowList(const Aws::String& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList.push_back(value); return *this; }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline CookieObject& AddCookiesAllowList(Aws::String&& value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific cookies to forward to your distribution's origin.</p>
     */
    inline CookieObject& AddCookiesAllowList(const char* value) { m_cookiesAllowListHasBeenSet = true; m_cookiesAllowList.push_back(value); return *this; }

  private:

    ForwardValues m_option;
    bool m_optionHasBeenSet = false;

    Aws::Vector<Aws::String> m_cookiesAllowList;
    bool m_cookiesAllowListHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
