/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/DescribeConnectionConnectivityParameters.h>
#include <aws/eventbridge/model/ConnectionState.h>
#include <aws/eventbridge/model/ConnectionAuthorizationType.h>
#include <aws/eventbridge/model/ConnectionAuthResponseParameters.h>
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
namespace EventBridge
{
namespace Model
{
  class DescribeConnectionResult
  {
  public:
    AWS_EVENTBRIDGE_API DescribeConnectionResult() = default;
    AWS_EVENTBRIDGE_API DescribeConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API DescribeConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the connection retrieved.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    DescribeConnectionResult& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection retrieved.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeConnectionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the connection retrieved.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeConnectionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private APIs The parameters EventBridge uses to invoke the
     * resource endpoint.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/connection-private.html">Connecting
     * to private APIs</a> in the <i> <i>Amazon EventBridge User Guide</i> </i>.</p>
     */
    inline const DescribeConnectionConnectivityParameters& GetInvocationConnectivityParameters() const { return m_invocationConnectivityParameters; }
    template<typename InvocationConnectivityParametersT = DescribeConnectionConnectivityParameters>
    void SetInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { m_invocationConnectivityParametersHasBeenSet = true; m_invocationConnectivityParameters = std::forward<InvocationConnectivityParametersT>(value); }
    template<typename InvocationConnectivityParametersT = DescribeConnectionConnectivityParameters>
    DescribeConnectionResult& WithInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { SetInvocationConnectivityParameters(std::forward<InvocationConnectivityParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connection retrieved.</p>
     */
    inline ConnectionState GetConnectionState() const { return m_connectionState; }
    inline void SetConnectionState(ConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline DescribeConnectionResult& WithConnectionState(ConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the connection is in the current connection state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    DescribeConnectionResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization specified for the connection.</p>
     */
    inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline void SetAuthorizationType(ConnectionAuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline DescribeConnectionResult& WithAuthorizationType(ConnectionAuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret created from the authorization parameters specified for
     * the connection.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    DescribeConnectionResult& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt the connection, if one has been specified.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/encryption-connections.html">Encrypting
     * connections</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    DescribeConnectionResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to use for authorization for the connection.</p>
     */
    inline const ConnectionAuthResponseParameters& GetAuthParameters() const { return m_authParameters; }
    template<typename AuthParametersT = ConnectionAuthResponseParameters>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = ConnectionAuthResponseParameters>
    DescribeConnectionResult& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeConnectionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeConnectionResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const { return m_lastAuthorizedTime; }
    template<typename LastAuthorizedTimeT = Aws::Utils::DateTime>
    void SetLastAuthorizedTime(LastAuthorizedTimeT&& value) { m_lastAuthorizedTimeHasBeenSet = true; m_lastAuthorizedTime = std::forward<LastAuthorizedTimeT>(value); }
    template<typename LastAuthorizedTimeT = Aws::Utils::DateTime>
    DescribeConnectionResult& WithLastAuthorizedTime(LastAuthorizedTimeT&& value) { SetLastAuthorizedTime(std::forward<LastAuthorizedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DescribeConnectionConnectivityParameters m_invocationConnectivityParameters;
    bool m_invocationConnectivityParametersHasBeenSet = false;

    ConnectionState m_connectionState{ConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};
    bool m_authorizationTypeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    ConnectionAuthResponseParameters m_authParameters;
    bool m_authParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAuthorizedTime{};
    bool m_lastAuthorizedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
