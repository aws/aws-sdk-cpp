/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{
  class CreateTestGridUrlResult
  {
  public:
    AWS_DEVICEFARM_API CreateTestGridUrlResult();
    AWS_DEVICEFARM_API CreateTestGridUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateTestGridUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline CreateTestGridUrlResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline CreateTestGridUrlResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>A signed URL, expiring in <a>CreateTestGridUrlRequest$expiresInSeconds</a>
     * seconds, to be passed to a <code>RemoteWebDriver</code>. </p>
     */
    inline CreateTestGridUrlResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }

    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expires = value; }

    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expires = std::move(value); }

    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline CreateTestGridUrlResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    /**
     * <p>The number of seconds the URL from <a>CreateTestGridUrlResult$url</a> stays
     * active.</p>
     */
    inline CreateTestGridUrlResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(std::move(value)); return *this;}

  private:

    Aws::String m_url;

    Aws::Utils::DateTime m_expires;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
