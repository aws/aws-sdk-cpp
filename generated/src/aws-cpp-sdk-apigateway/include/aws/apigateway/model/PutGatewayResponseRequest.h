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
    AWS_APIGATEWAY_API PutGatewayResponseRequest();

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
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline PutGatewayResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline PutGatewayResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline PutGatewayResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response type of the associated GatewayResponse</p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }
    inline void SetResponseType(const GatewayResponseType& value) { m_responseTypeHasBeenSet = true; m_responseType = value; }
    inline void SetResponseType(GatewayResponseType&& value) { m_responseTypeHasBeenSet = true; m_responseType = std::move(value); }
    inline PutGatewayResponseRequest& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}
    inline PutGatewayResponseRequest& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code of the GatewayResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline PutGatewayResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline PutGatewayResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline PutGatewayResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline PutGatewayResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}
    inline PutGatewayResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline PutGatewayResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline PutGatewayResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }
    inline PutGatewayResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}
    inline PutGatewayResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}
    inline PutGatewayResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline PutGatewayResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    GatewayResponseType m_responseType;
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
