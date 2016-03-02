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
  class AWS_APIGATEWAY_API TestInvokeAuthorizerRequest : public APIGatewayRequest
  {
  public:
    TestInvokeAuthorizerRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    
    inline TestInvokeAuthorizerRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const{ return m_headers; }

    
    inline void SetHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_headersHasBeenSet = true; m_headers = value; }

    
    inline void SetHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_headersHasBeenSet = true; m_headers = value; }

    
    inline TestInvokeAuthorizerRequest& WithHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaders(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaders(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& AddHeaders(const Aws::String& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(Aws::String&& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(const Aws::String& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(Aws::String&& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(const char* key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(Aws::String&& key, const char* value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddHeaders(const char* key, const char* value) { m_headersHasBeenSet = true; m_headers[key] = value; return *this; }

    
    inline const Aws::String& GetPathWithQueryString() const{ return m_pathWithQueryString; }

    
    inline void SetPathWithQueryString(const Aws::String& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }

    
    inline void SetPathWithQueryString(Aws::String&& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }

    
    inline void SetPathWithQueryString(const char* value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString.assign(value); }

    
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(const Aws::String& value) { SetPathWithQueryString(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(Aws::String&& value) { SetPathWithQueryString(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(const char* value) { SetPathWithQueryString(value); return *this;}

    
    inline const Aws::String& GetBody() const{ return m_body; }

    
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = value; }

    
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    
    inline TestInvokeAuthorizerRequest& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithBody(Aws::String&& value) { SetBody(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithBody(const char* value) { SetBody(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }

    
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    
    inline TestInvokeAuthorizerRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables[key] = value; return *this; }

    
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalContext() const{ return m_additionalContext; }

    
    inline void SetAdditionalContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalContextHasBeenSet = true; m_additionalContext = value; }

    
    inline void SetAdditionalContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalContextHasBeenSet = true; m_additionalContext = value; }

    
    inline TestInvokeAuthorizerRequest& WithAdditionalContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalContext(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& WithAdditionalContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalContext(value); return *this;}

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const Aws::String& key, const Aws::String& value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, const Aws::String& value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const Aws::String& key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const char* key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, const char* value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

    
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const char* key, const char* value) { m_additionalContextHasBeenSet = true; m_additionalContext[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_headers;
    bool m_headersHasBeenSet;
    Aws::String m_pathWithQueryString;
    bool m_pathWithQueryStringHasBeenSet;
    Aws::String m_body;
    bool m_bodyHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_additionalContext;
    bool m_additionalContextHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
