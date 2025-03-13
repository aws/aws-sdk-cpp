/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  /**
   * <p>Represents the output of a <code>ListTables</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTablesOutput">AWS
   * API Reference</a></p>
   */
  class ListTablesResult
  {
  public:
    AWS_DYNAMODB_API ListTablesResult() = default;
    AWS_DYNAMODB_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <code>LastEvaluatedTableName</code> also appears in the output, you can use this
     * value as the <code>ExclusiveStartTableName</code> parameter in a subsequent
     * <code>ListTables</code> request and obtain the next page of results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTableNames() const { return m_tableNames; }
    template<typename TableNamesT = Aws::Vector<Aws::String>>
    void SetTableNames(TableNamesT&& value) { m_tableNamesHasBeenSet = true; m_tableNames = std::forward<TableNamesT>(value); }
    template<typename TableNamesT = Aws::Vector<Aws::String>>
    ListTablesResult& WithTableNames(TableNamesT&& value) { SetTableNames(std::forward<TableNamesT>(value)); return *this;}
    template<typename TableNamesT = Aws::String>
    ListTablesResult& AddTableNames(TableNamesT&& value) { m_tableNamesHasBeenSet = true; m_tableNames.emplace_back(std::forward<TableNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <code>ExclusiveStartTableName</code> in a new request to obtain the next
     * page of results, until all the table names are returned.</p> <p>If you do not
     * receive a <code>LastEvaluatedTableName</code> value in the response, this means
     * that there are no more table names to be retrieved.</p>
     */
    inline const Aws::String& GetLastEvaluatedTableName() const { return m_lastEvaluatedTableName; }
    template<typename LastEvaluatedTableNameT = Aws::String>
    void SetLastEvaluatedTableName(LastEvaluatedTableNameT&& value) { m_lastEvaluatedTableNameHasBeenSet = true; m_lastEvaluatedTableName = std::forward<LastEvaluatedTableNameT>(value); }
    template<typename LastEvaluatedTableNameT = Aws::String>
    ListTablesResult& WithLastEvaluatedTableName(LastEvaluatedTableNameT&& value) { SetLastEvaluatedTableName(std::forward<LastEvaluatedTableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tableNames;
    bool m_tableNamesHasBeenSet = false;

    Aws::String m_lastEvaluatedTableName;
    bool m_lastEvaluatedTableNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
