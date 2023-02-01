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
    AWS_IOT_API HttpContext();
    AWS_IOT_API HttpContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline void SetHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline void SetHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& WithHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& WithHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(const Aws::String& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(Aws::String&& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(const Aws::String& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(Aws::String&& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(const char* key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(Aws::String&& key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }

    /**
     * <p>The header keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& AddHeaders(const char* key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }


    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string keys and values in an HTTP authorization request.</p>
     */
    inline HttpContext& WithQueryString(const char* value) { SetQueryString(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
