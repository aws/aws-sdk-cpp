/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to get information about a Deployment
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class GetDeploymentRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployment"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    GetDeploymentRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    GetDeploymentRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const { return m_embed; }
    inline bool EmbedHasBeenSet() const { return m_embedHasBeenSet; }
    template<typename EmbedT = Aws::Vector<Aws::String>>
    void SetEmbed(EmbedT&& value) { m_embedHasBeenSet = true; m_embed = std::forward<EmbedT>(value); }
    template<typename EmbedT = Aws::Vector<Aws::String>>
    GetDeploymentRequest& WithEmbed(EmbedT&& value) { SetEmbed(std::forward<EmbedT>(value)); return *this;}
    template<typename EmbedT = Aws::String>
    GetDeploymentRequest& AddEmbed(EmbedT&& value) { m_embedHasBeenSet = true; m_embed.emplace_back(std::forward<EmbedT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
