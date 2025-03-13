/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/SyncBlockerSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class GetSyncBlockerSummaryResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult() = default;
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline const SyncBlockerSummary& GetSyncBlockerSummary() const { return m_syncBlockerSummary; }
    template<typename SyncBlockerSummaryT = SyncBlockerSummary>
    void SetSyncBlockerSummary(SyncBlockerSummaryT&& value) { m_syncBlockerSummaryHasBeenSet = true; m_syncBlockerSummary = std::forward<SyncBlockerSummaryT>(value); }
    template<typename SyncBlockerSummaryT = SyncBlockerSummary>
    GetSyncBlockerSummaryResult& WithSyncBlockerSummary(SyncBlockerSummaryT&& value) { SetSyncBlockerSummary(std::forward<SyncBlockerSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSyncBlockerSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SyncBlockerSummary m_syncBlockerSummary;
    bool m_syncBlockerSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
