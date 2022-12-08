/**
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


    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline const Aws::Vector<ImportJobProperties>& GetImportJobPropertiesList() const{ return m_importJobPropertiesList; }

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline void SetImportJobPropertiesList(const Aws::Vector<ImportJobProperties>& value) { m_importJobPropertiesList = value; }

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline void SetImportJobPropertiesList(Aws::Vector<ImportJobProperties>&& value) { m_importJobPropertiesList = std::move(value); }

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline ListFHIRImportJobsResult& WithImportJobPropertiesList(const Aws::Vector<ImportJobProperties>& value) { SetImportJobPropertiesList(value); return *this;}

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline ListFHIRImportJobsResult& WithImportJobPropertiesList(Aws::Vector<ImportJobProperties>&& value) { SetImportJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline ListFHIRImportJobsResult& AddImportJobPropertiesList(const ImportJobProperties& value) { m_importJobPropertiesList.push_back(value); return *this; }

    /**
     * <p> The properties of a listed FHIR import jobs, including the ID, ARN, name,
     * and the status of the job. </p>
     */
    inline ListFHIRImportJobsResult& AddImportJobPropertiesList(ImportJobProperties&& value) { m_importJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline ListFHIRImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline ListFHIRImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline ListFHIRImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportJobProperties> m_importJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
