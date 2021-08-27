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
  class AWS_MWAA_API CreateWebLoginTokenResult
  {
  public:
    CreateWebLoginTokenResult();
    CreateWebLoginTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWebLoginTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline const Aws::String& GetWebServerHostname() const{ return m_webServerHostname; }

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(const Aws::String& value) { m_webServerHostname = value; }

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(Aws::String&& value) { m_webServerHostname = std::move(value); }

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(const char* value) { m_webServerHostname.assign(value); }

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(const Aws::String& value) { SetWebServerHostname(value); return *this;}

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(Aws::String&& value) { SetWebServerHostname(std::move(value)); return *this;}

    /**
     * <p>Create an Airflow Web UI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateWebLoginTokenResult& WithWebServerHostname(const char* value) { SetWebServerHostname(value); return *this;}


    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline const Aws::String& GetWebToken() const{ return m_webToken; }

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline void SetWebToken(const Aws::String& value) { m_webToken = value; }

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline void SetWebToken(Aws::String&& value) { m_webToken = std::move(value); }

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline void SetWebToken(const char* value) { m_webToken.assign(value); }

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(const Aws::String& value) { SetWebToken(value); return *this;}

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(Aws::String&& value) { SetWebToken(std::move(value)); return *this;}

    /**
     * <p>Create an Airflow Web UI login token response for the provided JWT token.</p>
     */
    inline CreateWebLoginTokenResult& WithWebToken(const char* value) { SetWebToken(value); return *this;}

  private:

    Aws::String m_webServerHostname;

    Aws::String m_webToken;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
