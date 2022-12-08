/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryTask.h>
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
namespace FSx
{
namespace Model
{
  class DescribeDataRepositoryTasksResult
  {
  public:
    AWS_FSX_API DescribeDataRepositoryTasksResult();
    AWS_FSX_API DescribeDataRepositoryTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeDataRepositoryTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline const Aws::Vector<DataRepositoryTask>& GetDataRepositoryTasks() const{ return m_dataRepositoryTasks; }

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline void SetDataRepositoryTasks(const Aws::Vector<DataRepositoryTask>& value) { m_dataRepositoryTasks = value; }

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline void SetDataRepositoryTasks(Aws::Vector<DataRepositoryTask>&& value) { m_dataRepositoryTasks = std::move(value); }

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline DescribeDataRepositoryTasksResult& WithDataRepositoryTasks(const Aws::Vector<DataRepositoryTask>& value) { SetDataRepositoryTasks(value); return *this;}

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline DescribeDataRepositoryTasksResult& WithDataRepositoryTasks(Aws::Vector<DataRepositoryTask>&& value) { SetDataRepositoryTasks(std::move(value)); return *this;}

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline DescribeDataRepositoryTasksResult& AddDataRepositoryTasks(const DataRepositoryTask& value) { m_dataRepositoryTasks.push_back(value); return *this; }

    /**
     * <p>The collection of data repository task descriptions returned.</p>
     */
    inline DescribeDataRepositoryTasksResult& AddDataRepositoryTasks(DataRepositoryTask&& value) { m_dataRepositoryTasks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDataRepositoryTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDataRepositoryTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDataRepositoryTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataRepositoryTask> m_dataRepositoryTasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
