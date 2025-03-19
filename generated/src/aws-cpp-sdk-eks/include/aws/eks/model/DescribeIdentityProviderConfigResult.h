/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/IdentityProviderConfigResponse.h>
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
namespace EKS
{
namespace Model
{
  class DescribeIdentityProviderConfigResult
  {
  public:
    AWS_EKS_API DescribeIdentityProviderConfigResult() = default;
    AWS_EKS_API DescribeIdentityProviderConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeIdentityProviderConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline const IdentityProviderConfigResponse& GetIdentityProviderConfig() const { return m_identityProviderConfig; }
    template<typename IdentityProviderConfigT = IdentityProviderConfigResponse>
    void SetIdentityProviderConfig(IdentityProviderConfigT&& value) { m_identityProviderConfigHasBeenSet = true; m_identityProviderConfig = std::forward<IdentityProviderConfigT>(value); }
    template<typename IdentityProviderConfigT = IdentityProviderConfigResponse>
    DescribeIdentityProviderConfigResult& WithIdentityProviderConfig(IdentityProviderConfigT&& value) { SetIdentityProviderConfig(std::forward<IdentityProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIdentityProviderConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityProviderConfigResponse m_identityProviderConfig;
    bool m_identityProviderConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
