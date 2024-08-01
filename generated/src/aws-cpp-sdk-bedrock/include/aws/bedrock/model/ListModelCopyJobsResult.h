/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelCopyJobSummary.h>
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
  class ListModelCopyJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelCopyJobsResult();
    AWS_BEDROCK_API ListModelCopyJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelCopyJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListModelCopyJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelCopyJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelCopyJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about each model copy job.</p>
     */
    inline const Aws::Vector<ModelCopyJobSummary>& GetModelCopyJobSummaries() const{ return m_modelCopyJobSummaries; }
    inline void SetModelCopyJobSummaries(const Aws::Vector<ModelCopyJobSummary>& value) { m_modelCopyJobSummaries = value; }
    inline void SetModelCopyJobSummaries(Aws::Vector<ModelCopyJobSummary>&& value) { m_modelCopyJobSummaries = std::move(value); }
    inline ListModelCopyJobsResult& WithModelCopyJobSummaries(const Aws::Vector<ModelCopyJobSummary>& value) { SetModelCopyJobSummaries(value); return *this;}
    inline ListModelCopyJobsResult& WithModelCopyJobSummaries(Aws::Vector<ModelCopyJobSummary>&& value) { SetModelCopyJobSummaries(std::move(value)); return *this;}
    inline ListModelCopyJobsResult& AddModelCopyJobSummaries(const ModelCopyJobSummary& value) { m_modelCopyJobSummaries.push_back(value); return *this; }
    inline ListModelCopyJobsResult& AddModelCopyJobSummaries(ModelCopyJobSummary&& value) { m_modelCopyJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListModelCopyJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListModelCopyJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListModelCopyJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelCopyJobSummary> m_modelCopyJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
