/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryJobListEntry.h>
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
namespace DataSync
{
namespace Model
{
  class ListDiscoveryJobsResult
  {
  public:
    AWS_DATASYNC_API ListDiscoveryJobsResult() = default;
    AWS_DATASYNC_API ListDiscoveryJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListDiscoveryJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline const Aws::Vector<DiscoveryJobListEntry>& GetDiscoveryJobs() const { return m_discoveryJobs; }
    template<typename DiscoveryJobsT = Aws::Vector<DiscoveryJobListEntry>>
    void SetDiscoveryJobs(DiscoveryJobsT&& value) { m_discoveryJobsHasBeenSet = true; m_discoveryJobs = std::forward<DiscoveryJobsT>(value); }
    template<typename DiscoveryJobsT = Aws::Vector<DiscoveryJobListEntry>>
    ListDiscoveryJobsResult& WithDiscoveryJobs(DiscoveryJobsT&& value) { SetDiscoveryJobs(std::forward<DiscoveryJobsT>(value)); return *this;}
    template<typename DiscoveryJobsT = DiscoveryJobListEntry>
    ListDiscoveryJobsResult& AddDiscoveryJobs(DiscoveryJobsT&& value) { m_discoveryJobsHasBeenSet = true; m_discoveryJobs.emplace_back(std::forward<DiscoveryJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoveryJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDiscoveryJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DiscoveryJobListEntry> m_discoveryJobs;
    bool m_discoveryJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
