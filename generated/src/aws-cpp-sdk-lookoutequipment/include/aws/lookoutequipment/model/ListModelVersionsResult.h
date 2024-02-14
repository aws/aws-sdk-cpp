/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/ModelVersionSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListModelVersionsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult();
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline ListModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline ListModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline ListModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline const Aws::Vector<ModelVersionSummary>& GetModelVersionSummaries() const{ return m_modelVersionSummaries; }

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline void SetModelVersionSummaries(const Aws::Vector<ModelVersionSummary>& value) { m_modelVersionSummaries = value; }

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline void SetModelVersionSummaries(Aws::Vector<ModelVersionSummary>&& value) { m_modelVersionSummaries = std::move(value); }

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline ListModelVersionsResult& WithModelVersionSummaries(const Aws::Vector<ModelVersionSummary>& value) { SetModelVersionSummaries(value); return *this;}

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline ListModelVersionsResult& WithModelVersionSummaries(Aws::Vector<ModelVersionSummary>&& value) { SetModelVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline ListModelVersionsResult& AddModelVersionSummaries(const ModelVersionSummary& value) { m_modelVersionSummaries.push_back(value); return *this; }

    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline ListModelVersionsResult& AddModelVersionSummaries(ModelVersionSummary&& value) { m_modelVersionSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListModelVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListModelVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListModelVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelVersionSummary> m_modelVersionSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
