/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/DestinationStatus.h>
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
    AWS_DYNAMODB_API KinesisDataStreamDestination();
    AWS_DYNAMODB_API KinesisDataStreamDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KinesisDataStreamDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline KinesisDataStreamDestination& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline KinesisDataStreamDestination& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for a specific Kinesis data stream.</p>
     */
    inline KinesisDataStreamDestination& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The current status of replication.</p>
     */
    inline const DestinationStatus& GetDestinationStatus() const{ return m_destinationStatus; }

    /**
     * <p>The current status of replication.</p>
     */
    inline bool DestinationStatusHasBeenSet() const { return m_destinationStatusHasBeenSet; }

    /**
     * <p>The current status of replication.</p>
     */
    inline void SetDestinationStatus(const DestinationStatus& value) { m_destinationStatusHasBeenSet = true; m_destinationStatus = value; }

    /**
     * <p>The current status of replication.</p>
     */
    inline void SetDestinationStatus(DestinationStatus&& value) { m_destinationStatusHasBeenSet = true; m_destinationStatus = std::move(value); }

    /**
     * <p>The current status of replication.</p>
     */
    inline KinesisDataStreamDestination& WithDestinationStatus(const DestinationStatus& value) { SetDestinationStatus(value); return *this;}

    /**
     * <p>The current status of replication.</p>
     */
    inline KinesisDataStreamDestination& WithDestinationStatus(DestinationStatus&& value) { SetDestinationStatus(std::move(value)); return *this;}


    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline const Aws::String& GetDestinationStatusDescription() const{ return m_destinationStatusDescription; }

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline bool DestinationStatusDescriptionHasBeenSet() const { return m_destinationStatusDescriptionHasBeenSet; }

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline void SetDestinationStatusDescription(const Aws::String& value) { m_destinationStatusDescriptionHasBeenSet = true; m_destinationStatusDescription = value; }

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline void SetDestinationStatusDescription(Aws::String&& value) { m_destinationStatusDescriptionHasBeenSet = true; m_destinationStatusDescription = std::move(value); }

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline void SetDestinationStatusDescription(const char* value) { m_destinationStatusDescriptionHasBeenSet = true; m_destinationStatusDescription.assign(value); }

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline KinesisDataStreamDestination& WithDestinationStatusDescription(const Aws::String& value) { SetDestinationStatusDescription(value); return *this;}

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline KinesisDataStreamDestination& WithDestinationStatusDescription(Aws::String&& value) { SetDestinationStatusDescription(std::move(value)); return *this;}

    /**
     * <p>The human-readable string that corresponds to the replica status.</p>
     */
    inline KinesisDataStreamDestination& WithDestinationStatusDescription(const char* value) { SetDestinationStatusDescription(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    DestinationStatus m_destinationStatus;
    bool m_destinationStatusHasBeenSet = false;

    Aws::String m_destinationStatusDescription;
    bool m_destinationStatusDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
