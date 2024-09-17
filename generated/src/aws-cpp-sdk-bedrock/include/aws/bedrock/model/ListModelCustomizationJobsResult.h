/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelCustomizationJobSummary.h>
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
  class ListModelCustomizationJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelCustomizationJobsResult();
    AWS_BEDROCK_API ListModelCustomizationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelCustomizationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListModelCustomizationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelCustomizationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelCustomizationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job summaries.</p>
     */
    inline const Aws::Vector<ModelCustomizationJobSummary>& GetModelCustomizationJobSummaries() const{ return m_modelCustomizationJobSummaries; }
    inline void SetModelCustomizationJobSummaries(const Aws::Vector<ModelCustomizationJobSummary>& value) { m_modelCustomizationJobSummaries = value; }
    inline void SetModelCustomizationJobSummaries(Aws::Vector<ModelCustomizationJobSummary>&& value) { m_modelCustomizationJobSummaries = std::move(value); }
    inline ListModelCustomizationJobsResult& WithModelCustomizationJobSummaries(const Aws::Vector<ModelCustomizationJobSummary>& value) { SetModelCustomizationJobSummaries(value); return *this;}
    inline ListModelCustomizationJobsResult& WithModelCustomizationJobSummaries(Aws::Vector<ModelCustomizationJobSummary>&& value) { SetModelCustomizationJobSummaries(std::move(value)); return *this;}
    inline ListModelCustomizationJobsResult& AddModelCustomizationJobSummaries(const ModelCustomizationJobSummary& value) { m_modelCustomizationJobSummaries.push_back(value); return *this; }
    inline ListModelCustomizationJobsResult& AddModelCustomizationJobSummaries(ModelCustomizationJobSummary&& value) { m_modelCustomizationJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListModelCustomizationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListModelCustomizationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListModelCustomizationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelCustomizationJobSummary> m_modelCustomizationJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
