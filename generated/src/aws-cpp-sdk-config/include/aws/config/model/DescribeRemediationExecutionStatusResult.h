/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationExecutionStatus.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeRemediationExecutionStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline const Aws::Vector<RemediationExecutionStatus>& GetRemediationExecutionStatuses() const { return m_remediationExecutionStatuses; }
    template<typename RemediationExecutionStatusesT = Aws::Vector<RemediationExecutionStatus>>
    void SetRemediationExecutionStatuses(RemediationExecutionStatusesT&& value) { m_remediationExecutionStatusesHasBeenSet = true; m_remediationExecutionStatuses = std::forward<RemediationExecutionStatusesT>(value); }
    template<typename RemediationExecutionStatusesT = Aws::Vector<RemediationExecutionStatus>>
    DescribeRemediationExecutionStatusResult& WithRemediationExecutionStatuses(RemediationExecutionStatusesT&& value) { SetRemediationExecutionStatuses(std::forward<RemediationExecutionStatusesT>(value)); return *this;}
    template<typename RemediationExecutionStatusesT = RemediationExecutionStatus>
    DescribeRemediationExecutionStatusResult& AddRemediationExecutionStatuses(RemediationExecutionStatusesT&& value) { m_remediationExecutionStatusesHasBeenSet = true; m_remediationExecutionStatuses.emplace_back(std::forward<RemediationExecutionStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRemediationExecutionStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRemediationExecutionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RemediationExecutionStatus> m_remediationExecutionStatuses;
    bool m_remediationExecutionStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
