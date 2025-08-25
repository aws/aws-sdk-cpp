/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/Finding.h>
#include <aws/codeguru-security/model/BatchGetFindingsError.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class BatchGetFindingsResult
  {
  public:
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult() = default;
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of all findings which were successfully fetched.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const { return m_findings; }
    template<typename FindingsT = Aws::Vector<Finding>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<Finding>>
    BatchGetFindingsResult& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = Finding>
    BatchGetFindingsResult& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline const Aws::Vector<BatchGetFindingsError>& GetFailedFindings() const { return m_failedFindings; }
    template<typename FailedFindingsT = Aws::Vector<BatchGetFindingsError>>
    void SetFailedFindings(FailedFindingsT&& value) { m_failedFindingsHasBeenSet = true; m_failedFindings = std::forward<FailedFindingsT>(value); }
    template<typename FailedFindingsT = Aws::Vector<BatchGetFindingsError>>
    BatchGetFindingsResult& WithFailedFindings(FailedFindingsT&& value) { SetFailedFindings(std::forward<FailedFindingsT>(value)); return *this;}
    template<typename FailedFindingsT = BatchGetFindingsError>
    BatchGetFindingsResult& AddFailedFindings(FailedFindingsT&& value) { m_failedFindingsHasBeenSet = true; m_failedFindings.emplace_back(std::forward<FailedFindingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Finding> m_findings;
    bool m_findingsHasBeenSet = false;

    Aws::Vector<BatchGetFindingsError> m_failedFindings;
    bool m_failedFindingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
