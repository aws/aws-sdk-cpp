/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MWAA
{
namespace Model
{
  class CreateWebLoginTokenResult
  {
  public:
    AWS_MWAA_API CreateWebLoginTokenResult();
    AWS_MWAA_API CreateWebLoginTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API CreateWebLoginTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline const Aws::String& GetWebServerHostname() const{ return m_webServerHostname; }

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline void SetWebServerHostname(const Aws::String& value) { m_webServerHostname = value; }

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline void SetWebServerHostname(Aws::String&& value) { m_webServerHostname = std::move(value); }

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline void SetWebServerHostname(const char* value) { m_webServerHostname.assign(value); }

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(const Aws::String& value) { SetWebServerHostname(value); return *this;}

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(Aws::String&& value) { SetWebServerHostname(std::move(value)); return *this;}

    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(const char* value) { SetWebServerHostname(value); return *this;}


    /**
     * <p>An Airflow web server login token.</p>
     */
    inline const Aws::String& GetWebToken() const{ return m_webToken; }

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline void SetWebToken(const Aws::String& value) { m_webToken = value; }

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline void SetWebToken(Aws::String&& value) { m_webToken = std::move(value); }

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline void SetWebToken(const char* value) { m_webToken.assign(value); }

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(const Aws::String& value) { SetWebToken(value); return *this;}

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(Aws::String&& value) { SetWebToken(std::move(value)); return *this;}

    /**
     * <p>An Airflow web server login token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(const char* value) { SetWebToken(value); return *this;}

  private:

    Aws::String m_webServerHostname;

    Aws::String m_webToken;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
