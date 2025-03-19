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
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult() = default;
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the report retrieved.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetReportDefinitionResult& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the report.</p>
     */
    inline const Aws::String& GetReportDescription() const { return m_reportDescription; }
    template<typename ReportDescriptionT = Aws::String>
    void SetReportDescription(ReportDescriptionT&& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = std::forward<ReportDescriptionT>(value); }
    template<typename ReportDescriptionT = Aws::String>
    GetReportDefinitionResult& WithReportDescription(ReportDescriptionT&& value) { SetReportDescription(std::forward<ReportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cadence used to generate the report.</p>
     */
    inline ReportFrequency GetReportFrequency() const { return m_reportFrequency; }
    inline void SetReportFrequency(ReportFrequency value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline GetReportDefinitionResult& WithReportFrequency(ReportFrequency value) { SetReportFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Format of the generated report.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetReportDefinitionResult& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Simple Storage Service (Amazon S3) location where the report is
     * uploaded.</p>
     */
    inline const S3Location& GetDestinationS3Location() const { return m_destinationS3Location; }
    template<typename DestinationS3LocationT = S3Location>
    void SetDestinationS3Location(DestinationS3LocationT&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::forward<DestinationS3LocationT>(value); }
    template<typename DestinationS3LocationT = S3Location>
    GetReportDefinitionResult& WithDestinationS3Location(DestinationS3LocationT&& value) { SetDestinationS3Location(std::forward<DestinationS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetReportDefinitionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    GetReportDefinitionResult& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReportDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    Aws::String m_reportDescription;
    bool m_reportDescriptionHasBeenSet = false;

    ReportFrequency m_reportFrequency{ReportFrequency::NOT_SET};
    bool m_reportFrequencyHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    S3Location m_destinationS3Location;
    bool m_destinationS3LocationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
