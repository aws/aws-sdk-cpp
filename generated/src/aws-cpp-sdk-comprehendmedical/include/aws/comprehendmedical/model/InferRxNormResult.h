/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/RxNormEntity.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class InferRxNormResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API InferRxNormResult();
    AWS_COMPREHENDMEDICAL_API InferRxNormResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API InferRxNormResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The medication entities detected in the text linked to RxNorm concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline const Aws::Vector<RxNormEntity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<RxNormEntity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<RxNormEntity>&& value) { m_entities = std::move(value); }
    inline InferRxNormResult& WithEntities(const Aws::Vector<RxNormEntity>& value) { SetEntities(value); return *this;}
    inline InferRxNormResult& WithEntities(Aws::Vector<RxNormEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline InferRxNormResult& AddEntities(const RxNormEntity& value) { m_entities.push_back(value); return *this; }
    inline InferRxNormResult& AddEntities(RxNormEntity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request to <code>InferRxNorm</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medication entities.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }
    inline InferRxNormResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline InferRxNormResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline InferRxNormResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }
    inline InferRxNormResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline InferRxNormResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline InferRxNormResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InferRxNormResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InferRxNormResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InferRxNormResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RxNormEntity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
