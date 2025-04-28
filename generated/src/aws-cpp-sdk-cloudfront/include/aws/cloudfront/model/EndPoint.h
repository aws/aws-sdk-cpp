/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/KinesisStreamConfig.h>
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
   * <p>Contains information about the Amazon Kinesis data stream where you're
   * sending real-time log data in a real-time log configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/EndPoint">AWS
   * API Reference</a></p>
   */
  class EndPoint
  {
  public:
    AWS_CLOUDFRONT_API EndPoint() = default;
    AWS_CLOUDFRONT_API EndPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API EndPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of data stream where you are sending real-time log data. The only
     * valid value is <code>Kinesis</code>.</p>
     */
    inline const Aws::String& GetStreamType() const { return m_streamType; }
    inline bool StreamTypeHasBeenSet() const { return m_streamTypeHasBeenSet; }
    template<typename StreamTypeT = Aws::String>
    void SetStreamType(StreamTypeT&& value) { m_streamTypeHasBeenSet = true; m_streamType = std::forward<StreamTypeT>(value); }
    template<typename StreamTypeT = Aws::String>
    EndPoint& WithStreamType(StreamTypeT&& value) { SetStreamType(std::forward<StreamTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon Kinesis data stream where you are
     * sending real-time log data in a real-time log configuration.</p>
     */
    inline const KinesisStreamConfig& GetKinesisStreamConfig() const { return m_kinesisStreamConfig; }
    inline bool KinesisStreamConfigHasBeenSet() const { return m_kinesisStreamConfigHasBeenSet; }
    template<typename KinesisStreamConfigT = KinesisStreamConfig>
    void SetKinesisStreamConfig(KinesisStreamConfigT&& value) { m_kinesisStreamConfigHasBeenSet = true; m_kinesisStreamConfig = std::forward<KinesisStreamConfigT>(value); }
    template<typename KinesisStreamConfigT = KinesisStreamConfig>
    EndPoint& WithKinesisStreamConfig(KinesisStreamConfigT&& value) { SetKinesisStreamConfig(std::forward<KinesisStreamConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamType;
    bool m_streamTypeHasBeenSet = false;

    KinesisStreamConfig m_kinesisStreamConfig;
    bool m_kinesisStreamConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
