/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/EndPoint.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class UpdateRealtimeLogConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateRealtimeLogConfig2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRealtimeLogConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline const Aws::Vector<EndPoint>& GetEndPoints() const{ return m_endPoints; }

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline bool EndPointsHasBeenSet() const { return m_endPointsHasBeenSet; }

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline void SetEndPoints(const Aws::Vector<EndPoint>& value) { m_endPointsHasBeenSet = true; m_endPoints = value; }

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline void SetEndPoints(Aws::Vector<EndPoint>&& value) { m_endPointsHasBeenSet = true; m_endPoints = std::move(value); }

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithEndPoints(const Aws::Vector<EndPoint>& value) { SetEndPoints(value); return *this;}

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithEndPoints(Aws::Vector<EndPoint>&& value) { SetEndPoints(std::move(value)); return *this;}

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& AddEndPoints(const EndPoint& value) { m_endPointsHasBeenSet = true; m_endPoints.push_back(value); return *this; }

    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& AddEndPoints(EndPoint&& value) { m_endPointsHasBeenSet = true; m_endPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetFields(const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetFields(Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithFields(const Aws::Vector<Aws::String>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithFields(Aws::Vector<Aws::String>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& AddFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& AddFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& AddFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }


    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this real-time log configuration.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The sampling rate for this real-time log configuration. The sampling rate
     * determines the percentage of viewer requests that are represented in the
     * real-time log data. You must provide an integer between 1 and 100,
     * inclusive.</p>
     */
    inline long long GetSamplingRate() const{ return m_samplingRate; }

    /**
     * <p>The sampling rate for this real-time log configuration. The sampling rate
     * determines the percentage of viewer requests that are represented in the
     * real-time log data. You must provide an integer between 1 and 100,
     * inclusive.</p>
     */
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }

    /**
     * <p>The sampling rate for this real-time log configuration. The sampling rate
     * determines the percentage of viewer requests that are represented in the
     * real-time log data. You must provide an integer between 1 and 100,
     * inclusive.</p>
     */
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }

    /**
     * <p>The sampling rate for this real-time log configuration. The sampling rate
     * determines the percentage of viewer requests that are represented in the
     * real-time log data. You must provide an integer between 1 and 100,
     * inclusive.</p>
     */
    inline UpdateRealtimeLogConfig2020_05_31Request& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}

  private:

    Aws::Vector<EndPoint> m_endPoints;
    bool m_endPointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    long long m_samplingRate;
    bool m_samplingRateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
