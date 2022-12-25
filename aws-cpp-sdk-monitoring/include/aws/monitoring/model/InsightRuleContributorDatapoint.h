/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>One data point related to one contributor.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetInsightRuleReport.html">GetInsightRuleReport</a>
   * and <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_InsightRuleContributor.html">InsightRuleContributor</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/InsightRuleContributorDatapoint">AWS
   * API Reference</a></p>
   */
  class InsightRuleContributorDatapoint
  {
  public:
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint();
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRuleContributorDatapoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The timestamp of the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline InsightRuleContributorDatapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline InsightRuleContributorDatapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The approximate value that this contributor added during this timestamp.</p>
     */
    inline double GetApproximateValue() const{ return m_approximateValue; }

    /**
     * <p>The approximate value that this contributor added during this timestamp.</p>
     */
    inline bool ApproximateValueHasBeenSet() const { return m_approximateValueHasBeenSet; }

    /**
     * <p>The approximate value that this contributor added during this timestamp.</p>
     */
    inline void SetApproximateValue(double value) { m_approximateValueHasBeenSet = true; m_approximateValue = value; }

    /**
     * <p>The approximate value that this contributor added during this timestamp.</p>
     */
    inline InsightRuleContributorDatapoint& WithApproximateValue(double value) { SetApproximateValue(value); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_approximateValue;
    bool m_approximateValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
