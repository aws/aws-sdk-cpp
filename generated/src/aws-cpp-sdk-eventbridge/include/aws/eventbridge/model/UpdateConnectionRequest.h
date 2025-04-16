/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ConnectionAuthorizationType.h>
#include <aws/eventbridge/model/UpdateConnectionAuthRequestParameters.h>
#include <aws/eventbridge/model/ConnectivityResourceParameters.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class UpdateConnectionRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API UpdateConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnection"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the connection to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConnectionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the connection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConnectionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization to use for the connection.</p>
     */
    inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(ConnectionAuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline UpdateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization parameters to use for the connection.</p>
     */
    inline const UpdateConnectionAuthRequestParameters& GetAuthParameters() const { return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    template<typename AuthParametersT = UpdateConnectionAuthRequestParameters>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = UpdateConnectionAuthRequestParameters>
    UpdateConnectionRequest& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private APIs, the parameters to use for invoking the
     * API.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/connection-private.html">Connecting
     * to private APIs</a> in the <i> <i>Amazon EventBridge User Guide</i> </i>.</p>
     */
    inline const ConnectivityResourceParameters& GetInvocationConnectivityParameters() const { return m_invocationConnectivityParameters; }
    inline bool InvocationConnectivityParametersHasBeenSet() const { return m_invocationConnectivityParametersHasBeenSet; }
    template<typename InvocationConnectivityParametersT = ConnectivityResourceParameters>
    void SetInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { m_invocationConnectivityParametersHasBeenSet = true; m_invocationConnectivityParameters = std::forward<InvocationConnectivityParametersT>(value); }
    template<typename InvocationConnectivityParametersT = ConnectivityResourceParameters>
    UpdateConnectionRequest& WithInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { SetInvocationConnectivityParameters(std::forward<InvocationConnectivityParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt this connection. The identifier
     * can be the key Amazon Resource Name (ARN), KeyId, key alias, or key alias
     * ARN.</p> <p>If you do not specify a customer managed key identifier, EventBridge
     * uses an Amazon Web Services owned key to encrypt the connection.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html">Identify
     * and view keys</a> in the <i>Key Management Service Developer Guide</i>. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    UpdateConnectionRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};
    bool m_authorizationTypeHasBeenSet = false;

    UpdateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet = false;

    ConnectivityResourceParameters m_invocationConnectivityParameters;
    bool m_invocationConnectivityParametersHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
