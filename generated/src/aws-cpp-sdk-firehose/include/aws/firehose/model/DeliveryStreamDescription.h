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
    AWS_FIREHOSE_API DeliveryStreamDescription() = default;
    AWS_FIREHOSE_API DeliveryStreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DeliveryStreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    DeliveryStreamDescription& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Firehose stream. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const { return m_deliveryStreamARN; }
    inline bool DeliveryStreamARNHasBeenSet() const { return m_deliveryStreamARNHasBeenSet; }
    template<typename DeliveryStreamARNT = Aws::String>
    void SetDeliveryStreamARN(DeliveryStreamARNT&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::forward<DeliveryStreamARNT>(value); }
    template<typename DeliveryStreamARNT = Aws::String>
    DeliveryStreamDescription& WithDeliveryStreamARN(DeliveryStreamARNT&& value) { SetDeliveryStreamARN(std::forward<DeliveryStreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Firehose stream. If the status of a Firehose stream is
     * <code>CREATING_FAILED</code>, this status doesn't change, and you can't invoke
     * <code>CreateDeliveryStream</code> again on it. However, you can invoke the
     * <a>DeleteDeliveryStream</a> operation to delete it.</p>
     */
    inline DeliveryStreamStatus GetDeliveryStreamStatus() const { return m_deliveryStreamStatus; }
    inline bool DeliveryStreamStatusHasBeenSet() const { return m_deliveryStreamStatusHasBeenSet; }
    inline void SetDeliveryStreamStatus(DeliveryStreamStatus value) { m_deliveryStreamStatusHasBeenSet = true; m_deliveryStreamStatus = value; }
    inline DeliveryStreamDescription& WithDeliveryStreamStatus(DeliveryStreamStatus value) { SetDeliveryStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline const FailureDescription& GetFailureDescription() const { return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    template<typename FailureDescriptionT = FailureDescription>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = FailureDescription>
    DeliveryStreamDescription& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the server-side encryption (SSE) status for the Firehose
     * stream.</p>
     */
    inline const DeliveryStreamEncryptionConfiguration& GetDeliveryStreamEncryptionConfiguration() const { return m_deliveryStreamEncryptionConfiguration; }
    inline bool DeliveryStreamEncryptionConfigurationHasBeenSet() const { return m_deliveryStreamEncryptionConfigurationHasBeenSet; }
    template<typename DeliveryStreamEncryptionConfigurationT = DeliveryStreamEncryptionConfiguration>
    void SetDeliveryStreamEncryptionConfiguration(DeliveryStreamEncryptionConfigurationT&& value) { m_deliveryStreamEncryptionConfigurationHasBeenSet = true; m_deliveryStreamEncryptionConfiguration = std::forward<DeliveryStreamEncryptionConfigurationT>(value); }
    template<typename DeliveryStreamEncryptionConfigurationT = DeliveryStreamEncryptionConfiguration>
    DeliveryStreamDescription& WithDeliveryStreamEncryptionConfiguration(DeliveryStreamEncryptionConfigurationT&& value) { SetDeliveryStreamEncryptionConfiguration(std::forward<DeliveryStreamEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Firehose stream type. This can be one of the following values:</p> <ul>
     * <li> <p> <code>DirectPut</code>: Provider applications access the Firehose
     * stream directly.</p> </li> <li> <p> <code>KinesisStreamAsSource</code>: The
     * Firehose stream uses a Kinesis data stream as a source.</p> </li> </ul>
     */
    inline DeliveryStreamType GetDeliveryStreamType() const { return m_deliveryStreamType; }
    inline bool DeliveryStreamTypeHasBeenSet() const { return m_deliveryStreamTypeHasBeenSet; }
    inline void SetDeliveryStreamType(DeliveryStreamType value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = value; }
    inline DeliveryStreamDescription& WithDeliveryStreamType(DeliveryStreamType value) { SetDeliveryStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each time the destination is updated for a Firehose stream, the version ID is
     * changed, and the current version ID is required when updating the destination.
     * This is so that the service knows it is applying the changes to the correct
     * version of the delivery stream.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DeliveryStreamDescription& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Firehose stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    DeliveryStreamDescription& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Firehose stream was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    DeliveryStreamDescription& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>DeliveryStreamType</code> parameter is
     * <code>KinesisStreamAsSource</code>, a <a>SourceDescription</a> object describing
     * the source Kinesis data stream.</p>
     */
    inline const SourceDescription& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = SourceDescription>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = SourceDescription>
    DeliveryStreamDescription& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destinations.</p>
     */
    inline const Aws::Vector<DestinationDescription>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<DestinationDescription>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<DestinationDescription>>
    DeliveryStreamDescription& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = DestinationDescription>
    DeliveryStreamDescription& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more destinations available to list.</p>
     */
    inline bool GetHasMoreDestinations() const { return m_hasMoreDestinations; }
    inline bool HasMoreDestinationsHasBeenSet() const { return m_hasMoreDestinationsHasBeenSet; }
    inline void SetHasMoreDestinations(bool value) { m_hasMoreDestinationsHasBeenSet = true; m_hasMoreDestinations = value; }
    inline DeliveryStreamDescription& WithHasMoreDestinations(bool value) { SetHasMoreDestinations(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet = false;

    DeliveryStreamStatus m_deliveryStreamStatus{DeliveryStreamStatus::NOT_SET};
    bool m_deliveryStreamStatusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;

    DeliveryStreamEncryptionConfiguration m_deliveryStreamEncryptionConfiguration;
    bool m_deliveryStreamEncryptionConfigurationHasBeenSet = false;

    DeliveryStreamType m_deliveryStreamType{DeliveryStreamType::NOT_SET};
    bool m_deliveryStreamTypeHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    SourceDescription m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<DestinationDescription> m_destinations;
    bool m_destinationsHasBeenSet = false;

    bool m_hasMoreDestinations{false};
    bool m_hasMoreDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
