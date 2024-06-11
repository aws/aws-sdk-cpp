﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/DataSource.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the query results from a <a>DescribeDataSources</a> operation. The
   * content is essentially a list of <code>DataSource</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeDataSourcesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeDataSourcesResult
  {
  public:
    AWS_MACHINELEARNING_API DescribeDataSourcesResult();
    AWS_MACHINELEARNING_API DescribeDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DescribeDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataSource</code> that meet the search criteria. </p>
     */
    inline const Aws::Vector<DataSource>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<DataSource>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<DataSource>&& value) { m_results = std::move(value); }
    inline DescribeDataSourcesResult& WithResults(const Aws::Vector<DataSource>& value) { SetResults(value); return *this;}
    inline DescribeDataSourcesResult& WithResults(Aws::Vector<DataSource>&& value) { SetResults(std::move(value)); return *this;}
    inline DescribeDataSourcesResult& AddResults(const DataSource& value) { m_results.push_back(value); return *this; }
    inline DescribeDataSourcesResult& AddResults(DataSource&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSource> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
