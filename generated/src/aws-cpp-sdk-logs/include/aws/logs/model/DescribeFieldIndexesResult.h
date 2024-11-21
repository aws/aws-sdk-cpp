/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/FieldIndex.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeFieldIndexesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult();
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the field index information.</p>
     */
    inline const Aws::Vector<FieldIndex>& GetFieldIndexes() const{ return m_fieldIndexes; }
    inline void SetFieldIndexes(const Aws::Vector<FieldIndex>& value) { m_fieldIndexes = value; }
    inline void SetFieldIndexes(Aws::Vector<FieldIndex>&& value) { m_fieldIndexes = std::move(value); }
    inline DescribeFieldIndexesResult& WithFieldIndexes(const Aws::Vector<FieldIndex>& value) { SetFieldIndexes(value); return *this;}
    inline DescribeFieldIndexesResult& WithFieldIndexes(Aws::Vector<FieldIndex>&& value) { SetFieldIndexes(std::move(value)); return *this;}
    inline DescribeFieldIndexesResult& AddFieldIndexes(const FieldIndex& value) { m_fieldIndexes.push_back(value); return *this; }
    inline DescribeFieldIndexesResult& AddFieldIndexes(FieldIndex&& value) { m_fieldIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFieldIndexesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFieldIndexesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFieldIndexesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFieldIndexesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFieldIndexesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFieldIndexesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FieldIndex> m_fieldIndexes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
