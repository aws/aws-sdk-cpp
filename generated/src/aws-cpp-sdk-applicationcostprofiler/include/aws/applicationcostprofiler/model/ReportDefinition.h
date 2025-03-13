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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   * <p>The configuration of a report in AWS Application Cost Profiler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ReportDefinition">AWS
   * API Reference</a></p>
   */
  class ReportDefinition
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition() = default;
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    ReportDefinition& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the report</p>
     */
    inline const Aws::String& GetReportDescription() const { return m_reportDescription; }
    inline bool ReportDescriptionHasBeenSet() const { return m_reportDescriptionHasBeenSet; }
    template<typename ReportDescriptionT = Aws::String>
    void SetReportDescription(ReportDescriptionT&& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = std::forward<ReportDescriptionT>(value); }
    template<typename ReportDescriptionT = Aws::String>
    ReportDefinition& WithReportDescription(ReportDescriptionT&& value) { SetReportDescription(std::forward<ReportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline ReportFrequency GetReportFrequency() const { return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    inline void SetReportFrequency(ReportFrequency value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline ReportDefinition& WithReportFrequency(ReportFrequency value) { SetReportFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format used for the generated reports.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline ReportDefinition& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline const S3Location& GetDestinationS3Location() const { return m_destinationS3Location; }
    inline bool DestinationS3LocationHasBeenSet() const { return m_destinationS3LocationHasBeenSet; }
    template<typename DestinationS3LocationT = S3Location>
    void SetDestinationS3Location(DestinationS3LocationT&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::forward<DestinationS3LocationT>(value); }
    template<typename DestinationS3LocationT = S3Location>
    ReportDefinition& WithDestinationS3Location(DestinationS3LocationT&& value) { SetDestinationS3Location(std::forward<DestinationS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ReportDefinition& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ReportDefinition& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
