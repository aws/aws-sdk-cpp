/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedJobSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListProtectedJobsResult
  {
  public:
    AWS_CLEANROOMS_API ListProtectedJobsResult();
    AWS_CLEANROOMS_API ListProtectedJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListProtectedJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProtectedJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProtectedJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProtectedJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of protected job summaries.</p>
     */
    inline const Aws::Vector<ProtectedJobSummary>& GetProtectedJobs() const{ return m_protectedJobs; }
    inline void SetProtectedJobs(const Aws::Vector<ProtectedJobSummary>& value) { m_protectedJobs = value; }
    inline void SetProtectedJobs(Aws::Vector<ProtectedJobSummary>&& value) { m_protectedJobs = std::move(value); }
    inline ListProtectedJobsResult& WithProtectedJobs(const Aws::Vector<ProtectedJobSummary>& value) { SetProtectedJobs(value); return *this;}
    inline ListProtectedJobsResult& WithProtectedJobs(Aws::Vector<ProtectedJobSummary>&& value) { SetProtectedJobs(std::move(value)); return *this;}
    inline ListProtectedJobsResult& AddProtectedJobs(const ProtectedJobSummary& value) { m_protectedJobs.push_back(value); return *this; }
    inline ListProtectedJobsResult& AddProtectedJobs(ProtectedJobSummary&& value) { m_protectedJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProtectedJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProtectedJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProtectedJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ProtectedJobSummary> m_protectedJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
