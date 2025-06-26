/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AssociationState.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class CreateAccountAssociationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateAccountAssociationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CreateAccountAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API CreateAccountAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Third-party IoT platform OAuth authorization server URL backed with all the
     * required parameters to perform end-user authentication.</p>
     */
    inline const Aws::String& GetOAuthAuthorizationUrl() const { return m_oAuthAuthorizationUrl; }
    template<typename OAuthAuthorizationUrlT = Aws::String>
    void SetOAuthAuthorizationUrl(OAuthAuthorizationUrlT&& value) { m_oAuthAuthorizationUrlHasBeenSet = true; m_oAuthAuthorizationUrl = std::forward<OAuthAuthorizationUrlT>(value); }
    template<typename OAuthAuthorizationUrlT = Aws::String>
    CreateAccountAssociationResult& WithOAuthAuthorizationUrl(OAuthAuthorizationUrlT&& value) { SetOAuthAuthorizationUrl(std::forward<OAuthAuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the account association request.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    CreateAccountAssociationResult& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the account association request.</p>
     */
    inline AssociationState GetAssociationState() const { return m_associationState; }
    inline void SetAssociationState(AssociationState value) { m_associationStateHasBeenSet = true; m_associationState = value; }
    inline CreateAccountAssociationResult& WithAssociationState(AssociationState value) { SetAssociationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateAccountAssociationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccountAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oAuthAuthorizationUrl;
    bool m_oAuthAuthorizationUrlHasBeenSet = false;

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    AssociationState m_associationState{AssociationState::NOT_SET};
    bool m_associationStateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
