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
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult() = default;
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAudienceGenerationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience generation jobs that match the request.</p>
     */
    inline const Aws::Vector<AudienceGenerationJobSummary>& GetAudienceGenerationJobs() const { return m_audienceGenerationJobs; }
    template<typename AudienceGenerationJobsT = Aws::Vector<AudienceGenerationJobSummary>>
    void SetAudienceGenerationJobs(AudienceGenerationJobsT&& value) { m_audienceGenerationJobsHasBeenSet = true; m_audienceGenerationJobs = std::forward<AudienceGenerationJobsT>(value); }
    template<typename AudienceGenerationJobsT = Aws::Vector<AudienceGenerationJobSummary>>
    ListAudienceGenerationJobsResult& WithAudienceGenerationJobs(AudienceGenerationJobsT&& value) { SetAudienceGenerationJobs(std::forward<AudienceGenerationJobsT>(value)); return *this;}
    template<typename AudienceGenerationJobsT = AudienceGenerationJobSummary>
    ListAudienceGenerationJobsResult& AddAudienceGenerationJobs(AudienceGenerationJobsT&& value) { m_audienceGenerationJobsHasBeenSet = true; m_audienceGenerationJobs.emplace_back(std::forward<AudienceGenerationJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAudienceGenerationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AudienceGenerationJobSummary> m_audienceGenerationJobs;
    bool m_audienceGenerationJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
