/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/DeliveryStreamStatus.h>
#include <aws/firehose/model/FailureDescription.h>
#include <aws/firehose/model/DeliveryStreamEncryptionConfiguration.h>
#include <aws/firehose/model/DeliveryStreamType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/firehose/model/SourceDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/DestinationDescription.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains information about a Firehose stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DeliveryStreamDescription">AWS
   * API Reference</a></p>
   */
  class DeliveryStreamDescription
  {
  public:
    AWS_FIREHOSE_API DeliveryStreamDescription();
    AWS_FIREHOSE_API DeliveryStreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DeliveryStreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }
    inline DeliveryStreamDescription& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Firehose stream. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }
    inline bool DeliveryStreamARNHasBeenSet() const { return m_deliveryStreamARNHasBeenSet; }
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::move(value); }
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }
    inline DeliveryStreamDescription& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Firehose stream. If the status of a Firehose stream is
     * <code>CREATING_FAILED</code>, this status doesn't change, and you can't invoke
     * <code>CreateDeliveryStream</code> again on it. However, you can invoke the
     * <a>DeleteDeliveryStream</a> operation to delete it.</p>
     */
    inline const DeliveryStreamStatus& GetDeliveryStreamStatus() const{ return m_deliveryStreamStatus; }
    inline bool DeliveryStreamStatusHasBeenSet() const { return m_deliveryStreamStatusHasBeenSet; }
    inline void SetDeliveryStreamStatus(const DeliveryStreamStatus& value) { m_deliveryStreamStatusHasBeenSet = true; m_deliveryStreamStatus = value; }
    inline void SetDeliveryStreamStatus(DeliveryStreamStatus&& value) { m_deliveryStreamStatusHasBeenSet = true; m_deliveryStreamStatus = std::move(value); }
    inline DeliveryStreamDescription& WithDeliveryStreamStatus(const DeliveryStreamStatus& value) { SetDeliveryStreamStatus(value); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamStatus(DeliveryStreamStatus&& value) { SetDeliveryStreamStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline const FailureDescription& GetFailureDescription() const{ return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    inline void SetFailureDescription(const FailureDescription& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = value; }
    inline void SetFailureDescription(FailureDescription&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::move(value); }
    inline DeliveryStreamDescription& WithFailureDescription(const FailureDescription& value) { SetFailureDescription(value); return *this;}
    inline DeliveryStreamDescription& WithFailureDescription(FailureDescription&& value) { SetFailureDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the server-side encryption (SSE) status for the Firehose
     * stream.</p>
     */
    inline const DeliveryStreamEncryptionConfiguration& GetDeliveryStreamEncryptionConfiguration() const{ return m_deliveryStreamEncryptionConfiguration; }
    inline bool DeliveryStreamEncryptionConfigurationHasBeenSet() const { return m_deliveryStreamEncryptionConfigurationHasBeenSet; }
    inline void SetDeliveryStreamEncryptionConfiguration(const DeliveryStreamEncryptionConfiguration& value) { m_deliveryStreamEncryptionConfigurationHasBeenSet = true; m_deliveryStreamEncryptionConfiguration = value; }
    inline void SetDeliveryStreamEncryptionConfiguration(DeliveryStreamEncryptionConfiguration&& value) { m_deliveryStreamEncryptionConfigurationHasBeenSet = true; m_deliveryStreamEncryptionConfiguration = std::move(value); }
    inline DeliveryStreamDescription& WithDeliveryStreamEncryptionConfiguration(const DeliveryStreamEncryptionConfiguration& value) { SetDeliveryStreamEncryptionConfiguration(value); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamEncryptionConfiguration(DeliveryStreamEncryptionConfiguration&& value) { SetDeliveryStreamEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Firehose stream type. This can be one of the following values:</p> <ul>
     * <li> <p> <code>DirectPut</code>: Provider applications access the Firehose
     * stream directly.</p> </li> <li> <p> <code>KinesisStreamAsSource</code>: The
     * Firehose stream uses a Kinesis data stream as a source.</p> </li> </ul>
     */
    inline const DeliveryStreamType& GetDeliveryStreamType() const{ return m_deliveryStreamType; }
    inline bool DeliveryStreamTypeHasBeenSet() const { return m_deliveryStreamTypeHasBeenSet; }
    inline void SetDeliveryStreamType(const DeliveryStreamType& value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = value; }
    inline void SetDeliveryStreamType(DeliveryStreamType&& value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = std::move(value); }
    inline DeliveryStreamDescription& WithDeliveryStreamType(const DeliveryStreamType& value) { SetDeliveryStreamType(value); return *this;}
    inline DeliveryStreamDescription& WithDeliveryStreamType(DeliveryStreamType&& value) { SetDeliveryStreamType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each time the destination is updated for a Firehose stream, the version ID is
     * changed, and the current version ID is required when updating the destination.
     * This is so that the service knows it is applying the changes to the correct
     * version of the delivery stream.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline DeliveryStreamDescription& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline DeliveryStreamDescription& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline DeliveryStreamDescription& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Firehose stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }
    inline DeliveryStreamDescription& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}
    inline DeliveryStreamDescription& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Firehose stream was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }
    inline DeliveryStreamDescription& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}
    inline DeliveryStreamDescription& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>DeliveryStreamType</code> parameter is
     * <code>KinesisStreamAsSource</code>, a <a>SourceDescription</a> object describing
     * the source Kinesis data stream.</p>
     */
    inline const SourceDescription& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const SourceDescription& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(SourceDescription&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline DeliveryStreamDescription& WithSource(const SourceDescription& value) { SetSource(value); return *this;}
    inline DeliveryStreamDescription& WithSource(SourceDescription&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destinations.</p>
     */
    inline const Aws::Vector<DestinationDescription>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<DestinationDescription>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<DestinationDescription>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline DeliveryStreamDescription& WithDestinations(const Aws::Vector<DestinationDescription>& value) { SetDestinations(value); return *this;}
    inline DeliveryStreamDescription& WithDestinations(Aws::Vector<DestinationDescription>&& value) { SetDestinations(std::move(value)); return *this;}
    inline DeliveryStreamDescription& AddDestinations(const DestinationDescription& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline DeliveryStreamDescription& AddDestinations(DestinationDescription&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more destinations available to list.</p>
     */
    inline bool GetHasMoreDestinations() const{ return m_hasMoreDestinations; }
    inline bool HasMoreDestinationsHasBeenSet() const { return m_hasMoreDestinationsHasBeenSet; }
    inline void SetHasMoreDestinations(bool value) { m_hasMoreDestinationsHasBeenSet = true; m_hasMoreDestinations = value; }
    inline DeliveryStreamDescription& WithHasMoreDestinations(bool value) { SetHasMoreDestinations(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet = false;

    DeliveryStreamStatus m_deliveryStreamStatus;
    bool m_deliveryStreamStatusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;

    DeliveryStreamEncryptionConfiguration m_deliveryStreamEncryptionConfiguration;
    bool m_deliveryStreamEncryptionConfigurationHasBeenSet = false;

    DeliveryStreamType m_deliveryStreamType;
    bool m_deliveryStreamTypeHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    SourceDescription m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<DestinationDescription> m_destinations;
    bool m_destinationsHasBeenSet = false;

    bool m_hasMoreDestinations;
    bool m_hasMoreDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
