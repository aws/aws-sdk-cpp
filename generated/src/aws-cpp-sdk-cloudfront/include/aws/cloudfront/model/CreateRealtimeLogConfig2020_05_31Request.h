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
  class CreateRealtimeLogConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateRealtimeLogConfig2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRealtimeLogConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data.</p>
     */
    inline const Aws::Vector<EndPoint>& GetEndPoints() const { return m_endPoints; }
    inline bool EndPointsHasBeenSet() const { return m_endPointsHasBeenSet; }
    template<typename EndPointsT = Aws::Vector<EndPoint>>
    void SetEndPoints(EndPointsT&& value) { m_endPointsHasBeenSet = true; m_endPoints = std::forward<EndPointsT>(value); }
    template<typename EndPointsT = Aws::Vector<EndPoint>>
    CreateRealtimeLogConfig2020_05_31Request& WithEndPoints(EndPointsT&& value) { SetEndPoints(std::forward<EndPointsT>(value)); return *this;}
    template<typename EndPointsT = EndPoint>
    CreateRealtimeLogConfig2020_05_31Request& AddEndPoints(EndPointsT&& value) { m_endPointsHasBeenSet = true; m_endPoints.emplace_back(std::forward<EndPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fields to include in each real-time log record.</p> <p>For more
     * information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    CreateRealtimeLogConfig2020_05_31Request& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = Aws::String>
    CreateRealtimeLogConfig2020_05_31Request& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique name to identify this real-time log configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRealtimeLogConfig2020_05_31Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling rate for this real-time log configuration. You can specify a
     * whole number between 1 and 100 (inclusive) to determine the percentage of viewer
     * requests that are represented in the real-time log data.</p>
     */
    inline long long GetSamplingRate() const { return m_samplingRate; }
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }
    inline CreateRealtimeLogConfig2020_05_31Request& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}
    ///@}
  private:

    Aws::Vector<EndPoint> m_endPoints;
    bool m_endPointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_samplingRate{0};
    bool m_samplingRateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
