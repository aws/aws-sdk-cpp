/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ResourceServerType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class CreateResourceServerResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateResourceServerResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CreateResourceServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateResourceServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the new resource server.</p>
     */
    inline const ResourceServerType& GetResourceServer() const { return m_resourceServer; }
    template<typename ResourceServerT = ResourceServerType>
    void SetResourceServer(ResourceServerT&& value) { m_resourceServerHasBeenSet = true; m_resourceServer = std::forward<ResourceServerT>(value); }
    template<typename ResourceServerT = ResourceServerType>
    CreateResourceServerResult& WithResourceServer(ResourceServerT&& value) { SetResourceServer(std::forward<ResourceServerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResourceServerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceServerType m_resourceServer;
    bool m_resourceServerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
