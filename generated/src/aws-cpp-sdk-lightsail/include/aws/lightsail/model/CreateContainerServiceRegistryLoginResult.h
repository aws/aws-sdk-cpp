/**
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
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult() = default;
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateContainerServiceRegistryLoginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the log in information for the container service
     * registry of your Lightsail account.</p>
     */
    inline const ContainerServiceRegistryLogin& GetRegistryLogin() const { return m_registryLogin; }
    template<typename RegistryLoginT = ContainerServiceRegistryLogin>
    void SetRegistryLogin(RegistryLoginT&& value) { m_registryLoginHasBeenSet = true; m_registryLogin = std::forward<RegistryLoginT>(value); }
    template<typename RegistryLoginT = ContainerServiceRegistryLogin>
    CreateContainerServiceRegistryLoginResult& WithRegistryLogin(RegistryLoginT&& value) { SetRegistryLogin(std::forward<RegistryLoginT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContainerServiceRegistryLoginResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerServiceRegistryLogin m_registryLogin;
    bool m_registryLoginHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
