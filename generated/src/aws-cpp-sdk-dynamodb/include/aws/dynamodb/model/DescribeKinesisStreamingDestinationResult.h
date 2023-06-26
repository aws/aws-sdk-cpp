/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/KinesisDataStreamDestination.h>
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
  class DescribeKinesisStreamingDestinationResult
  {
  public:
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult();
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the table being described.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline const Aws::Vector<KinesisDataStreamDestination>& GetKinesisDataStreamDestinations() const{ return m_kinesisDataStreamDestinations; }

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline void SetKinesisDataStreamDestinations(const Aws::Vector<KinesisDataStreamDestination>& value) { m_kinesisDataStreamDestinations = value; }

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline void SetKinesisDataStreamDestinations(Aws::Vector<KinesisDataStreamDestination>&& value) { m_kinesisDataStreamDestinations = std::move(value); }

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& WithKinesisDataStreamDestinations(const Aws::Vector<KinesisDataStreamDestination>& value) { SetKinesisDataStreamDestinations(value); return *this;}

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& WithKinesisDataStreamDestinations(Aws::Vector<KinesisDataStreamDestination>&& value) { SetKinesisDataStreamDestinations(std::move(value)); return *this;}

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& AddKinesisDataStreamDestinations(const KinesisDataStreamDestination& value) { m_kinesisDataStreamDestinations.push_back(value); return *this; }

    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline DescribeKinesisStreamingDestinationResult& AddKinesisDataStreamDestinations(KinesisDataStreamDestination&& value) { m_kinesisDataStreamDestinations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKinesisStreamingDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKinesisStreamingDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKinesisStreamingDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_tableName;

    Aws::Vector<KinesisDataStreamDestination> m_kinesisDataStreamDestinations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
