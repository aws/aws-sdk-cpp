/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableAutoScalingDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult() = default;
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeTableReplicaAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the auto scaling properties of the table.</p>
     */
    inline const TableAutoScalingDescription& GetTableAutoScalingDescription() const { return m_tableAutoScalingDescription; }
    template<typename TableAutoScalingDescriptionT = TableAutoScalingDescription>
    void SetTableAutoScalingDescription(TableAutoScalingDescriptionT&& value) { m_tableAutoScalingDescriptionHasBeenSet = true; m_tableAutoScalingDescription = std::forward<TableAutoScalingDescriptionT>(value); }
    template<typename TableAutoScalingDescriptionT = TableAutoScalingDescription>
    DescribeTableReplicaAutoScalingResult& WithTableAutoScalingDescription(TableAutoScalingDescriptionT&& value) { SetTableAutoScalingDescription(std::forward<TableAutoScalingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTableReplicaAutoScalingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TableAutoScalingDescription m_tableAutoScalingDescription;
    bool m_tableAutoScalingDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
