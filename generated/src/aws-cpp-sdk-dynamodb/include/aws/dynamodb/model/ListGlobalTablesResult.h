/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/GlobalTable.h>
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
  class ListGlobalTablesResult
  {
  public:
    AWS_DYNAMODB_API ListGlobalTablesResult() = default;
    AWS_DYNAMODB_API ListGlobalTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListGlobalTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of global table names.</p>
     */
    inline const Aws::Vector<GlobalTable>& GetGlobalTables() const { return m_globalTables; }
    template<typename GlobalTablesT = Aws::Vector<GlobalTable>>
    void SetGlobalTables(GlobalTablesT&& value) { m_globalTablesHasBeenSet = true; m_globalTables = std::forward<GlobalTablesT>(value); }
    template<typename GlobalTablesT = Aws::Vector<GlobalTable>>
    ListGlobalTablesResult& WithGlobalTables(GlobalTablesT&& value) { SetGlobalTables(std::forward<GlobalTablesT>(value)); return *this;}
    template<typename GlobalTablesT = GlobalTable>
    ListGlobalTablesResult& AddGlobalTables(GlobalTablesT&& value) { m_globalTablesHasBeenSet = true; m_globalTables.emplace_back(std::forward<GlobalTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Last evaluated global table name.</p>
     */
    inline const Aws::String& GetLastEvaluatedGlobalTableName() const { return m_lastEvaluatedGlobalTableName; }
    template<typename LastEvaluatedGlobalTableNameT = Aws::String>
    void SetLastEvaluatedGlobalTableName(LastEvaluatedGlobalTableNameT&& value) { m_lastEvaluatedGlobalTableNameHasBeenSet = true; m_lastEvaluatedGlobalTableName = std::forward<LastEvaluatedGlobalTableNameT>(value); }
    template<typename LastEvaluatedGlobalTableNameT = Aws::String>
    ListGlobalTablesResult& WithLastEvaluatedGlobalTableName(LastEvaluatedGlobalTableNameT&& value) { SetLastEvaluatedGlobalTableName(std::forward<LastEvaluatedGlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGlobalTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GlobalTable> m_globalTables;
    bool m_globalTablesHasBeenSet = false;

    Aws::String m_lastEvaluatedGlobalTableName;
    bool m_lastEvaluatedGlobalTableNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
