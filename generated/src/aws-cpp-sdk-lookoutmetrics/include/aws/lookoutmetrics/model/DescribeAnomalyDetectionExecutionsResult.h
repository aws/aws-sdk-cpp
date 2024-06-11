﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/ExecutionStatus.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class DescribeAnomalyDetectionExecutionsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult();
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of detection jobs.</p>
     */
    inline const Aws::Vector<ExecutionStatus>& GetExecutionList() const{ return m_executionList; }
    inline void SetExecutionList(const Aws::Vector<ExecutionStatus>& value) { m_executionList = value; }
    inline void SetExecutionList(Aws::Vector<ExecutionStatus>&& value) { m_executionList = std::move(value); }
    inline DescribeAnomalyDetectionExecutionsResult& WithExecutionList(const Aws::Vector<ExecutionStatus>& value) { SetExecutionList(value); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& WithExecutionList(Aws::Vector<ExecutionStatus>&& value) { SetExecutionList(std::move(value)); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& AddExecutionList(const ExecutionStatus& value) { m_executionList.push_back(value); return *this; }
    inline DescribeAnomalyDetectionExecutionsResult& AddExecutionList(ExecutionStatus&& value) { m_executionList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAnomalyDetectionExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAnomalyDetectionExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAnomalyDetectionExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionStatus> m_executionList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
