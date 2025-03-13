/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{
  class GetAuthorizationTokenResult
  {
  public:
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult() = default;
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The returned authentication token. </p>
     */
    inline const Aws::String& GetAuthorizationToken() const { return m_authorizationToken; }
    template<typename AuthorizationTokenT = Aws::String>
    void SetAuthorizationToken(AuthorizationTokenT&& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = std::forward<AuthorizationTokenT>(value); }
    template<typename AuthorizationTokenT = Aws::String>
    GetAuthorizationTokenResult& WithAuthorizationToken(AuthorizationTokenT&& value) { SetAuthorizationToken(std::forward<AuthorizationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    GetAuthorizationTokenResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAuthorizationTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationToken;
    bool m_authorizationTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
