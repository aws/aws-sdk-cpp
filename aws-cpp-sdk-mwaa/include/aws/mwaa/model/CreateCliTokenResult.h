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
  class AWS_MWAA_API CreateCliTokenResult
  {
  public:
    CreateCliTokenResult();
    CreateCliTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCliTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline const Aws::String& GetCliToken() const{ return m_cliToken; }

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline void SetCliToken(const Aws::String& value) { m_cliToken = value; }

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline void SetCliToken(Aws::String&& value) { m_cliToken = std::move(value); }

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline void SetCliToken(const char* value) { m_cliToken.assign(value); }

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline CreateCliTokenResult& WithCliToken(const Aws::String& value) { SetCliToken(value); return *this;}

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline CreateCliTokenResult& WithCliToken(Aws::String&& value) { SetCliToken(std::move(value)); return *this;}

    /**
     * <p>Create an Airflow CLI login token response for the provided JWT token.</p>
     */
    inline CreateCliTokenResult& WithCliToken(const char* value) { SetCliToken(value); return *this;}


    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline const Aws::String& GetWebServerHostname() const{ return m_webServerHostname; }

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(const Aws::String& value) { m_webServerHostname = value; }

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(Aws::String&& value) { m_webServerHostname = std::move(value); }

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline void SetWebServerHostname(const char* value) { m_webServerHostname.assign(value); }

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateCliTokenResult& WithWebServerHostname(const Aws::String& value) { SetWebServerHostname(value); return *this;}

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateCliTokenResult& WithWebServerHostname(Aws::String&& value) { SetWebServerHostname(std::move(value)); return *this;}

    /**
     * <p>Create an Airflow CLI login token response for the provided webserver
     * hostname.</p>
     */
    inline CreateCliTokenResult& WithWebServerHostname(const char* value) { SetWebServerHostname(value); return *this;}

  private:

    Aws::String m_cliToken;

    Aws::String m_webServerHostname;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
