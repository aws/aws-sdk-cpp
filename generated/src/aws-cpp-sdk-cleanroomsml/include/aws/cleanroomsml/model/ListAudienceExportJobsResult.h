/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceExportJobSummary.h>
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
  class ListAudienceExportJobsResult
  {
  public:
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult();
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline const Aws::Vector<AudienceExportJobSummary>& GetAudienceExportJobs() const{ return m_audienceExportJobs; }

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline void SetAudienceExportJobs(const Aws::Vector<AudienceExportJobSummary>& value) { m_audienceExportJobs = value; }

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline void SetAudienceExportJobs(Aws::Vector<AudienceExportJobSummary>&& value) { m_audienceExportJobs = std::move(value); }

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline ListAudienceExportJobsResult& WithAudienceExportJobs(const Aws::Vector<AudienceExportJobSummary>& value) { SetAudienceExportJobs(value); return *this;}

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline ListAudienceExportJobsResult& WithAudienceExportJobs(Aws::Vector<AudienceExportJobSummary>&& value) { SetAudienceExportJobs(std::move(value)); return *this;}

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline ListAudienceExportJobsResult& AddAudienceExportJobs(const AudienceExportJobSummary& value) { m_audienceExportJobs.push_back(value); return *this; }

    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline ListAudienceExportJobsResult& AddAudienceExportJobs(AudienceExportJobSummary&& value) { m_audienceExportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAudienceExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAudienceExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAudienceExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AudienceExportJobSummary> m_audienceExportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
