/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ScheduledAuditMetadata.h>
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
namespace IoT
{
namespace Model
{
  class ListScheduledAuditsResult
  {
  public:
    AWS_IOT_API ListScheduledAuditsResult() = default;
    AWS_IOT_API ListScheduledAuditsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListScheduledAuditsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of scheduled audits.</p>
     */
    inline const Aws::Vector<ScheduledAuditMetadata>& GetScheduledAudits() const { return m_scheduledAudits; }
    template<typename ScheduledAuditsT = Aws::Vector<ScheduledAuditMetadata>>
    void SetScheduledAudits(ScheduledAuditsT&& value) { m_scheduledAuditsHasBeenSet = true; m_scheduledAudits = std::forward<ScheduledAuditsT>(value); }
    template<typename ScheduledAuditsT = Aws::Vector<ScheduledAuditMetadata>>
    ListScheduledAuditsResult& WithScheduledAudits(ScheduledAuditsT&& value) { SetScheduledAudits(std::forward<ScheduledAuditsT>(value)); return *this;}
    template<typename ScheduledAuditsT = ScheduledAuditMetadata>
    ListScheduledAuditsResult& AddScheduledAudits(ScheduledAuditsT&& value) { m_scheduledAuditsHasBeenSet = true; m_scheduledAudits.emplace_back(std::forward<ScheduledAuditsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListScheduledAuditsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListScheduledAuditsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledAuditMetadata> m_scheduledAudits;
    bool m_scheduledAuditsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
