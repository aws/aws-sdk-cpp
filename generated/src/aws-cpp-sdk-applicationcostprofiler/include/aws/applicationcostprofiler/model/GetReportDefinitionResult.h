/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/applicationcostprofiler/model/ReportFrequency.h>
#include <aws/applicationcostprofiler/model/Format.h>
#include <aws/applicationcostprofiler/model/S3Location.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class GetReportDefinitionResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult();
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the report retrieved.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline void SetReportId(const char* value) { m_reportId.assign(value); }

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline GetReportDefinitionResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline GetReportDefinitionResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>ID of the report retrieved.</p>
     */
    inline GetReportDefinitionResult& WithReportId(const char* value) { SetReportId(value); return *this;}


    /**
     * <p>Description of the report.</p>
     */
    inline const Aws::String& GetReportDescription() const{ return m_reportDescription; }

    /**
     * <p>Description of the report.</p>
     */
    inline void SetReportDescription(const Aws::String& value) { m_reportDescription = value; }

    /**
     * <p>Description of the report.</p>
     */
    inline void SetReportDescription(Aws::String&& value) { m_reportDescription = std::move(value); }

    /**
     * <p>Description of the report.</p>
     */
    inline void SetReportDescription(const char* value) { m_reportDescription.assign(value); }

    /**
     * <p>Description of the report.</p>
     */
    inline GetReportDefinitionResult& WithReportDescription(const Aws::String& value) { SetReportDescription(value); return *this;}

    /**
     * <p>Description of the report.</p>
     */
    inline GetReportDefinitionResult& WithReportDescription(Aws::String&& value) { SetReportDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the report.</p>
     */
    inline GetReportDefinitionResult& WithReportDescription(const char* value) { SetReportDescription(value); return *this;}


    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }

    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequency = value; }

    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequency = std::move(value); }

    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline GetReportDefinitionResult& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}

    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline GetReportDefinitionResult& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}


    /**
     * <p>Format of the generated report.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>Format of the generated report.</p>
     */
    inline void SetFormat(const Format& value) { m_format = value; }

    /**
     * <p>Format of the generated report.</p>
     */
    inline void SetFormat(Format&& value) { m_format = std::move(value); }

    /**
     * <p>Format of the generated report.</p>
     */
    inline GetReportDefinitionResult& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>Format of the generated report.</p>
     */
    inline GetReportDefinitionResult& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline const S3Location& GetDestinationS3Location() const{ return m_destinationS3Location; }

    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline void SetDestinationS3Location(const S3Location& value) { m_destinationS3Location = value; }

    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline void SetDestinationS3Location(S3Location&& value) { m_destinationS3Location = std::move(value); }

    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline GetReportDefinitionResult& WithDestinationS3Location(const S3Location& value) { SetDestinationS3Location(value); return *this;}

    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline GetReportDefinitionResult& WithDestinationS3Location(S3Location&& value) { SetDestinationS3Location(std::move(value)); return *this;}


    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline GetReportDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline GetReportDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline GetReportDefinitionResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline GetReportDefinitionResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_reportId;

    Aws::String m_reportDescription;

    ReportFrequency m_reportFrequency;

    Format m_format;

    S3Location m_destinationS3Location;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdated;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
