/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
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
  class ListEntitiesDetectionV2JobsResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API ListEntitiesDetectionV2JobsResult();
    AWS_COMPREHENDMEDICAL_API ListEntitiesDetectionV2JobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API ListEntitiesDetectionV2JobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline const Aws::Vector<ComprehendMedicalAsyncJobProperties>& GetComprehendMedicalAsyncJobPropertiesList() const{ return m_comprehendMedicalAsyncJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { m_comprehendMedicalAsyncJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline void SetComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { m_comprehendMedicalAsyncJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& WithComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { SetComprehendMedicalAsyncJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& WithComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { SetComprehendMedicalAsyncJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& AddComprehendMedicalAsyncJobPropertiesList(const ComprehendMedicalAsyncJobProperties& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& AddComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobProperties&& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEntitiesDetectionV2JobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEntitiesDetectionV2JobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEntitiesDetectionV2JobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEntitiesDetectionV2JobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComprehendMedicalAsyncJobProperties> m_comprehendMedicalAsyncJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
