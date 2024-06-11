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
    AWS_APIGATEWAY_API UpdateAccountResult();
    AWS_APIGATEWAY_API UpdateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of an Amazon CloudWatch role for the current Account. </p>
     */
    inline const Aws::String& GetCloudwatchRoleArn() const{ return m_cloudwatchRoleArn; }
    inline void SetCloudwatchRoleArn(const Aws::String& value) { m_cloudwatchRoleArn = value; }
    inline void SetCloudwatchRoleArn(Aws::String&& value) { m_cloudwatchRoleArn = std::move(value); }
    inline void SetCloudwatchRoleArn(const char* value) { m_cloudwatchRoleArn.assign(value); }
    inline UpdateAccountResult& WithCloudwatchRoleArn(const Aws::String& value) { SetCloudwatchRoleArn(value); return *this;}
    inline UpdateAccountResult& WithCloudwatchRoleArn(Aws::String&& value) { SetCloudwatchRoleArn(std::move(value)); return *this;}
    inline UpdateAccountResult& WithCloudwatchRoleArn(const char* value) { SetCloudwatchRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the API request limits configured for the current Account.</p>
     */
    inline const ThrottleSettings& GetThrottleSettings() const{ return m_throttleSettings; }
    inline void SetThrottleSettings(const ThrottleSettings& value) { m_throttleSettings = value; }
    inline void SetThrottleSettings(ThrottleSettings&& value) { m_throttleSettings = std::move(value); }
    inline UpdateAccountResult& WithThrottleSettings(const ThrottleSettings& value) { SetThrottleSettings(value); return *this;}
    inline UpdateAccountResult& WithThrottleSettings(ThrottleSettings&& value) { SetThrottleSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatures() const{ return m_features; }
    inline void SetFeatures(const Aws::Vector<Aws::String>& value) { m_features = value; }
    inline void SetFeatures(Aws::Vector<Aws::String>&& value) { m_features = std::move(value); }
    inline UpdateAccountResult& WithFeatures(const Aws::Vector<Aws::String>& value) { SetFeatures(value); return *this;}
    inline UpdateAccountResult& WithFeatures(Aws::Vector<Aws::String>&& value) { SetFeatures(std::move(value)); return *this;}
    inline UpdateAccountResult& AddFeatures(const Aws::String& value) { m_features.push_back(value); return *this; }
    inline UpdateAccountResult& AddFeatures(Aws::String&& value) { m_features.push_back(std::move(value)); return *this; }
    inline UpdateAccountResult& AddFeatures(const char* value) { m_features.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline const Aws::String& GetApiKeyVersion() const{ return m_apiKeyVersion; }
    inline void SetApiKeyVersion(const Aws::String& value) { m_apiKeyVersion = value; }
    inline void SetApiKeyVersion(Aws::String&& value) { m_apiKeyVersion = std::move(value); }
    inline void SetApiKeyVersion(const char* value) { m_apiKeyVersion.assign(value); }
    inline UpdateAccountResult& WithApiKeyVersion(const Aws::String& value) { SetApiKeyVersion(value); return *this;}
    inline UpdateAccountResult& WithApiKeyVersion(Aws::String&& value) { SetApiKeyVersion(std::move(value)); return *this;}
    inline UpdateAccountResult& WithApiKeyVersion(const char* value) { SetApiKeyVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudwatchRoleArn;

    ThrottleSettings m_throttleSettings;

    Aws::Vector<Aws::String> m_features;

    Aws::String m_apiKeyVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
