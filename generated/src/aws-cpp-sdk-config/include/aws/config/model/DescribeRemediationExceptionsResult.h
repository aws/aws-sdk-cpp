/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationException.h>
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
  class DescribeRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult() = default;
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline const Aws::Vector<RemediationException>& GetRemediationExceptions() const { return m_remediationExceptions; }
    template<typename RemediationExceptionsT = Aws::Vector<RemediationException>>
    void SetRemediationExceptions(RemediationExceptionsT&& value) { m_remediationExceptionsHasBeenSet = true; m_remediationExceptions = std::forward<RemediationExceptionsT>(value); }
    template<typename RemediationExceptionsT = Aws::Vector<RemediationException>>
    DescribeRemediationExceptionsResult& WithRemediationExceptions(RemediationExceptionsT&& value) { SetRemediationExceptions(std::forward<RemediationExceptionsT>(value)); return *this;}
    template<typename RemediationExceptionsT = RemediationException>
    DescribeRemediationExceptionsResult& AddRemediationExceptions(RemediationExceptionsT&& value) { m_remediationExceptionsHasBeenSet = true; m_remediationExceptions.emplace_back(std::forward<RemediationExceptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRemediationExceptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRemediationExceptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RemediationException> m_remediationExceptions;
    bool m_remediationExceptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
