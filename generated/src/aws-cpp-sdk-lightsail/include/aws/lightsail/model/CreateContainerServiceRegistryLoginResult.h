﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceRegistryLogin.h>
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
namespace Lightsail
{
namespace Model
{
  class CreateContainerServiceRegistryLoginResult
  {
  public:
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult();
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the log in information for the container service
     * registry of your Lightsail account.</p>
     */
    inline const ContainerServiceRegistryLogin& GetRegistryLogin() const{ return m_registryLogin; }
    inline void SetRegistryLogin(const ContainerServiceRegistryLogin& value) { m_registryLogin = value; }
    inline void SetRegistryLogin(ContainerServiceRegistryLogin&& value) { m_registryLogin = std::move(value); }
    inline CreateContainerServiceRegistryLoginResult& WithRegistryLogin(const ContainerServiceRegistryLogin& value) { SetRegistryLogin(value); return *this;}
    inline CreateContainerServiceRegistryLoginResult& WithRegistryLogin(ContainerServiceRegistryLogin&& value) { SetRegistryLogin(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContainerServiceRegistryLoginResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContainerServiceRegistryLoginResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContainerServiceRegistryLoginResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContainerServiceRegistryLogin m_registryLogin;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
