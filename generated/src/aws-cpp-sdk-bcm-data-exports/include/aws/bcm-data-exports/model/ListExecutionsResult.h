/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExecutionReference.h>
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
namespace BCMDataExports
{
namespace Model
{
  class ListExecutionsResult
  {
  public:
    AWS_BCMDATAEXPORTS_API ListExecutionsResult();
    AWS_BCMDATAEXPORTS_API ListExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API ListExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of executions.</p>
     */
    inline const Aws::Vector<ExecutionReference>& GetExecutions() const{ return m_executions; }

    /**
     * <p>The list of executions.</p>
     */
    inline void SetExecutions(const Aws::Vector<ExecutionReference>& value) { m_executions = value; }

    /**
     * <p>The list of executions.</p>
     */
    inline void SetExecutions(Aws::Vector<ExecutionReference>&& value) { m_executions = std::move(value); }

    /**
     * <p>The list of executions.</p>
     */
    inline ListExecutionsResult& WithExecutions(const Aws::Vector<ExecutionReference>& value) { SetExecutions(value); return *this;}

    /**
     * <p>The list of executions.</p>
     */
    inline ListExecutionsResult& WithExecutions(Aws::Vector<ExecutionReference>&& value) { SetExecutions(std::move(value)); return *this;}

    /**
     * <p>The list of executions.</p>
     */
    inline ListExecutionsResult& AddExecutions(const ExecutionReference& value) { m_executions.push_back(value); return *this; }

    /**
     * <p>The list of executions.</p>
     */
    inline ListExecutionsResult& AddExecutions(ExecutionReference&& value) { m_executions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExecutionReference> m_executions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
