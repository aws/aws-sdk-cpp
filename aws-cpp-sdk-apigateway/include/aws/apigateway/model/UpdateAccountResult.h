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
   * <p>Represents an AWS account that is associated with API Gateway.</p> <div
   * class="remarks"> <p>To view the account info, call <code>GET</code> on this
   * resource.</p> <h4>Error Codes</h4> <p>The following exception may be thrown when
   * the request fails.</p> <ul> <li>UnauthorizedException</li>
   * <li>NotFoundException</li> <li>TooManyRequestsException</li> </ul> <p>For
   * detailed error code information, including the corresponding HTTP Status Codes,
   * see <a
   * href="https://docs.aws.amazon.com/apigateway/api-reference/handling-errors/#api-error-codes">API
   * Gateway Error Codes</a></p> <h4>Example: Get the information about an
   * account.</h4> <h5>Request</h5> <pre><code>GET /account HTTP/1.1 Content-Type:
   * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
   * 20160531T184618Z Authorization: AWS4-HMAC-SHA256
   * Credential={access_key_ID}/us-east-1/apigateway/aws4_request,
   * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
   * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
   * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
   * "curies": { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/account-apigateway-{rel}.html",
   * "name": "account", "templated": true }, "self": { "href": "/account" },
   * "account:update": { "href": "/account" } }, "cloudwatchRoleArn":
   * "arn:aws:iam::123456789012:role/apigAwsProxyRole", "throttleSettings": {
   * "rateLimit": 500, "burstLimit": 1000 } } </code></pre> <p>In addition to making
   * the REST API call directly, you can use the AWS CLI and an AWS SDK to access
   * this resource.</p> </div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-limits.html">API
   * Gateway Limits</a> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/welcome.html">Developer
   * Guide</a>, <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-account.html">AWS
   * CLI</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Account">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateAccountResult
  {
  public:
    UpdateAccountResult();
    UpdateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline const Aws::String& GetCloudwatchRoleArn() const{ return m_cloudwatchRoleArn; }

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline void SetCloudwatchRoleArn(const Aws::String& value) { m_cloudwatchRoleArn = value; }

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline void SetCloudwatchRoleArn(Aws::String&& value) { m_cloudwatchRoleArn = std::move(value); }

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline void SetCloudwatchRoleArn(const char* value) { m_cloudwatchRoleArn.assign(value); }

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(const Aws::String& value) { SetCloudwatchRoleArn(value); return *this;}

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(Aws::String&& value) { SetCloudwatchRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an Amazon CloudWatch role for the current <a>Account</a>. </p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(const char* value) { SetCloudwatchRoleArn(value); return *this;}


    /**
     * <p>Specifies the API request limits configured for the current
     * <a>Account</a>.</p>
     */
    inline const ThrottleSettings& GetThrottleSettings() const{ return m_throttleSettings; }

    /**
     * <p>Specifies the API request limits configured for the current
     * <a>Account</a>.</p>
     */
    inline void SetThrottleSettings(const ThrottleSettings& value) { m_throttleSettings = value; }

    /**
     * <p>Specifies the API request limits configured for the current
     * <a>Account</a>.</p>
     */
    inline void SetThrottleSettings(ThrottleSettings&& value) { m_throttleSettings = std::move(value); }

    /**
     * <p>Specifies the API request limits configured for the current
     * <a>Account</a>.</p>
     */
    inline UpdateAccountResult& WithThrottleSettings(const ThrottleSettings& value) { SetThrottleSettings(value); return *this;}

    /**
     * <p>Specifies the API request limits configured for the current
     * <a>Account</a>.</p>
     */
    inline UpdateAccountResult& WithThrottleSettings(ThrottleSettings&& value) { SetThrottleSettings(std::move(value)); return *this;}


    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline void SetFeatures(const Aws::Vector<Aws::String>& value) { m_features = value; }

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline void SetFeatures(Aws::Vector<Aws::String>&& value) { m_features = std::move(value); }

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline UpdateAccountResult& WithFeatures(const Aws::Vector<Aws::String>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline UpdateAccountResult& WithFeatures(Aws::Vector<Aws::String>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline UpdateAccountResult& AddFeatures(const Aws::String& value) { m_features.push_back(value); return *this; }

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline UpdateAccountResult& AddFeatures(Aws::String&& value) { m_features.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of features supported for the account. When usage plans are enabled,
     * the features list will include an entry of <code>"UsagePlans"</code>.</p>
     */
    inline UpdateAccountResult& AddFeatures(const char* value) { m_features.push_back(value); return *this; }


    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline const Aws::String& GetApiKeyVersion() const{ return m_apiKeyVersion; }

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline void SetApiKeyVersion(const Aws::String& value) { m_apiKeyVersion = value; }

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline void SetApiKeyVersion(Aws::String&& value) { m_apiKeyVersion = std::move(value); }

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline void SetApiKeyVersion(const char* value) { m_apiKeyVersion.assign(value); }

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline UpdateAccountResult& WithApiKeyVersion(const Aws::String& value) { SetApiKeyVersion(value); return *this;}

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline UpdateAccountResult& WithApiKeyVersion(Aws::String&& value) { SetApiKeyVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the API keys used for the account.</p>
     */
    inline UpdateAccountResult& WithApiKeyVersion(const char* value) { SetApiKeyVersion(value); return *this;}

  private:

    Aws::String m_cloudwatchRoleArn;

    ThrottleSettings m_throttleSettings;

    Aws::Vector<Aws::String> m_features;

    Aws::String m_apiKeyVersion;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
