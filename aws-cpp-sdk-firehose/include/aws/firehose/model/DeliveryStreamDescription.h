/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/DeliveryStreamStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/DestinationDescription.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains information about a delivery stream.</p>
   */
  class AWS_FIREHOSE_API DeliveryStreamDescription
  {
  public:
    DeliveryStreamDescription();
    DeliveryStreamDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    DeliveryStreamDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}

    /**
     * <p>The status of the delivery stream.</p>
     */
    inline const DeliveryStreamStatus& GetDeliveryStreamStatus() const{ return m_deliveryStreamStatus; }

    /**
     * <p>The status of the delivery stream.</p>
     */
    inline void SetDeliveryStreamStatus(const DeliveryStreamStatus& value) { m_deliveryStreamStatusHasBeenSet = true; m_deliveryStreamStatus = value; }

    /**
     * <p>The status of the delivery stream.</p>
     */
    inline void SetDeliveryStreamStatus(DeliveryStreamStatus&& value) { m_deliveryStreamStatusHasBeenSet = true; m_deliveryStreamStatus = value; }

    /**
     * <p>The status of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamStatus(const DeliveryStreamStatus& value) { SetDeliveryStreamStatus(value); return *this;}

    /**
     * <p>The status of the delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithDeliveryStreamStatus(DeliveryStreamStatus&& value) { SetDeliveryStreamStatus(value); return *this;}

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithVersionId(Aws::String&& value) { SetVersionId(value); return *this;}

    /**
     * <p>Used when calling the <a>UpdateDestination</a> operation. Each time the
     * destination is updated for the delivery stream, the VersionId is changed, and
     * the current VersionId is required when updating the destination. This is so that
     * the service knows it is applying the changes to the correct version of the
     * delivery stream.</p>
     */
    inline DeliveryStreamDescription& WithVersionId(const char* value) { SetVersionId(value); return *this;}

    /**
     * <p>The date and time that the delivery stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time that the delivery stream was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time that the delivery stream was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time that the delivery stream was created.</p>
     */
    inline DeliveryStreamDescription& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time that the delivery stream was created.</p>
     */
    inline DeliveryStreamDescription& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time that the delivery stream was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }

    /**
     * <p>The date and time that the delivery stream was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }

    /**
     * <p>The date and time that the delivery stream was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }

    /**
     * <p>The date and time that the delivery stream was last updated.</p>
     */
    inline DeliveryStreamDescription& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The date and time that the delivery stream was last updated.</p>
     */
    inline DeliveryStreamDescription& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline const Aws::Vector<DestinationDescription>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(const Aws::Vector<DestinationDescription>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(Aws::Vector<DestinationDescription>&& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destinations.</p>
     */
    inline DeliveryStreamDescription& WithDestinations(const Aws::Vector<DestinationDescription>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline DeliveryStreamDescription& WithDestinations(Aws::Vector<DestinationDescription>&& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline DeliveryStreamDescription& AddDestinations(const DestinationDescription& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The destinations.</p>
     */
    inline DeliveryStreamDescription& AddDestinations(DestinationDescription&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>Indicates whether there are more destinations available to list.</p>
     */
    inline bool GetHasMoreDestinations() const{ return m_hasMoreDestinations; }

    /**
     * <p>Indicates whether there are more destinations available to list.</p>
     */
    inline void SetHasMoreDestinations(bool value) { m_hasMoreDestinationsHasBeenSet = true; m_hasMoreDestinations = value; }

    /**
     * <p>Indicates whether there are more destinations available to list.</p>
     */
    inline DeliveryStreamDescription& WithHasMoreDestinations(bool value) { SetHasMoreDestinations(value); return *this;}

  private:
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet;
    DeliveryStreamStatus m_deliveryStreamStatus;
    bool m_deliveryStreamStatusHasBeenSet;
    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;
    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;
    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet;
    Aws::Vector<DestinationDescription> m_destinations;
    bool m_destinationsHasBeenSet;
    bool m_hasMoreDestinations;
    bool m_hasMoreDestinationsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
