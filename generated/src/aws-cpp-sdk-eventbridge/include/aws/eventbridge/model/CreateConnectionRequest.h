/**
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
    AWS_EVENTBRIDGE_API CreateConnectionRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateConnectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConnectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the connection to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConnectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConnectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorization to use for the connection.</p>  <p>OAUTH
     * tokens are refreshed when a 401 or 407 response is returned.</p> 
     */
    inline const ConnectionAuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(const ConnectionAuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline void SetAuthorizationType(ConnectionAuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }
    inline CreateConnectionRequest& WithAuthorizationType(const ConnectionAuthorizationType& value) { SetAuthorizationType(value); return *this;}
    inline CreateConnectionRequest& WithAuthorizationType(ConnectionAuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization parameters to use to authorize with the endpoint. </p>
     * <p>You must include only authorization parameters for the
     * <code>AuthorizationType</code> you specify.</p>
     */
    inline const CreateConnectionAuthRequestParameters& GetAuthParameters() const{ return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    inline void SetAuthParameters(const CreateConnectionAuthRequestParameters& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }
    inline void SetAuthParameters(CreateConnectionAuthRequestParameters&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }
    inline CreateConnectionRequest& WithAuthParameters(const CreateConnectionAuthRequestParameters& value) { SetAuthParameters(value); return *this;}
    inline CreateConnectionRequest& WithAuthParameters(CreateConnectionAuthRequestParameters&& value) { SetAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For connections to private resource endpoints, the parameters to use for
     * invoking the resource endpoint.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-private.html">Connecting
     * to private resources</a> in the <i> <i>Amazon EventBridge User Guide</i>
     * </i>.</p>
     */
    inline const ConnectivityResourceParameters& GetInvocationConnectivityParameters() const{ return m_invocationConnectivityParameters; }
    inline bool InvocationConnectivityParametersHasBeenSet() const { return m_invocationConnectivityParametersHasBeenSet; }
    inline void SetInvocationConnectivityParameters(const ConnectivityResourceParameters& value) { m_invocationConnectivityParametersHasBeenSet = true; m_invocationConnectivityParameters = value; }
    inline void SetInvocationConnectivityParameters(ConnectivityResourceParameters&& value) { m_invocationConnectivityParametersHasBeenSet = true; m_invocationConnectivityParameters = std::move(value); }
    inline CreateConnectionRequest& WithInvocationConnectivityParameters(const ConnectivityResourceParameters& value) { SetInvocationConnectivityParameters(value); return *this;}
    inline CreateConnectionRequest& WithInvocationConnectivityParameters(ConnectivityResourceParameters&& value) { SetInvocationConnectivityParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionAuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    CreateConnectionAuthRequestParameters m_authParameters;
    bool m_authParametersHasBeenSet = false;

    ConnectivityResourceParameters m_invocationConnectivityParameters;
    bool m_invocationConnectivityParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
