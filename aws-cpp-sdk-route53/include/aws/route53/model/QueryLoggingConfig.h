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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a configuration for DNS query
   * logging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/QueryLoggingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API QueryLoggingConfig
  {
  public:
    QueryLoggingConfig();
    QueryLoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    QueryLoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline QueryLoggingConfig& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline QueryLoggingConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for a configuration for DNS query logging.</p>
     */
    inline QueryLoggingConfig& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline QueryLoggingConfig& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline QueryLoggingConfig& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that CloudWatch Logs is logging queries for. </p>
     */
    inline QueryLoggingConfig& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline QueryLoggingConfig& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline QueryLoggingConfig& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group that Amazon
     * Route 53 is publishing logs to.</p>
     */
    inline QueryLoggingConfig& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
