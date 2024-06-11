/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Make a request to simulate the invocation of a Method.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeMethodRequest">AWS
   * API Reference</a></p>
   */
  class TestInvokeMethodRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API TestInvokeMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeMethod"; }

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
    inline TestInvokeMethodRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline TestInvokeMethodRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test invoke method request's resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline TestInvokeMethodRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline TestInvokeMethodRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test invoke method request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline TestInvokeMethodRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline TestInvokeMethodRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline const Aws::String& GetPathWithQueryString() const{ return m_pathWithQueryString; }
    inline bool PathWithQueryStringHasBeenSet() const { return m_pathWithQueryStringHasBeenSet; }
    inline void SetPathWithQueryString(const Aws::String& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }
    inline void SetPathWithQueryString(Aws::String&& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = std::move(value); }
    inline void SetPathWithQueryString(const char* value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString.assign(value); }
    inline TestInvokeMethodRequest& WithPathWithQueryString(const Aws::String& value) { SetPathWithQueryString(value); return *this;}
    inline TestInvokeMethodRequest& WithPathWithQueryString(Aws::String&& value) { SetPathWithQueryString(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithPathWithQueryString(const char* value) { SetPathWithQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMultiValueHeaders() const{ return m_multiValueHeaders; }
    inline bool MultiValueHeadersHasBeenSet() const { return m_multiValueHeadersHasBeenSet; }
    inline void SetMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = value; }
    inline void SetMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = std::move(value); }
    inline TestInvokeMethodRequest& WithMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMultiValueHeaders(value); return *this;}
    inline TestInvokeMethodRequest& WithMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMultiValueHeaders(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& AddMultiValueHeaders(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, value); return *this; }
    inline TestInvokeMethodRequest& AddMultiValueHeaders(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodRequest& AddMultiValueHeaders(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddMultiValueHeaders(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::move(key), std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddMultiValueHeaders(const char* key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddMultiValueHeaders(const char* key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A ClientCertificate identifier to use in the test invocation. API Gateway
     * will use the certificate when making the HTTPS request to the defined back-end
     * endpoint.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }
    inline TestInvokeMethodRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline TestInvokeMethodRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::move(value); }
    inline TestInvokeMethodRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}
    inline TestInvokeMethodRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }
    inline TestInvokeMethodRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}
    inline TestInvokeMethodRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of headers to simulate an incoming invocation request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::move(value); }
    inline TestInvokeMethodRequest& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}
    inline TestInvokeMethodRequest& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(std::move(value)); return *this;}
    inline TestInvokeMethodRequest& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodRequest& AddRequestHeaders(const char* key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_pathWithQueryString;
    bool m_pathWithQueryStringHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_multiValueHeaders;
    bool m_multiValueHeadersHasBeenSet = false;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestHeaders;
    bool m_requestHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
