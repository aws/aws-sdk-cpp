﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ValidatePolicyFinding.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class ValidatePolicyResult
  {
  public:
    AWS_ACCESSANALYZER_API ValidatePolicyResult();
    AWS_ACCESSANALYZER_API ValidatePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ValidatePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of findings in a policy returned by IAM Access Analyzer based on its
     * suite of policy checks.</p>
     */
    inline const Aws::Vector<ValidatePolicyFinding>& GetFindings() const{ return m_findings; }
    inline void SetFindings(const Aws::Vector<ValidatePolicyFinding>& value) { m_findings = value; }
    inline void SetFindings(Aws::Vector<ValidatePolicyFinding>&& value) { m_findings = std::move(value); }
    inline ValidatePolicyResult& WithFindings(const Aws::Vector<ValidatePolicyFinding>& value) { SetFindings(value); return *this;}
    inline ValidatePolicyResult& WithFindings(Aws::Vector<ValidatePolicyFinding>&& value) { SetFindings(std::move(value)); return *this;}
    inline ValidatePolicyResult& AddFindings(const ValidatePolicyFinding& value) { m_findings.push_back(value); return *this; }
    inline ValidatePolicyResult& AddFindings(ValidatePolicyFinding&& value) { m_findings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ValidatePolicyResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ValidatePolicyResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ValidatePolicyResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidatePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidatePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidatePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ValidatePolicyFinding> m_findings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
