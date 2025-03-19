/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Request a new generated client SDK for a RestApi and Stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetSdkRequest">AWS
   * API Reference</a></p>
   */
  class GetSdkRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetSdkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSdk"; }

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
    GetSdkRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Stage that the SDK will use.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    GetSdkRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language for the generated SDK. Currently <code>java</code>,
     * <code>javascript</code>, <code>android</code>, <code>objectivec</code> (for
     * iOS), <code>swift</code> (for iOS), and <code>ruby</code> are supported.</p>
     */
    inline const Aws::String& GetSdkType() const { return m_sdkType; }
    inline bool SdkTypeHasBeenSet() const { return m_sdkTypeHasBeenSet; }
    template<typename SdkTypeT = Aws::String>
    void SetSdkType(SdkTypeT&& value) { m_sdkTypeHasBeenSet = true; m_sdkType = std::forward<SdkTypeT>(value); }
    template<typename SdkTypeT = Aws::String>
    GetSdkRequest& WithSdkType(SdkTypeT&& value) { SetSdkType(std::forward<SdkTypeT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    GetSdkRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    GetSdkRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_sdkType;
    bool m_sdkTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
