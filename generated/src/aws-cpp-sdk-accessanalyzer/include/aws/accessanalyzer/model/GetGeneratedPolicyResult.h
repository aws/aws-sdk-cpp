/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/JobDetails.h>
#include <aws/accessanalyzer/model/GeneratedPolicyResults.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetGeneratedPolicyResult
  {
  public:
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult() = default;
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>GeneratedPolicyDetails</code> object that contains details about the
     * generated policy.</p>
     */
    inline const JobDetails& GetJobDetails() const { return m_jobDetails; }
    template<typename JobDetailsT = JobDetails>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetails>
    GetGeneratedPolicyResult& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>GeneratedPolicyResult</code> object that contains the generated
     * policies and associated details.</p>
     */
    inline const GeneratedPolicyResults& GetGeneratedPolicyResults() const { return m_generatedPolicyResults; }
    template<typename GeneratedPolicyResultsT = GeneratedPolicyResults>
    void SetGeneratedPolicyResults(GeneratedPolicyResultsT&& value) { m_generatedPolicyResultsHasBeenSet = true; m_generatedPolicyResults = std::forward<GeneratedPolicyResultsT>(value); }
    template<typename GeneratedPolicyResultsT = GeneratedPolicyResults>
    GetGeneratedPolicyResult& WithGeneratedPolicyResults(GeneratedPolicyResultsT&& value) { SetGeneratedPolicyResults(std::forward<GeneratedPolicyResultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGeneratedPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    GeneratedPolicyResults m_generatedPolicyResults;
    bool m_generatedPolicyResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
