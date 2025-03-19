/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail-data/model/ResultErrorEntry.h>
#include <aws/cloudtrail-data/model/AuditEventResultEntry.h>
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
namespace CloudTrailData
{
namespace Model
{
  class PutAuditEventsResult
  {
  public:
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult() = default;
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline const Aws::Vector<ResultErrorEntry>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<ResultErrorEntry>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<ResultErrorEntry>>
    PutAuditEventsResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = ResultErrorEntry>
    PutAuditEventsResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline const Aws::Vector<AuditEventResultEntry>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<AuditEventResultEntry>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<AuditEventResultEntry>>
    PutAuditEventsResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = AuditEventResultEntry>
    PutAuditEventsResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAuditEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResultErrorEntry> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Vector<AuditEventResultEntry> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
