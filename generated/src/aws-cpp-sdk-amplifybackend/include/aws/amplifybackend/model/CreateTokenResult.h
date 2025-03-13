/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class CreateTokenResult
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateTokenResult() = default;
    AWS_AMPLIFYBACKEND_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CreateTokenResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One-time challenge code for authenticating into the Amplify Admin UI.</p>
     */
    inline const Aws::String& GetChallengeCode() const { return m_challengeCode; }
    template<typename ChallengeCodeT = Aws::String>
    void SetChallengeCode(ChallengeCodeT&& value) { m_challengeCodeHasBeenSet = true; m_challengeCode = std::forward<ChallengeCodeT>(value); }
    template<typename ChallengeCodeT = Aws::String>
    CreateTokenResult& WithChallengeCode(ChallengeCodeT&& value) { SetChallengeCode(std::forward<ChallengeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID provided when creating a new challenge token.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    CreateTokenResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time for the one-time generated token code.</p>
     */
    inline const Aws::String& GetTtl() const { return m_ttl; }
    template<typename TtlT = Aws::String>
    void SetTtl(TtlT&& value) { m_ttlHasBeenSet = true; m_ttl = std::forward<TtlT>(value); }
    template<typename TtlT = Aws::String>
    CreateTokenResult& WithTtl(TtlT&& value) { SetTtl(std::forward<TtlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_challengeCode;
    bool m_challengeCodeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
