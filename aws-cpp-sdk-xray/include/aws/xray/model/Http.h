/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about an HTTP request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Http">AWS API
   * Reference</a></p>
   */
  class AWS_XRAY_API Http
  {
  public:
    Http();
    Http(Aws::Utils::Json::JsonView jsonValue);
    Http& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The request URL.</p>
     */
    inline const Aws::String& GetHttpURL() const{ return m_httpURL; }

    /**
     * <p>The request URL.</p>
     */
    inline bool HttpURLHasBeenSet() const { return m_httpURLHasBeenSet; }

    /**
     * <p>The request URL.</p>
     */
    inline void SetHttpURL(const Aws::String& value) { m_httpURLHasBeenSet = true; m_httpURL = value; }

    /**
     * <p>The request URL.</p>
     */
    inline void SetHttpURL(Aws::String&& value) { m_httpURLHasBeenSet = true; m_httpURL = std::move(value); }

    /**
     * <p>The request URL.</p>
     */
    inline void SetHttpURL(const char* value) { m_httpURLHasBeenSet = true; m_httpURL.assign(value); }

    /**
     * <p>The request URL.</p>
     */
    inline Http& WithHttpURL(const Aws::String& value) { SetHttpURL(value); return *this;}

    /**
     * <p>The request URL.</p>
     */
    inline Http& WithHttpURL(Aws::String&& value) { SetHttpURL(std::move(value)); return *this;}

    /**
     * <p>The request URL.</p>
     */
    inline Http& WithHttpURL(const char* value) { SetHttpURL(value); return *this;}


    /**
     * <p>The response status.</p>
     */
    inline int GetHttpStatus() const{ return m_httpStatus; }

    /**
     * <p>The response status.</p>
     */
    inline bool HttpStatusHasBeenSet() const { return m_httpStatusHasBeenSet; }

    /**
     * <p>The response status.</p>
     */
    inline void SetHttpStatus(int value) { m_httpStatusHasBeenSet = true; m_httpStatus = value; }

    /**
     * <p>The response status.</p>
     */
    inline Http& WithHttpStatus(int value) { SetHttpStatus(value); return *this;}


    /**
     * <p>The request method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The request method.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The request method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The request method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The request method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The request method.</p>
     */
    inline Http& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The request method.</p>
     */
    inline Http& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The request method.</p>
     */
    inline Http& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>The request's user agent string.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }

    /**
     * <p>The request's user agent string.</p>
     */
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }

    /**
     * <p>The request's user agent string.</p>
     */
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }

    /**
     * <p>The request's user agent string.</p>
     */
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }

    /**
     * <p>The request's user agent string.</p>
     */
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }

    /**
     * <p>The request's user agent string.</p>
     */
    inline Http& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}

    /**
     * <p>The request's user agent string.</p>
     */
    inline Http& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}

    /**
     * <p>The request's user agent string.</p>
     */
    inline Http& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}


    /**
     * <p>The IP address of the requestor.</p>
     */
    inline const Aws::String& GetClientIp() const{ return m_clientIp; }

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline void SetClientIp(const Aws::String& value) { m_clientIpHasBeenSet = true; m_clientIp = value; }

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline void SetClientIp(Aws::String&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::move(value); }

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline void SetClientIp(const char* value) { m_clientIpHasBeenSet = true; m_clientIp.assign(value); }

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline Http& WithClientIp(const Aws::String& value) { SetClientIp(value); return *this;}

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline Http& WithClientIp(Aws::String&& value) { SetClientIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the requestor.</p>
     */
    inline Http& WithClientIp(const char* value) { SetClientIp(value); return *this;}

  private:

    Aws::String m_httpURL;
    bool m_httpURLHasBeenSet;

    int m_httpStatus;
    bool m_httpStatusHasBeenSet;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet;

    Aws::String m_clientIp;
    bool m_clientIpHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
