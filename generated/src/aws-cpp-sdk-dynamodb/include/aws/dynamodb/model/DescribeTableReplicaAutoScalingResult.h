/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableAutoScalingDescription.h>
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
  class DescribeTableReplicaAutoScalingResult
  {
  public:
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult();
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline const TableAutoScalingDescription& GetTableAutoScalingDescription() const{ return m_tableAutoScalingDescription; }

    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline void SetTableAutoScalingDescription(const TableAutoScalingDescription& value) { m_tableAutoScalingDescription = value; }

    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline void SetTableAutoScalingDescription(TableAutoScalingDescription&& value) { m_tableAutoScalingDescription = std::move(value); }

    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline DescribeTableReplicaAutoScalingResult& WithTableAutoScalingDescription(const TableAutoScalingDescription& value) { SetTableAutoScalingDescription(value); return *this;}

    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline DescribeTableReplicaAutoScalingResult& WithTableAutoScalingDescription(TableAutoScalingDescription&& value) { SetTableAutoScalingDescription(std::move(value)); return *this;}

  private:

    TableAutoScalingDescription m_tableAutoScalingDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
