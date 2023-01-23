/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
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
namespace CloudHSM
{
namespace Model
{
  class GetConfigResult
  {
  public:
    AWS_CLOUDHSM_API GetConfigResult();
    AWS_CLOUDHSM_API GetConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API GetConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of credentials.</p>
     */
    inline const Aws::String& GetConfigType() const{ return m_configType; }

    /**
     * <p>The type of credentials.</p>
     */
    inline void SetConfigType(const Aws::String& value) { m_configType = value; }

    /**
     * <p>The type of credentials.</p>
     */
    inline void SetConfigType(Aws::String&& value) { m_configType = std::move(value); }

    /**
     * <p>The type of credentials.</p>
     */
    inline void SetConfigType(const char* value) { m_configType.assign(value); }

    /**
     * <p>The type of credentials.</p>
     */
    inline GetConfigResult& WithConfigType(const Aws::String& value) { SetConfigType(value); return *this;}

    /**
     * <p>The type of credentials.</p>
     */
    inline GetConfigResult& WithConfigType(Aws::String&& value) { SetConfigType(std::move(value)); return *this;}

    /**
     * <p>The type of credentials.</p>
     */
    inline GetConfigResult& WithConfigType(const char* value) { SetConfigType(value); return *this;}


    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline const Aws::String& GetConfigFile() const{ return m_configFile; }

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline void SetConfigFile(const Aws::String& value) { m_configFile = value; }

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline void SetConfigFile(Aws::String&& value) { m_configFile = std::move(value); }

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline void SetConfigFile(const char* value) { m_configFile.assign(value); }

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline GetConfigResult& WithConfigFile(const Aws::String& value) { SetConfigFile(value); return *this;}

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline GetConfigResult& WithConfigFile(Aws::String&& value) { SetConfigFile(std::move(value)); return *this;}

    /**
     * <p>The chrystoki.conf configuration file.</p>
     */
    inline GetConfigResult& WithConfigFile(const char* value) { SetConfigFile(value); return *this;}


    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline const Aws::String& GetConfigCred() const{ return m_configCred; }

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline void SetConfigCred(const Aws::String& value) { m_configCred = value; }

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline void SetConfigCred(Aws::String&& value) { m_configCred = std::move(value); }

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline void SetConfigCred(const char* value) { m_configCred.assign(value); }

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline GetConfigResult& WithConfigCred(const Aws::String& value) { SetConfigCred(value); return *this;}

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline GetConfigResult& WithConfigCred(Aws::String&& value) { SetConfigCred(std::move(value)); return *this;}

    /**
     * <p>The certificate file containing the server.pem files of the HSMs.</p>
     */
    inline GetConfigResult& WithConfigCred(const char* value) { SetConfigCred(value); return *this;}

  private:

    Aws::String m_configType;

    Aws::String m_configFile;

    Aws::String m_configCred;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
