/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the HTTP context to use for the test authorizer
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpContext">AWS API
   * Reference</a></p>
   */
  class HttpContext
  {
  public:
    AWS_IOT_API HttpContext() = default;
    AWS_IOT_API HttpContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Map<Aws::String, Aws::String>>
    HttpContext& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersKeyT = Aws::String, typename HeadersValueT = Aws::String>
    HttpContext& AddHeaders(HeadersKeyT&& key, HeadersValueT&& value) {
      m_headersHasBeenSet = true; m_headers.emplace(std::forward<HeadersKeyT>(key), std::forward<HeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    HttpContext& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
