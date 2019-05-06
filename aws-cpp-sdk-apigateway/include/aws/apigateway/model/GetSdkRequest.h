/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Request a new generated client SDK for a <a>RestApi</a> and
   * <a>Stage</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetSdkRequest : public APIGatewayRequest
  {
  public:
    GetSdkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSdk"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetSdkRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetSdkRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetSdkRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the <a>Stage</a> that the SDK will use.</p>
     */
    inline GetSdkRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline const Aws::String& GetSdkType() const{ return m_sdkType; }

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline bool SdkTypeHasBeenSet() const { return m_sdkTypeHasBeenSet; }

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline void SetSdkType(const Aws::String& value) { m_sdkTypeHasBeenSet = true; m_sdkType = value; }

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline void SetSdkType(Aws::String&& value) { m_sdkTypeHasBeenSet = true; m_sdkType = std::move(value); }

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline void SetSdkType(const char* value) { m_sdkTypeHasBeenSet = true; m_sdkType.assign(value); }

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(const Aws::String& value) { SetSdkType(value); return *this;}

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(Aws::String&& value) { SetSdkType(std::move(value)); return *this;}

    /**
     * <p>[Required] The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline GetSdkRequest& WithSdkType(const char* value) { SetSdkType(value); return *this;}


    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string key-value map of query parameters
     * <code>sdkType</code>-dependent properties of the SDK. For <code>sdkType</code>
     * of <code>objectivec</code> or <code>swift</code>, a parameter named
     * <code>classPrefix</code> is required. For <code>sdkType</code> of
     * <code>android</code>, parameters named <code>groupId</code>,
     * <code>artifactId</code>, <code>artifactVersion</code>, and
     * <code>invokerPackage</code> are required. For <code>sdkType</code> of
     * <code>java</code>, parameters named <code>serviceName</code> and
     * <code>javaPackageName</code> are required. </p>
     */
    inline GetSdkRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

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
