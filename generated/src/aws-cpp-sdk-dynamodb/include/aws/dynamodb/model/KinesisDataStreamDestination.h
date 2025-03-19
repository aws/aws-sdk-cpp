/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/DestinationStatus.h>
#include <aws/dynamodb/model/ApproximateCreationDateTimePrecision.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Describes a Kinesis data stream destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/KinesisDataStreamDestination">AWS
   * API Reference</a></p>
   */
  class KinesisDataStreamDestination
  {
  public:
    AWS_DYNAMODB_API KinesisDataStreamDestination() = default;
    AWS_DYNAMODB_API KinesisDataStreamDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KinesisDataStreamDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    KinesisDataStreamDestination& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of replication.</p>
     */
    inline DestinationStatus GetDestinationStatus() const { return m_destinationStatus; }
    inline bool DestinationStatusHasBeenSet() const { return m_destinationStatusHasBeenSet; }
    inline void SetDestinationStatus(DestinationStatus value) { m_destinationStatusHasBeenSet = true; m_destinationStatus = value; }
    inline KinesisDataStreamDestination& WithDestinationStatus(DestinationStatus value) { SetDestinationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline const Aws::String& GetDestinationStatusDescription() const { return m_destinationStatusDescription; }
    inline bool DestinationStatusDescriptionHasBeenSet() const { return m_destinationStatusDescriptionHasBeenSet; }
    template<typename DestinationStatusDescriptionT = Aws::String>
    void SetDestinationStatusDescription(DestinationStatusDescriptionT&& value) { m_destinationStatusDescriptionHasBeenSet = true; m_destinationStatusDescription = std::forward<DestinationStatusDescriptionT>(value); }
    template<typename DestinationStatusDescriptionT = Aws::String>
    KinesisDataStreamDestination& WithDestinationStatusDescription(DestinationStatusDescriptionT&& value) { SetDestinationStatusDescription(std::forward<DestinationStatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The precision of the Kinesis data stream timestamp. The values are either
     * <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline ApproximateCreationDateTimePrecision GetApproximateCreationDateTimePrecision() const { return m_approximateCreationDateTimePrecision; }
    inline bool ApproximateCreationDateTimePrecisionHasBeenSet() const { return m_approximateCreationDateTimePrecisionHasBeenSet; }
    inline void SetApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision value) { m_approximateCreationDateTimePrecisionHasBeenSet = true; m_approximateCreationDateTimePrecision = value; }
    inline KinesisDataStreamDestination& WithApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision value) { SetApproximateCreationDateTimePrecision(value); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    DestinationStatus m_destinationStatus{DestinationStatus::NOT_SET};
    bool m_destinationStatusHasBeenSet = false;

    Aws::String m_destinationStatusDescription;
    bool m_destinationStatusDescriptionHasBeenSet = false;

    ApproximateCreationDateTimePrecision m_approximateCreationDateTimePrecision{ApproximateCreationDateTimePrecision::NOT_SET};
    bool m_approximateCreationDateTimePrecisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
