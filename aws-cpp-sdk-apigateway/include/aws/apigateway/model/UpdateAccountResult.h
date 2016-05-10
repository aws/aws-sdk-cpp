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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/ThrottleSettings.h>

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
   * <p>Represents an AWS account that is associated with Amazon API Gateway.</p>
   */
  class AWS_APIGATEWAY_API UpdateAccountResult
  {
  public:
    UpdateAccountResult();
    UpdateAccountResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAccountResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline const Aws::String& GetCloudwatchRoleArn() const{ return m_cloudwatchRoleArn; }

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline void SetCloudwatchRoleArn(const Aws::String& value) { m_cloudwatchRoleArn = value; }

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline void SetCloudwatchRoleArn(Aws::String&& value) { m_cloudwatchRoleArn = value; }

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline void SetCloudwatchRoleArn(const char* value) { m_cloudwatchRoleArn.assign(value); }

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(const Aws::String& value) { SetCloudwatchRoleArn(value); return *this;}

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(Aws::String&& value) { SetCloudwatchRoleArn(value); return *this;}

    /**
     * <p>Specifies the Amazon resource name (ARN) of an Amazon CloudWatch role for the
     * current <a>Account</a> resource.</p>
     */
    inline UpdateAccountResult& WithCloudwatchRoleArn(const char* value) { SetCloudwatchRoleArn(value); return *this;}

    /**
     * <p>Specifies the application programming interface (API) throttle settings for
     * the current <a>Account</a> resource.</p>
     */
    inline const ThrottleSettings& GetThrottleSettings() const{ return m_throttleSettings; }

    /**
     * <p>Specifies the application programming interface (API) throttle settings for
     * the current <a>Account</a> resource.</p>
     */
    inline void SetThrottleSettings(const ThrottleSettings& value) { m_throttleSettings = value; }

    /**
     * <p>Specifies the application programming interface (API) throttle settings for
     * the current <a>Account</a> resource.</p>
     */
    inline void SetThrottleSettings(ThrottleSettings&& value) { m_throttleSettings = value; }

    /**
     * <p>Specifies the application programming interface (API) throttle settings for
     * the current <a>Account</a> resource.</p>
     */
    inline UpdateAccountResult& WithThrottleSettings(const ThrottleSettings& value) { SetThrottleSettings(value); return *this;}

    /**
     * <p>Specifies the application programming interface (API) throttle settings for
     * the current <a>Account</a> resource.</p>
     */
    inline UpdateAccountResult& WithThrottleSettings(ThrottleSettings&& value) { SetThrottleSettings(value); return *this;}

  private:
    Aws::String m_cloudwatchRoleArn;
    ThrottleSettings m_throttleSettings;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
