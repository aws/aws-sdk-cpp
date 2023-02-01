/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/SnsFormat.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about the SNS topic to which you want to send your
   * alerts and the IAM role that has access to that topic.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/SNSConfiguration">AWS
   * API Reference</a></p>
   */
  class SNSConfiguration
  {
  public:
    AWS_LOOKOUTMETRICS_API SNSConfiguration();
    AWS_LOOKOUTMETRICS_API SNSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API SNSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline SNSConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline SNSConfiguration& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline const SnsFormat& GetSnsFormat() const{ return m_snsFormat; }

    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline bool SnsFormatHasBeenSet() const { return m_snsFormatHasBeenSet; }

    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline void SetSnsFormat(const SnsFormat& value) { m_snsFormatHasBeenSet = true; m_snsFormat = value; }

    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline void SetSnsFormat(SnsFormat&& value) { m_snsFormatHasBeenSet = true; m_snsFormat = std::move(value); }

    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline SNSConfiguration& WithSnsFormat(const SnsFormat& value) { SetSnsFormat(value); return *this;}

    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline SNSConfiguration& WithSnsFormat(SnsFormat&& value) { SetSnsFormat(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    SnsFormat m_snsFormat;
    bool m_snsFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
