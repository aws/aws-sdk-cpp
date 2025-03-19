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
    AWS_IOT_API TestInvokeAuthorizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeAuthorizer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The custom authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    TestInvokeAuthorizerRequest& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    TestInvokeAuthorizerRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key. This value must be Base-64-encoded.</p>
     */
    inline const Aws::String& GetTokenSignature() const { return m_tokenSignature; }
    inline bool TokenSignatureHasBeenSet() const { return m_tokenSignatureHasBeenSet; }
    template<typename TokenSignatureT = Aws::String>
    void SetTokenSignature(TokenSignatureT&& value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature = std::forward<TokenSignatureT>(value); }
    template<typename TokenSignatureT = Aws::String>
    TestInvokeAuthorizerRequest& WithTokenSignature(TokenSignatureT&& value) { SetTokenSignature(std::forward<TokenSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test HTTP authorization request.</p>
     */
    inline const HttpContext& GetHttpContext() const { return m_httpContext; }
    inline bool HttpContextHasBeenSet() const { return m_httpContextHasBeenSet; }
    template<typename HttpContextT = HttpContext>
    void SetHttpContext(HttpContextT&& value) { m_httpContextHasBeenSet = true; m_httpContext = std::forward<HttpContextT>(value); }
    template<typename HttpContextT = HttpContext>
    TestInvokeAuthorizerRequest& WithHttpContext(HttpContextT&& value) { SetHttpContext(std::forward<HttpContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test MQTT authorization request.</p>
     */
    inline const MqttContext& GetMqttContext() const { return m_mqttContext; }
    inline bool MqttContextHasBeenSet() const { return m_mqttContextHasBeenSet; }
    template<typename MqttContextT = MqttContext>
    void SetMqttContext(MqttContextT&& value) { m_mqttContextHasBeenSet = true; m_mqttContext = std::forward<MqttContextT>(value); }
    template<typename MqttContextT = MqttContext>
    TestInvokeAuthorizerRequest& WithMqttContext(MqttContextT&& value) { SetMqttContext(std::forward<MqttContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test TLS authorization request.</p>
     */
    inline const TlsContext& GetTlsContext() const { return m_tlsContext; }
    inline bool TlsContextHasBeenSet() const { return m_tlsContextHasBeenSet; }
    template<typename TlsContextT = TlsContext>
    void SetTlsContext(TlsContextT&& value) { m_tlsContextHasBeenSet = true; m_tlsContext = std::forward<TlsContextT>(value); }
    template<typename TlsContextT = TlsContext>
    TestInvokeAuthorizerRequest& WithTlsContext(TlsContextT&& value) { SetTlsContext(std::forward<TlsContextT>(value)); return *this;}
    ///@}
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
