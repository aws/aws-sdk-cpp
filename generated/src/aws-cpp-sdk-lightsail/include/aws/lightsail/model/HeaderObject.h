/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ForwardValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/HeaderEnum.h>
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
   * <p>Describes the request headers that a Lightsail distribution bases caching
   * on.</p> <p>For the headers that you specify, your distribution caches separate
   * versions of the specified content based on the header values in viewer requests.
   * For example, suppose viewer requests for <code>logo.jpg</code> contain a custom
   * <code>product</code> header that has a value of either <code>acme</code> or
   * <code>apex</code>, and you configure your distribution to cache your content
   * based on values in the <code>product</code> header. Your distribution forwards
   * the <code>product</code> header to the origin and caches the response from the
   * origin once for each header value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/HeaderObject">AWS
   * API Reference</a></p>
   */
  class HeaderObject
  {
  public:
    AWS_LIGHTSAIL_API HeaderObject() = default;
    AWS_LIGHTSAIL_API HeaderObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API HeaderObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The headers that you want your distribution to forward to your origin and
     * base caching on.</p> <p>You can configure your distribution to do one of the
     * following:</p> <ul> <li> <p> <b> <code>all</code> </b> - Forward all headers to
     * your origin.</p> </li> <li> <p> <b> <code>none</code> </b> - Forward only the
     * default headers.</p> </li> <li> <p> <b> <code>allow-list</code> </b> - Forward
     * only the headers you specify using the <code>headersAllowList</code>
     * parameter.</p> </li> </ul>
     */
    inline ForwardValues GetOption() const { return m_option; }
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }
    inline void SetOption(ForwardValues value) { m_optionHasBeenSet = true; m_option = value; }
    inline HeaderObject& WithOption(ForwardValues value) { SetOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific headers to forward to your distribution's origin.</p>
     */
    inline const Aws::Vector<HeaderEnum>& GetHeadersAllowList() const { return m_headersAllowList; }
    inline bool HeadersAllowListHasBeenSet() const { return m_headersAllowListHasBeenSet; }
    template<typename HeadersAllowListT = Aws::Vector<HeaderEnum>>
    void SetHeadersAllowList(HeadersAllowListT&& value) { m_headersAllowListHasBeenSet = true; m_headersAllowList = std::forward<HeadersAllowListT>(value); }
    template<typename HeadersAllowListT = Aws::Vector<HeaderEnum>>
    HeaderObject& WithHeadersAllowList(HeadersAllowListT&& value) { SetHeadersAllowList(std::forward<HeadersAllowListT>(value)); return *this;}
    inline HeaderObject& AddHeadersAllowList(HeaderEnum value) { m_headersAllowListHasBeenSet = true; m_headersAllowList.push_back(value); return *this; }
    ///@}
  private:

    ForwardValues m_option{ForwardValues::NOT_SET};
    bool m_optionHasBeenSet = false;

    Aws::Vector<HeaderEnum> m_headersAllowList;
    bool m_headersAllowListHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
