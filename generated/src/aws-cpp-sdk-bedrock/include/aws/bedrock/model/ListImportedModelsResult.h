/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ImportedModelSummary.h>
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
  class ListImportedModelsResult
  {
  public:
    AWS_BEDROCK_API ListImportedModelsResult();
    AWS_BEDROCK_API ListImportedModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListImportedModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListImportedModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImportedModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImportedModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model summaries.</p>
     */
    inline const Aws::Vector<ImportedModelSummary>& GetModelSummaries() const{ return m_modelSummaries; }
    inline void SetModelSummaries(const Aws::Vector<ImportedModelSummary>& value) { m_modelSummaries = value; }
    inline void SetModelSummaries(Aws::Vector<ImportedModelSummary>&& value) { m_modelSummaries = std::move(value); }
    inline ListImportedModelsResult& WithModelSummaries(const Aws::Vector<ImportedModelSummary>& value) { SetModelSummaries(value); return *this;}
    inline ListImportedModelsResult& WithModelSummaries(Aws::Vector<ImportedModelSummary>&& value) { SetModelSummaries(std::move(value)); return *this;}
    inline ListImportedModelsResult& AddModelSummaries(const ImportedModelSummary& value) { m_modelSummaries.push_back(value); return *this; }
    inline ListImportedModelsResult& AddModelSummaries(ImportedModelSummary&& value) { m_modelSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImportedModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImportedModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImportedModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ImportedModelSummary> m_modelSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
