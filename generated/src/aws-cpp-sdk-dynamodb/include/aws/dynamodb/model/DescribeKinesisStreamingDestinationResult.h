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
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult() = default;
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table being described.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DescribeKinesisStreamingDestinationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of replica structures for the table being described.</p>
     */
    inline const Aws::Vector<KinesisDataStreamDestination>& GetKinesisDataStreamDestinations() const { return m_kinesisDataStreamDestinations; }
    template<typename KinesisDataStreamDestinationsT = Aws::Vector<KinesisDataStreamDestination>>
    void SetKinesisDataStreamDestinations(KinesisDataStreamDestinationsT&& value) { m_kinesisDataStreamDestinationsHasBeenSet = true; m_kinesisDataStreamDestinations = std::forward<KinesisDataStreamDestinationsT>(value); }
    template<typename KinesisDataStreamDestinationsT = Aws::Vector<KinesisDataStreamDestination>>
    DescribeKinesisStreamingDestinationResult& WithKinesisDataStreamDestinations(KinesisDataStreamDestinationsT&& value) { SetKinesisDataStreamDestinations(std::forward<KinesisDataStreamDestinationsT>(value)); return *this;}
    template<typename KinesisDataStreamDestinationsT = KinesisDataStreamDestination>
    DescribeKinesisStreamingDestinationResult& AddKinesisDataStreamDestinations(KinesisDataStreamDestinationsT&& value) { m_kinesisDataStreamDestinationsHasBeenSet = true; m_kinesisDataStreamDestinations.emplace_back(std::forward<KinesisDataStreamDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeKinesisStreamingDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<KinesisDataStreamDestination> m_kinesisDataStreamDestinations;
    bool m_kinesisDataStreamDestinationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
