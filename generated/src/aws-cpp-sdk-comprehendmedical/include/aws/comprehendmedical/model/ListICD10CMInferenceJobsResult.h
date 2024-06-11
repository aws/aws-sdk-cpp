﻿/**
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
  class ListICD10CMInferenceJobsResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API ListICD10CMInferenceJobsResult();
    AWS_COMPREHENDMEDICAL_API ListICD10CMInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API ListICD10CMInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<ComprehendMedicalAsyncJobProperties>& GetComprehendMedicalAsyncJobPropertiesList() const{ return m_comprehendMedicalAsyncJobPropertiesList; }
    inline void SetComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { m_comprehendMedicalAsyncJobPropertiesList = value; }
    inline void SetComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { m_comprehendMedicalAsyncJobPropertiesList = std::move(value); }
    inline ListICD10CMInferenceJobsResult& WithComprehendMedicalAsyncJobPropertiesList(const Aws::Vector<ComprehendMedicalAsyncJobProperties>& value) { SetComprehendMedicalAsyncJobPropertiesList(value); return *this;}
    inline ListICD10CMInferenceJobsResult& WithComprehendMedicalAsyncJobPropertiesList(Aws::Vector<ComprehendMedicalAsyncJobProperties>&& value) { SetComprehendMedicalAsyncJobPropertiesList(std::move(value)); return *this;}
    inline ListICD10CMInferenceJobsResult& AddComprehendMedicalAsyncJobPropertiesList(const ComprehendMedicalAsyncJobProperties& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(value); return *this; }
    inline ListICD10CMInferenceJobsResult& AddComprehendMedicalAsyncJobPropertiesList(ComprehendMedicalAsyncJobProperties&& value) { m_comprehendMedicalAsyncJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListICD10CMInferenceJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListICD10CMInferenceJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListICD10CMInferenceJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListICD10CMInferenceJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListICD10CMInferenceJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListICD10CMInferenceJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComprehendMedicalAsyncJobProperties> m_comprehendMedicalAsyncJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
