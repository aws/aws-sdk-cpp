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
    AWS_LOOKOUTMETRICS_API SNSConfiguration() = default;
    AWS_LOOKOUTMETRICS_API SNSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API SNSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that has access to the target SNS topic.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SNSConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    SNSConfiguration& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the SNS topic.</p> <ul> <li> <p> <code>JSON</code> – Send JSON
     * alerts with an anomaly ID and a link to the anomaly detail page. This is the
     * default.</p> </li> <li> <p> <code>LONG_TEXT</code> – Send human-readable alerts
     * with information about the impacted timeseries and a link to the anomaly detail
     * page. We recommend this for email.</p> </li> <li> <p> <code>SHORT_TEXT</code> –
     * Send human-readable alerts with a link to the anomaly detail page. We recommend
     * this for SMS.</p> </li> </ul>
     */
    inline SnsFormat GetSnsFormat() const { return m_snsFormat; }
    inline bool SnsFormatHasBeenSet() const { return m_snsFormatHasBeenSet; }
    inline void SetSnsFormat(SnsFormat value) { m_snsFormatHasBeenSet = true; m_snsFormat = value; }
    inline SNSConfiguration& WithSnsFormat(SnsFormat value) { SetSnsFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    SnsFormat m_snsFormat{SnsFormat::NOT_SET};
    bool m_snsFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
