/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult() = default;
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAudienceExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience export jobs that match the request.</p>
     */
    inline const Aws::Vector<AudienceExportJobSummary>& GetAudienceExportJobs() const { return m_audienceExportJobs; }
    template<typename AudienceExportJobsT = Aws::Vector<AudienceExportJobSummary>>
    void SetAudienceExportJobs(AudienceExportJobsT&& value) { m_audienceExportJobsHasBeenSet = true; m_audienceExportJobs = std::forward<AudienceExportJobsT>(value); }
    template<typename AudienceExportJobsT = Aws::Vector<AudienceExportJobSummary>>
    ListAudienceExportJobsResult& WithAudienceExportJobs(AudienceExportJobsT&& value) { SetAudienceExportJobs(std::forward<AudienceExportJobsT>(value)); return *this;}
    template<typename AudienceExportJobsT = AudienceExportJobSummary>
    ListAudienceExportJobsResult& AddAudienceExportJobs(AudienceExportJobsT&& value) { m_audienceExportJobsHasBeenSet = true; m_audienceExportJobs.emplace_back(std::forward<AudienceExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAudienceExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AudienceExportJobSummary> m_audienceExportJobs;
    bool m_audienceExportJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
