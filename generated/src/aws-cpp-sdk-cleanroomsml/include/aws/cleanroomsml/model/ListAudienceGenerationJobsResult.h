/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceGenerationJobSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListAudienceGenerationJobsResult
  {
  public:
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult();
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAudienceGenerationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAudienceGenerationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAudienceGenerationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience generation jobs that match the request.</p>
     */
    inline const Aws::Vector<AudienceGenerationJobSummary>& GetAudienceGenerationJobs() const{ return m_audienceGenerationJobs; }
    inline void SetAudienceGenerationJobs(const Aws::Vector<AudienceGenerationJobSummary>& value) { m_audienceGenerationJobs = value; }
    inline void SetAudienceGenerationJobs(Aws::Vector<AudienceGenerationJobSummary>&& value) { m_audienceGenerationJobs = std::move(value); }
    inline ListAudienceGenerationJobsResult& WithAudienceGenerationJobs(const Aws::Vector<AudienceGenerationJobSummary>& value) { SetAudienceGenerationJobs(value); return *this;}
    inline ListAudienceGenerationJobsResult& WithAudienceGenerationJobs(Aws::Vector<AudienceGenerationJobSummary>&& value) { SetAudienceGenerationJobs(std::move(value)); return *this;}
    inline ListAudienceGenerationJobsResult& AddAudienceGenerationJobs(const AudienceGenerationJobSummary& value) { m_audienceGenerationJobs.push_back(value); return *this; }
    inline ListAudienceGenerationJobsResult& AddAudienceGenerationJobs(AudienceGenerationJobSummary&& value) { m_audienceGenerationJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAudienceGenerationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAudienceGenerationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAudienceGenerationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<AudienceGenerationJobSummary> m_audienceGenerationJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
