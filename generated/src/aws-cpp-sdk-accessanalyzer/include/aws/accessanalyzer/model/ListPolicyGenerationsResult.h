﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/PolicyGeneration.h>
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
  class ListPolicyGenerationsResult
  {
  public:
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult();
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListPolicyGenerationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>PolicyGeneration</code> object that contains details about the
     * generated policy.</p>
     */
    inline const Aws::Vector<PolicyGeneration>& GetPolicyGenerations() const{ return m_policyGenerations; }
    inline void SetPolicyGenerations(const Aws::Vector<PolicyGeneration>& value) { m_policyGenerations = value; }
    inline void SetPolicyGenerations(Aws::Vector<PolicyGeneration>&& value) { m_policyGenerations = std::move(value); }
    inline ListPolicyGenerationsResult& WithPolicyGenerations(const Aws::Vector<PolicyGeneration>& value) { SetPolicyGenerations(value); return *this;}
    inline ListPolicyGenerationsResult& WithPolicyGenerations(Aws::Vector<PolicyGeneration>&& value) { SetPolicyGenerations(std::move(value)); return *this;}
    inline ListPolicyGenerationsResult& AddPolicyGenerations(const PolicyGeneration& value) { m_policyGenerations.push_back(value); return *this; }
    inline ListPolicyGenerationsResult& AddPolicyGenerations(PolicyGeneration&& value) { m_policyGenerations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPolicyGenerationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPolicyGenerationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPolicyGenerationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPolicyGenerationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPolicyGenerationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPolicyGenerationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyGeneration> m_policyGenerations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
