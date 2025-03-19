/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The configuration details of the Kinesis Data Firehose
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/KinesisFirehoseDestinationDetails">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseDestinationDetails
  {
  public:
    AWS_ELASTICACHE_API KinesisFirehoseDestinationDetails() = default;
    AWS_ELASTICACHE_API KinesisFirehoseDestinationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API KinesisFirehoseDestinationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Kinesis Data Firehose delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStream() const { return m_deliveryStream; }
    inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }
    template<typename DeliveryStreamT = Aws::String>
    void SetDeliveryStream(DeliveryStreamT&& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = std::forward<DeliveryStreamT>(value); }
    template<typename DeliveryStreamT = Aws::String>
    KinesisFirehoseDestinationDetails& WithDeliveryStream(DeliveryStreamT&& value) { SetDeliveryStream(std::forward<DeliveryStreamT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
