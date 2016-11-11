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
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request a new generated client SDK for a <a>RestApi</a> and <a>Stage</a>.</p>
   */
  class AWS_APIGATEWAY_API GetSdkRequest : public APIGatewayRequest
  {
  public:
    GetSdkRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline const Aws::String& GetSdkType() const{ return m_sdkType; }

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline void SetSdkType(const Aws::String& value) { m_sdkTypeHasBeenSet = true; m_sdkType = value; }

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline void SetSdkType(Aws::String&& value) { m_sdkTypeHasBeenSet = true; m_sdkType = value; }

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline void SetSdkType(const char* value) { m_sdkTypeHasBeenSet = true; m_sdkType.assign(value); }

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(const Aws::String& value) { SetSdkType(value); return *this;}

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(Aws::String&& value) { SetSdkType(value); return *this;}

    /**
     * <p>The language for the generated SDK. Currently <code>javascript</code>,
     * <code>android</code>, and <code>objectivec</code> (for iOS) are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(const char* value) { SetSdkType(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of query string parameters that specify properties of the
     * SDK, depending on the requested <code>sdkType</code>. For <code>sdkType</code>
     * of <code>objectivec</code>, a parameter named <code>classPrefix</code> is
     * required. For <code>sdkType</code> of <code>android</code>, parameters named
     * <code>groupId</code>, <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required.</p>
     */
    inline GetSdkRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;
    Aws::String m_sdkType;
    bool m_sdkTypeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
