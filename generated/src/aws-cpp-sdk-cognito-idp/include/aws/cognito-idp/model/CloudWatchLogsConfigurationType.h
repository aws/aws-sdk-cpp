/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Configuration for the CloudWatch log group destination of user pool detailed
   * activity logging, or of user activity log export with advanced security
   * features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CloudWatchLogsConfigurationType">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CloudWatchLogsConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API CloudWatchLogsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CloudWatchLogsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of a CloudWatch Logs log group where your user
     * pool sends logs. The log group must not be encrypted with Key Management Service
     * and must be in the same Amazon Web Services account as your user pool.</p> <p>To
     * send logs to log groups with a resource policy of a size greater than 5120
     * characters, configure a log group with a path that starts with
     * <code>/aws/vendedlogs</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AWS-logs-and-resource-policy.html">Enabling
     * logging from certain Amazon Web Services services</a>.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }
    inline CloudWatchLogsConfigurationType& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}
    inline CloudWatchLogsConfigurationType& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}
    inline CloudWatchLogsConfigurationType& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
