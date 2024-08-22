/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelImportJobSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListModelImportJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelImportJobsResult();
    AWS_BEDROCK_API ListModelImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListModelImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import job summaries.</p>
     */
    inline const Aws::Vector<ModelImportJobSummary>& GetModelImportJobSummaries() const{ return m_modelImportJobSummaries; }
    inline void SetModelImportJobSummaries(const Aws::Vector<ModelImportJobSummary>& value) { m_modelImportJobSummaries = value; }
    inline void SetModelImportJobSummaries(Aws::Vector<ModelImportJobSummary>&& value) { m_modelImportJobSummaries = std::move(value); }
    inline ListModelImportJobsResult& WithModelImportJobSummaries(const Aws::Vector<ModelImportJobSummary>& value) { SetModelImportJobSummaries(value); return *this;}
    inline ListModelImportJobsResult& WithModelImportJobSummaries(Aws::Vector<ModelImportJobSummary>&& value) { SetModelImportJobSummaries(std::move(value)); return *this;}
    inline ListModelImportJobsResult& AddModelImportJobSummaries(const ModelImportJobSummary& value) { m_modelImportJobSummaries.push_back(value); return *this; }
    inline ListModelImportJobsResult& AddModelImportJobSummaries(ModelImportJobSummary&& value) { m_modelImportJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListModelImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListModelImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListModelImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelImportJobSummary> m_modelImportJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
