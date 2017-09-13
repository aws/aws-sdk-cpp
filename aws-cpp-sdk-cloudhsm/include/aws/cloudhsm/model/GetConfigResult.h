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
  class AWS_CLOUDHSM_API GetConfigResult
  {
  public:
    GetConfigResult();
    GetConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
