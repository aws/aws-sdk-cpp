/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Kinesis data stream where you are
   * sending real-time log data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KinesisStreamConfig">AWS
   * API Reference</a></p>
   */
  class KinesisStreamConfig
  {
  public:
    AWS_CLOUDFRONT_API KinesisStreamConfig();
    AWS_CLOUDFRONT_API KinesisStreamConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KinesisStreamConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline KinesisStreamConfig& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline KinesisStreamConfig& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFront can use to send real-time log data to your Kinesis data
     * stream.</p> <p>For more information the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-iam-role">Real-time
     * log configuration IAM role</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline KinesisStreamConfig& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline KinesisStreamConfig& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline KinesisStreamConfig& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline KinesisStreamConfig& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
