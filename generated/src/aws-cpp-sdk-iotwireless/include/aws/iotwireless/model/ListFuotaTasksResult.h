/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/FuotaTask.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListFuotaTasksResult
  {
  public:
    AWS_IOTWIRELESS_API ListFuotaTasksResult();
    AWS_IOTWIRELESS_API ListFuotaTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListFuotaTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListFuotaTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListFuotaTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListFuotaTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<FuotaTask>& GetFuotaTaskList() const{ return m_fuotaTaskList; }

    
    inline void SetFuotaTaskList(const Aws::Vector<FuotaTask>& value) { m_fuotaTaskList = value; }

    
    inline void SetFuotaTaskList(Aws::Vector<FuotaTask>&& value) { m_fuotaTaskList = std::move(value); }

    
    inline ListFuotaTasksResult& WithFuotaTaskList(const Aws::Vector<FuotaTask>& value) { SetFuotaTaskList(value); return *this;}

    
    inline ListFuotaTasksResult& WithFuotaTaskList(Aws::Vector<FuotaTask>&& value) { SetFuotaTaskList(std::move(value)); return *this;}

    
    inline ListFuotaTasksResult& AddFuotaTaskList(const FuotaTask& value) { m_fuotaTaskList.push_back(value); return *this; }

    
    inline ListFuotaTasksResult& AddFuotaTaskList(FuotaTask&& value) { m_fuotaTaskList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FuotaTask> m_fuotaTaskList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
