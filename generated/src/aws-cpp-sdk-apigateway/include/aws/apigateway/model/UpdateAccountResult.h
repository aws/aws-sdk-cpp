/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents an AWS account that is associated with API Gateway.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Account">AWS
   * API Reference</a></p>
   */
  class UpdateAccountResult
  {
  public:
    AWS_APIGATEWAY_API UpdateAccountResult() = default;
    AWS_APIGATEWAY_API UpdateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of an Amazon CloudWatch role for the current Account. </p>
     */
    inline const Aws::String& GetCloudwatchRoleArn() const { return m_cloudwatchRoleArn; }
    template<typename CloudwatchRoleArnT = Aws::String>
    void SetCloudwatchRoleArn(CloudwatchRoleArnT&& value) { m_cloudwatchRoleArnHasBeenSet = true; m_cloudwatchRoleArn = std::forward<CloudwatchRoleArnT>(value); }
    template<typename CloudwatchRoleArnT = Aws::String>
    UpdateAccountResult& WithCloudwatchRoleArn(CloudwatchRoleArnT&& value) { SetCloudwatchRoleArn(std::forward<CloudwatchRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the API request limits configured for the current Account.</p>
     */
    inline const ThrottleSettings& GetThrottleSettings() const { return m_throttleSettings; }
    template<typename ThrottleSettingsT = ThrottleSettings>
    void SetThrottleSettings(ThrottleSettingsT&& value) { m_throttleSettingsHasBeenSet = true; m_throttleSettings = std::forward<ThrottleSettingsT>(value); }
    template<typename ThrottleSettingsT = ThrottleSettings>
    UpdateAccountResult& WithThrottleSettings(ThrottleSettingsT&& value) { SetThrottleSettings(std::forward<ThrottleSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatures() const { return m_features; }
    template<typename FeaturesT = Aws::Vector<Aws::String>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<Aws::String>>
    UpdateAccountResult& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = Aws::String>
    UpdateAccountResult& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline const Aws::String& GetApiKeyVersion() const { return m_apiKeyVersion; }
    template<typename ApiKeyVersionT = Aws::String>
    void SetApiKeyVersion(ApiKeyVersionT&& value) { m_apiKeyVersionHasBeenSet = true; m_apiKeyVersion = std::forward<ApiKeyVersionT>(value); }
    template<typename ApiKeyVersionT = Aws::String>
    UpdateAccountResult& WithApiKeyVersion(ApiKeyVersionT&& value) { SetApiKeyVersion(std::forward<ApiKeyVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudwatchRoleArn;
    bool m_cloudwatchRoleArnHasBeenSet = false;

    ThrottleSettings m_throttleSettings;
    bool m_throttleSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::String m_apiKeyVersion;
    bool m_apiKeyVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
