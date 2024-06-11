﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/ImportJobProperties.h>
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
namespace HealthLake
{
namespace Model
{
  class ListFHIRImportJobsResult
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult();
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * the status of the job, and the progress report of the job. </p>
     */
    inline const Aws::Vector<ImportJobProperties>& GetImportJobPropertiesList() const{ return m_importJobPropertiesList; }
    inline void SetImportJobPropertiesList(const Aws::Vector<ImportJobProperties>& value) { m_importJobPropertiesList = value; }
    inline void SetImportJobPropertiesList(Aws::Vector<ImportJobProperties>&& value) { m_importJobPropertiesList = std::move(value); }
    inline ListFHIRImportJobsResult& WithImportJobPropertiesList(const Aws::Vector<ImportJobProperties>& value) { SetImportJobPropertiesList(value); return *this;}
    inline ListFHIRImportJobsResult& WithImportJobPropertiesList(Aws::Vector<ImportJobProperties>&& value) { SetImportJobPropertiesList(std::move(value)); return *this;}
    inline ListFHIRImportJobsResult& AddImportJobPropertiesList(const ImportJobProperties& value) { m_importJobPropertiesList.push_back(value); return *this; }
    inline ListFHIRImportJobsResult& AddImportJobPropertiesList(ImportJobProperties&& value) { m_importJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFHIRImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFHIRImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFHIRImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFHIRImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFHIRImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFHIRImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImportJobProperties> m_importJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
