/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/CustomModelSummary.h>
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
  class ListCustomModelsResult
  {
  public:
    AWS_BEDROCK_API ListCustomModelsResult();
    AWS_BEDROCK_API ListCustomModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListCustomModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline ListCustomModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline ListCustomModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Continuation token for the next request to list the next set of results.</p>
     */
    inline ListCustomModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Model summaries.</p>
     */
    inline const Aws::Vector<CustomModelSummary>& GetModelSummaries() const{ return m_modelSummaries; }

    /**
     * <p>Model summaries.</p>
     */
    inline void SetModelSummaries(const Aws::Vector<CustomModelSummary>& value) { m_modelSummaries = value; }

    /**
     * <p>Model summaries.</p>
     */
    inline void SetModelSummaries(Aws::Vector<CustomModelSummary>&& value) { m_modelSummaries = std::move(value); }

    /**
     * <p>Model summaries.</p>
     */
    inline ListCustomModelsResult& WithModelSummaries(const Aws::Vector<CustomModelSummary>& value) { SetModelSummaries(value); return *this;}

    /**
     * <p>Model summaries.</p>
     */
    inline ListCustomModelsResult& WithModelSummaries(Aws::Vector<CustomModelSummary>&& value) { SetModelSummaries(std::move(value)); return *this;}

    /**
     * <p>Model summaries.</p>
     */
    inline ListCustomModelsResult& AddModelSummaries(const CustomModelSummary& value) { m_modelSummaries.push_back(value); return *this; }

    /**
     * <p>Model summaries.</p>
     */
    inline ListCustomModelsResult& AddModelSummaries(CustomModelSummary&& value) { m_modelSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCustomModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCustomModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCustomModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CustomModelSummary> m_modelSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
