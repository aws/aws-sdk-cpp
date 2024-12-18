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
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult();
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API GetAuthenticationUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL where the customer will sign in to the identity provider. This URL
     * contains the authorize endpoint for the Cognito UserPool used in the
     * authentication.</p>
     */
    inline const Aws::String& GetAuthenticationUrl() const{ return m_authenticationUrl; }
    inline void SetAuthenticationUrl(const Aws::String& value) { m_authenticationUrl = value; }
    inline void SetAuthenticationUrl(Aws::String&& value) { m_authenticationUrl = std::move(value); }
    inline void SetAuthenticationUrl(const char* value) { m_authenticationUrl.assign(value); }
    inline GetAuthenticationUrlResult& WithAuthenticationUrl(const Aws::String& value) { SetAuthenticationUrl(value); return *this;}
    inline GetAuthenticationUrlResult& WithAuthenticationUrl(Aws::String&& value) { SetAuthenticationUrl(std::move(value)); return *this;}
    inline GetAuthenticationUrlResult& WithAuthenticationUrl(const char* value) { SetAuthenticationUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAuthenticationUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAuthenticationUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAuthenticationUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
