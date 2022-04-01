﻿/**
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API DisableKinesisStreamingDestinationResult
  {
  public:
    DisableKinesisStreamingDestinationResult();
    DisableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisableKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the table being modified.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table being modified.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table being modified.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table being modified.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table being modified.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table being modified.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table being modified.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The current status of the replication.</p>
     */
    inline const DestinationStatus& GetDestinationStatus() const{ return m_destinationStatus; }

    /**
     * <p>The current status of the replication.</p>
     */
    inline void SetDestinationStatus(const DestinationStatus& value) { m_destinationStatus = value; }

    /**
     * <p>The current status of the replication.</p>
     */
    inline void SetDestinationStatus(DestinationStatus&& value) { m_destinationStatus = std::move(value); }

    /**
     * <p>The current status of the replication.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithDestinationStatus(const DestinationStatus& value) { SetDestinationStatus(value); return *this;}

    /**
     * <p>The current status of the replication.</p>
     */
    inline DisableKinesisStreamingDestinationResult& WithDestinationStatus(DestinationStatus&& value) { SetDestinationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;

    Aws::String m_streamArn;

    DestinationStatus m_destinationStatus;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
