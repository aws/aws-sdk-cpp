/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/EndPoint.h>
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
   * <p>A real-time log configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/RealtimeLogConfig">AWS
   * API Reference</a></p>
   */
  class RealtimeLogConfig
  {
  public:
    AWS_CLOUDFRONT_API RealtimeLogConfig() = default;
    AWS_CLOUDFRONT_API RealtimeLogConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API RealtimeLogConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this real-time log configuration.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RealtimeLogConfig& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of this real-time log configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RealtimeLogConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling rate for this real-time log configuration. The sampling rate
     * determines the percentage of viewer requests that are represented in the
     * real-time log data. The sampling rate is an integer between 1 and 100,
     * inclusive.</p>
     */
    inline long long GetSamplingRate() const { return m_samplingRate; }
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }
    inline RealtimeLogConfig& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data for this real-time log configuration.</p>
     */
    inline const Aws::Vector<EndPoint>& GetEndPoints() const { return m_endPoints; }
    inline bool EndPointsHasBeenSet() const { return m_endPointsHasBeenSet; }
    template<typename EndPointsT = Aws::Vector<EndPoint>>
    void SetEndPoints(EndPointsT&& value) { m_endPointsHasBeenSet = true; m_endPoints = std::forward<EndPointsT>(value); }
    template<typename EndPointsT = Aws::Vector<EndPoint>>
    RealtimeLogConfig& WithEndPoints(EndPointsT&& value) { SetEndPoints(std::forward<EndPointsT>(value)); return *this;}
    template<typename EndPointsT = EndPoint>
    RealtimeLogConfig& AddEndPoints(EndPointsT&& value) { m_endPointsHasBeenSet = true; m_endPoints.emplace_back(std::forward<EndPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fields that are included in each real-time log record. In an API
     * response, the fields are provided in the same order in which they are sent to
     * the Amazon Kinesis data stream.</p> <p>For more information about fields, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html#understand-real-time-log-config-fields">Real-time
     * log configuration fields</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    RealtimeLogConfig& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = Aws::String>
    RealtimeLogConfig& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_samplingRate{0};
    bool m_samplingRateHasBeenSet = false;

    Aws::Vector<EndPoint> m_endPoints;
    bool m_endPointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
