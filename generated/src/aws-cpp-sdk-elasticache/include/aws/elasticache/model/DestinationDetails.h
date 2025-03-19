/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/CloudWatchLogsDestinationDetails.h>
#include <aws/elasticache/model/KinesisFirehoseDestinationDetails.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
   * Firehose destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DestinationDetails">AWS
   * API Reference</a></p>
   */
  class DestinationDetails
  {
  public:
    AWS_ELASTICACHE_API DestinationDetails() = default;
    AWS_ELASTICACHE_API DestinationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API DestinationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The configuration details of the CloudWatch Logs destination.</p>
     */
    inline const CloudWatchLogsDestinationDetails& GetCloudWatchLogsDetails() const { return m_cloudWatchLogsDetails; }
    inline bool CloudWatchLogsDetailsHasBeenSet() const { return m_cloudWatchLogsDetailsHasBeenSet; }
    template<typename CloudWatchLogsDetailsT = CloudWatchLogsDestinationDetails>
    void SetCloudWatchLogsDetails(CloudWatchLogsDetailsT&& value) { m_cloudWatchLogsDetailsHasBeenSet = true; m_cloudWatchLogsDetails = std::forward<CloudWatchLogsDetailsT>(value); }
    template<typename CloudWatchLogsDetailsT = CloudWatchLogsDestinationDetails>
    DestinationDetails& WithCloudWatchLogsDetails(CloudWatchLogsDetailsT&& value) { SetCloudWatchLogsDetails(std::forward<CloudWatchLogsDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the Kinesis Data Firehose destination.</p>
     */
    inline const KinesisFirehoseDestinationDetails& GetKinesisFirehoseDetails() const { return m_kinesisFirehoseDetails; }
    inline bool KinesisFirehoseDetailsHasBeenSet() const { return m_kinesisFirehoseDetailsHasBeenSet; }
    template<typename KinesisFirehoseDetailsT = KinesisFirehoseDestinationDetails>
    void SetKinesisFirehoseDetails(KinesisFirehoseDetailsT&& value) { m_kinesisFirehoseDetailsHasBeenSet = true; m_kinesisFirehoseDetails = std::forward<KinesisFirehoseDetailsT>(value); }
    template<typename KinesisFirehoseDetailsT = KinesisFirehoseDestinationDetails>
    DestinationDetails& WithKinesisFirehoseDetails(KinesisFirehoseDetailsT&& value) { SetKinesisFirehoseDetails(std::forward<KinesisFirehoseDetailsT>(value)); return *this;}
    ///@}
  private:

    CloudWatchLogsDestinationDetails m_cloudWatchLogsDetails;
    bool m_cloudWatchLogsDetailsHasBeenSet = false;

    KinesisFirehoseDestinationDetails m_kinesisFirehoseDetails;
    bool m_kinesisFirehoseDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
