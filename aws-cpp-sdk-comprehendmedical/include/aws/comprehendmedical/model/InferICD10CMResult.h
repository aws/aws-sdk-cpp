/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ICD10CMEntity.h>
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
  class InferICD10CMResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult();
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API InferICD10CMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline const Aws::Vector<ICD10CMEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline void SetEntities(const Aws::Vector<ICD10CMEntity>& value) { m_entities = value; }

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline void SetEntities(Aws::Vector<ICD10CMEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline InferICD10CMResult& WithEntities(const Aws::Vector<ICD10CMEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline InferICD10CMResult& WithEntities(Aws::Vector<ICD10CMEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline InferICD10CMResult& AddEntities(const ICD10CMEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The medical conditions detected in the text linked to ICD-10-CM concepts. If
     * the action is successful, the service sends back an HTTP 200 response, as well
     * as the entities detected.</p>
     */
    inline InferICD10CMResult& AddEntities(ICD10CMEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline InferICD10CMResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline InferICD10CMResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous request to <code>InferICD10CM</code> was
     * truncated, include the <code>PaginationToken</code> to fetch the next page of
     * medical condition entities. </p>
     */
    inline InferICD10CMResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline InferICD10CMResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline InferICD10CMResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model used to analyze the documents, in the format
     * <i>n</i>.<i>n</i>.<i>n</i> You can use this information to track the model used
     * for a particular batch of documents.</p>
     */
    inline InferICD10CMResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}

  private:

    Aws::Vector<ICD10CMEntity> m_entities;

    Aws::String m_paginationToken;

    Aws::String m_modelVersion;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
