/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace deadline
{
namespace Model
{
  class ListJobParameterDefinitionsResult
  {
  public:
    AWS_DEADLINE_API ListJobParameterDefinitionsResult() = default;
    AWS_DEADLINE_API ListJobParameterDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListJobParameterDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists parameter definitions of a job.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetJobParameterDefinitions() const { return m_jobParameterDefinitions; }
    template<typename JobParameterDefinitionsT = Aws::Vector<Aws::Utils::Document>>
    void SetJobParameterDefinitions(JobParameterDefinitionsT&& value) { m_jobParameterDefinitionsHasBeenSet = true; m_jobParameterDefinitions = std::forward<JobParameterDefinitionsT>(value); }
    template<typename JobParameterDefinitionsT = Aws::Vector<Aws::Utils::Document>>
    ListJobParameterDefinitionsResult& WithJobParameterDefinitions(JobParameterDefinitionsT&& value) { SetJobParameterDefinitions(std::forward<JobParameterDefinitionsT>(value)); return *this;}
    template<typename JobParameterDefinitionsT = Aws::Utils::Document>
    ListJobParameterDefinitionsResult& AddJobParameterDefinitions(JobParameterDefinitionsT&& value) { m_jobParameterDefinitionsHasBeenSet = true; m_jobParameterDefinitions.emplace_back(std::forward<JobParameterDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobParameterDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobParameterDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::Document> m_jobParameterDefinitions;
    bool m_jobParameterDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
