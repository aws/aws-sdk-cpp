/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAY_API TestInvokeMethodRequest : public APIGatewayRequest
  {
  public:
    TestInvokeMethodRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    
    inline TestInvokeMethodRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    
    inline TestInvokeMethodRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    
    inline TestInvokeMethodRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    
    inline TestInvokeMethodRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    
    inline TestInvokeMethodRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    
    inline const Aws::String& GetPathWithQueryString() const{ return m_pathWithQueryString; }

    
    inline void SetPathWithQueryString(const Aws::String& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }

    
    inline void SetPathWithQueryString(Aws::String&& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }

    
    inline void SetPathWithQueryString(const char* value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString.assign(value); }

    
    inline TestInvokeMethodRequest& WithPathWithQueryString(const Aws::String& value) { SetPathWithQueryString(value); return *this;}

    
    inline TestInvokeMethodRequest& WithPathWithQueryString(Aws::String&& value) { SetPathWithQueryString(value); return *this;}

    
    inline TestInvokeMethodRequest& WithPathWithQueryString(const char* value) { SetPathWithQueryString(value); return *this;}

    
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    
    inline TestInvokeMethodRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    
    inline TestInvokeMethodRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }

    
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    
    inline TestInvokeMethodRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}

    
    inline TestInvokeMethodRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(value); return *this;}

    
    inline TestInvokeMethodRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }

    
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }

    
    inline TestInvokeMethodRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}

    
    inline TestInvokeMethodRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(value); return *this;}

    
    inline TestInvokeMethodRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }

    
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }

    
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }

    
    inline TestInvokeMethodRequest& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}

    
    inline TestInvokeMethodRequest& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(value); return *this;}

    
    inline TestInvokeMethodRequest& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

    
    inline TestInvokeMethodRequest& AddRequestHeaders(const char* key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_pathWithQueryString;
    bool m_pathWithQueryStringHasBeenSet;
    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet;
    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestHeaders;
    bool m_requestHeadersHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
