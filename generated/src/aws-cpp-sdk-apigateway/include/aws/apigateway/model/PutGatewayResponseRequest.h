/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/GatewayResponseType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a customization of a GatewayResponse of a specified response type and
   * status code on the given RestApi.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutGatewayResponseRequest">AWS
   * API Reference</a></p>
   */
  class PutGatewayResponseRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API PutGatewayResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGatewayResponse"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    PutGatewayResponseRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response type of the associated GatewayResponse</p>
     */
    inline GatewayResponseType GetResponseType() const { return m_responseType; }
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }
    inline void SetResponseType(GatewayResponseType value) { m_responseTypeHasBeenSet = true; m_responseType = value; }
    inline PutGatewayResponseRequest& WithResponseType(GatewayResponseType value) { SetResponseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code of the GatewayResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    PutGatewayResponseRequest& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const { return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    PutGatewayResponseRequest& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::String>
    PutGatewayResponseRequest& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const { return m_responseTemplates; }
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseTemplates(ResponseTemplatesT&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::forward<ResponseTemplatesT>(value); }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    PutGatewayResponseRequest& WithResponseTemplates(ResponseTemplatesT&& value) { SetResponseTemplates(std::forward<ResponseTemplatesT>(value)); return *this;}
    template<typename ResponseTemplatesKeyT = Aws::String, typename ResponseTemplatesValueT = Aws::String>
    PutGatewayResponseRequest& AddResponseTemplates(ResponseTemplatesKeyT&& key, ResponseTemplatesValueT&& value) {
      m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::forward<ResponseTemplatesKeyT>(key), std::forward<ResponseTemplatesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    GatewayResponseType m_responseType{GatewayResponseType::NOT_SET};
    bool m_responseTypeHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
