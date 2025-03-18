/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableDescription.h>
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
  class RestoreTableToPointInTimeResult
  {
  public:
    AWS_DYNAMODB_API RestoreTableToPointInTimeResult() = default;
    AWS_DYNAMODB_API RestoreTableToPointInTimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API RestoreTableToPointInTimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the properties of a table.</p>
     */
    inline const TableDescription& GetTableDescription() const { return m_tableDescription; }
    template<typename TableDescriptionT = TableDescription>
    void SetTableDescription(TableDescriptionT&& value) { m_tableDescriptionHasBeenSet = true; m_tableDescription = std::forward<TableDescriptionT>(value); }
    template<typename TableDescriptionT = TableDescription>
    RestoreTableToPointInTimeResult& WithTableDescription(TableDescriptionT&& value) { SetTableDescription(std::forward<TableDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreTableToPointInTimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TableDescription m_tableDescription;
    bool m_tableDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
