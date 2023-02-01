/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/HttpContext.h>
#include <aws/iot/model/MqttContext.h>
#include <aws/iot/model/TlsContext.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class TestInvokeAuthorizerRequest : public IoTRequest
  {
  public:
    AWS_IOT_API TestInvokeAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeAuthorizer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The custom authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}


    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline const Aws::String& GetTokenSignature() const{ return m_tokenSignature; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline bool TokenSignatureHasBeenSet() const { return m_tokenSignatureHasBeenSet; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline void SetTokenSignature(const Aws::String& value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature = value; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline void SetTokenSignature(Aws::String&& value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature = std::move(value); }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline void SetTokenSignature(const char* value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature.assign(value); }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(const Aws::String& value) { SetTokenSignature(value); return *this;}

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(Aws::String&& value) { SetTokenSignature(std::move(value)); return *this;}

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(const char* value) { SetTokenSignature(value); return *this;}


    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline const HttpContext& GetHttpContext() const{ return m_httpContext; }

    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline bool HttpContextHasBeenSet() const { return m_httpContextHasBeenSet; }

    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline void SetHttpContext(const HttpContext& value) { m_httpContextHasBeenSet = true; m_httpContext = value; }

    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline void SetHttpContext(HttpContext&& value) { m_httpContextHasBeenSet = true; m_httpContext = std::move(value); }

    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithHttpContext(const HttpContext& value) { SetHttpContext(value); return *this;}

    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithHttpContext(HttpContext&& value) { SetHttpContext(std::move(value)); return *this;}


    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline const MqttContext& GetMqttContext() const{ return m_mqttContext; }

    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline bool MqttContextHasBeenSet() const { return m_mqttContextHasBeenSet; }

    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline void SetMqttContext(const MqttContext& value) { m_mqttContextHasBeenSet = true; m_mqttContext = value; }

    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline void SetMqttContext(MqttContext&& value) { m_mqttContextHasBeenSet = true; m_mqttContext = std::move(value); }

    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithMqttContext(const MqttContext& value) { SetMqttContext(value); return *this;}

    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithMqttContext(MqttContext&& value) { SetMqttContext(std::move(value)); return *this;}


    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline const TlsContext& GetTlsContext() const{ return m_tlsContext; }

    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline bool TlsContextHasBeenSet() const { return m_tlsContextHasBeenSet; }

    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline void SetTlsContext(const TlsContext& value) { m_tlsContextHasBeenSet = true; m_tlsContext = value; }

    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline void SetTlsContext(TlsContext&& value) { m_tlsContextHasBeenSet = true; m_tlsContext = std::move(value); }

    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTlsContext(const TlsContext& value) { SetTlsContext(value); return *this;}

    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTlsContext(TlsContext&& value) { SetTlsContext(std::move(value)); return *this;}

  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_tokenSignature;
    bool m_tokenSignatureHasBeenSet = false;

    HttpContext m_httpContext;
    bool m_httpContextHasBeenSet = false;

    MqttContext m_mqttContext;
    bool m_mqttContextHasBeenSet = false;

    TlsContext m_tlsContext;
    bool m_tlsContextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
