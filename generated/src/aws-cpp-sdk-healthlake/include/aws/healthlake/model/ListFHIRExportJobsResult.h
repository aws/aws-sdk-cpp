/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/ExportJobProperties.h>
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
  class ListFHIRExportJobsResult
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult();
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API ListFHIRExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline const Aws::Vector<ExportJobProperties>& GetExportJobPropertiesList() const{ return m_exportJobPropertiesList; }

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline void SetExportJobPropertiesList(const Aws::Vector<ExportJobProperties>& value) { m_exportJobPropertiesList = value; }

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline void SetExportJobPropertiesList(Aws::Vector<ExportJobProperties>&& value) { m_exportJobPropertiesList = std::move(value); }

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline ListFHIRExportJobsResult& WithExportJobPropertiesList(const Aws::Vector<ExportJobProperties>& value) { SetExportJobPropertiesList(value); return *this;}

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline ListFHIRExportJobsResult& WithExportJobPropertiesList(Aws::Vector<ExportJobProperties>&& value) { SetExportJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline ListFHIRExportJobsResult& AddExportJobPropertiesList(const ExportJobProperties& value) { m_exportJobPropertiesList.push_back(value); return *this; }

    /**
     * <p> The properties of listed FHIR export jobs, including the ID, ARN, name, and
     * the status of the job. </p>
     */
    inline ListFHIRExportJobsResult& AddExportJobPropertiesList(ExportJobProperties&& value) { m_exportJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExportJobProperties> m_exportJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
