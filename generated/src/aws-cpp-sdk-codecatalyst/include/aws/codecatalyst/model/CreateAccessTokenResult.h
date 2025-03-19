/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class CreateAccessTokenResult
  {
  public:
    AWS_CODECATALYST_API CreateAccessTokenResult() = default;
    AWS_CODECATALYST_API CreateAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The secret value of the personal access token.</p>
     */
    inline const Aws::String& GetSecret() const { return m_secret; }
    template<typename SecretT = Aws::String>
    void SetSecret(SecretT&& value) { m_secretHasBeenSet = true; m_secret = std::forward<SecretT>(value); }
    template<typename SecretT = Aws::String>
    CreateAccessTokenResult& WithSecret(SecretT&& value) { SetSecret(std::forward<SecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAccessTokenResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the personal access token expires, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>. If not
     * specified, the default is one year from creation.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const { return m_expiresTime; }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    void SetExpiresTime(ExpiresTimeT&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::forward<ExpiresTimeT>(value); }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    CreateAccessTokenResult& WithExpiresTime(ExpiresTimeT&& value) { SetExpiresTime(std::forward<ExpiresTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the access token.</p>
     */
    inline const Aws::String& GetAccessTokenId() const { return m_accessTokenId; }
    template<typename AccessTokenIdT = Aws::String>
    void SetAccessTokenId(AccessTokenIdT&& value) { m_accessTokenIdHasBeenSet = true; m_accessTokenId = std::forward<AccessTokenIdT>(value); }
    template<typename AccessTokenIdT = Aws::String>
    CreateAccessTokenResult& WithAccessTokenId(AccessTokenIdT&& value) { SetAccessTokenId(std::forward<AccessTokenIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secret;
    bool m_secretHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_expiresTime{};
    bool m_expiresTimeHasBeenSet = false;

    Aws::String m_accessTokenId;
    bool m_accessTokenIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
