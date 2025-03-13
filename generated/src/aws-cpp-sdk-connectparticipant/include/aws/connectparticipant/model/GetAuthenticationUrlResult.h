/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{
  class GetAuthenticationUrlResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult() = default;
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL where the customer will sign in to the identity provider. This URL
     * contains the authorize endpoint for the Cognito UserPool used in the
     * authentication.</p>
     */
    inline const Aws::String& GetAuthenticationUrl() const { return m_authenticationUrl; }
    template<typename AuthenticationUrlT = Aws::String>
    void SetAuthenticationUrl(AuthenticationUrlT&& value) { m_authenticationUrlHasBeenSet = true; m_authenticationUrl = std::forward<AuthenticationUrlT>(value); }
    template<typename AuthenticationUrlT = Aws::String>
    GetAuthenticationUrlResult& WithAuthenticationUrl(AuthenticationUrlT&& value) { SetAuthenticationUrl(std::forward<AuthenticationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAuthenticationUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationUrl;
    bool m_authenticationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
