/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/BatchGetFindingsError.h>
#include <aws/codeguru-security/model/Finding.h>
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
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult();
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API BatchGetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline const Aws::Vector<BatchGetFindingsError>& GetFailedFindings() const{ return m_failedFindings; }

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline void SetFailedFindings(const Aws::Vector<BatchGetFindingsError>& value) { m_failedFindings = value; }

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline void SetFailedFindings(Aws::Vector<BatchGetFindingsError>&& value) { m_failedFindings = std::move(value); }

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline BatchGetFindingsResult& WithFailedFindings(const Aws::Vector<BatchGetFindingsError>& value) { SetFailedFindings(value); return *this;}

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline BatchGetFindingsResult& WithFailedFindings(Aws::Vector<BatchGetFindingsError>&& value) { SetFailedFindings(std::move(value)); return *this;}

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline BatchGetFindingsResult& AddFailedFindings(const BatchGetFindingsError& value) { m_failedFindings.push_back(value); return *this; }

    /**
     * <p>A list of errors for individual findings which were not fetched. Each
     * BatchGetFindingsError contains the <code>scanName</code>,
     * <code>findingId</code>, <code>errorCode</code> and error
     * <code>message</code>.</p>
     */
    inline BatchGetFindingsResult& AddFailedFindings(BatchGetFindingsError&& value) { m_failedFindings.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of all requested findings.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const{ return m_findings; }

    /**
     * <p> A list of all requested findings.</p>
     */
    inline void SetFindings(const Aws::Vector<Finding>& value) { m_findings = value; }

    /**
     * <p> A list of all requested findings.</p>
     */
    inline void SetFindings(Aws::Vector<Finding>&& value) { m_findings = std::move(value); }

    /**
     * <p> A list of all requested findings.</p>
     */
    inline BatchGetFindingsResult& WithFindings(const Aws::Vector<Finding>& value) { SetFindings(value); return *this;}

    /**
     * <p> A list of all requested findings.</p>
     */
    inline BatchGetFindingsResult& WithFindings(Aws::Vector<Finding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p> A list of all requested findings.</p>
     */
    inline BatchGetFindingsResult& AddFindings(const Finding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p> A list of all requested findings.</p>
     */
    inline BatchGetFindingsResult& AddFindings(Finding&& value) { m_findings.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchGetFindingsError> m_failedFindings;

    Aws::Vector<Finding> m_findings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
