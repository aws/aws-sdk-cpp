﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ConnectionAuthorizationType.h>
#include <aws/eventbridge/model/CreateConnectionAuthRequestParameters.h>
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
  class CreateConnectionRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CreateConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the connection to create.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConnectionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the connection to create.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConnectionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization to use for the connection.</p>  <p>OAUTH
     * tokens are refreshed when a 401 or 407 response is returned.</p> 
     */
    inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(ConnectionAuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline CreateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization parameters to use to authorize with the endpoint. </p>
     * <p>You must include only authorization parameters for the
     * <code>AuthorizationType</code> you specify.</p>
     */
    inline const CreateConnectionAuthRequestParameters& GetAuthParameters() const { return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    template<typename AuthParametersT = CreateConnectionAuthRequestParameters>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = CreateConnectionAuthRequestParameters>
    CreateConnectionRequest& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private resource endpoints, the parameters to use for
     * invoking the resource endpoint.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-private.html">Connecting
     * to private resources</a> in the <i> <i>Amazon EventBridge User Guide</i>
     * </i>.</p>
     */
    inline const ConnectivityResourceParameters& GetInvocationConnectivityParameters() const { return m_invocationConnectivityParameters; }
    inline bool InvocationConnectivityParametersHasBeenSet() const { return m_invocationConnectivityParametersHasBeenSet; }
    template<typename InvocationConnectivityParametersT = ConnectivityResourceParameters>
    void SetInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { m_invocationConnectivityParametersHasBeenSet = true; m_invocationConnectivityParameters = std::forward<InvocationConnectivityParametersT>(value); }
    template<typename InvocationConnectivityParametersT = ConnectivityResourceParameters>
    CreateConnectionRequest& WithInvocationConnectivityParameters(InvocationConnectivityParametersT&& value) { SetInvocationConnectivityParameters(std::forward<InvocationConnectivityParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};
    bool m_authorizationTypeHasBeenSet = false;

    CreateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet = false;

    ConnectivityResourceParameters m_invocationConnectivityParameters;
    bool m_invocationConnectivityParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
