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
  class ListTablesResult
  {
  public:
    AWS_DYNAMODB_API ListTablesResult();
    AWS_DYNAMODB_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetTableNames() const{ return m_tableNames; }
    inline void SetTableNames(const Aws::Vector<Aws::String>& value) { m_tableNames = value; }
    inline void SetTableNames(Aws::Vector<Aws::String>&& value) { m_tableNames = std::move(value); }
    inline ListTablesResult& WithTableNames(const Aws::Vector<Aws::String>& value) { SetTableNames(value); return *this;}
    inline ListTablesResult& WithTableNames(Aws::Vector<Aws::String>&& value) { SetTableNames(std::move(value)); return *this;}
    inline ListTablesResult& AddTableNames(const Aws::String& value) { m_tableNames.push_back(value); return *this; }
    inline ListTablesResult& AddTableNames(Aws::String&& value) { m_tableNames.push_back(std::move(value)); return *this; }
    inline ListTablesResult& AddTableNames(const char* value) { m_tableNames.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetLastEvaluatedTableName() const{ return m_lastEvaluatedTableName; }
    inline void SetLastEvaluatedTableName(const Aws::String& value) { m_lastEvaluatedTableName = value; }
    inline void SetLastEvaluatedTableName(Aws::String&& value) { m_lastEvaluatedTableName = std::move(value); }
    inline void SetLastEvaluatedTableName(const char* value) { m_lastEvaluatedTableName.assign(value); }
    inline ListTablesResult& WithLastEvaluatedTableName(const Aws::String& value) { SetLastEvaluatedTableName(value); return *this;}
    inline ListTablesResult& WithLastEvaluatedTableName(Aws::String&& value) { SetLastEvaluatedTableName(std::move(value)); return *this;}
    inline ListTablesResult& WithLastEvaluatedTableName(const char* value) { SetLastEvaluatedTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tableNames;

    Aws::String m_lastEvaluatedTableName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
