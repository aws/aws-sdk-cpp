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
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition();
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API ReportDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>The ID of the report.</p>
     */
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }

    /**
     * <p>The ID of the report.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }

    /**
     * <p>The ID of the report.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }

    /**
     * <p>The ID of the report.</p>
     */
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }

    /**
     * <p>The ID of the report.</p>
     */
    inline ReportDefinition& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>The ID of the report.</p>
     */
    inline ReportDefinition& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>The ID of the report.</p>
     */
    inline ReportDefinition& WithReportId(const char* value) { SetReportId(value); return *this;}


    /**
     * <p>Description of the report</p>
     */
    inline const Aws::String& GetReportDescription() const{ return m_reportDescription; }

    /**
     * <p>Description of the report</p>
     */
    inline bool ReportDescriptionHasBeenSet() const { return m_reportDescriptionHasBeenSet; }

    /**
     * <p>Description of the report</p>
     */
    inline void SetReportDescription(const Aws::String& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = value; }

    /**
     * <p>Description of the report</p>
     */
    inline void SetReportDescription(Aws::String&& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = std::move(value); }

    /**
     * <p>Description of the report</p>
     */
    inline void SetReportDescription(const char* value) { m_reportDescriptionHasBeenSet = true; m_reportDescription.assign(value); }

    /**
     * <p>Description of the report</p>
     */
    inline ReportDefinition& WithReportDescription(const Aws::String& value) { SetReportDescription(value); return *this;}

    /**
     * <p>Description of the report</p>
     */
    inline ReportDefinition& WithReportDescription(Aws::String&& value) { SetReportDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the report</p>
     */
    inline ReportDefinition& WithReportDescription(const char* value) { SetReportDescription(value); return *this;}


    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }

    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }

    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }

    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::move(value); }

    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline ReportDefinition& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}

    /**
     * <p>The cadence at which the report is generated.</p>
     */
    inline ReportDefinition& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}


    /**
     * <p>The format used for the generated reports.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format used for the generated reports.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format used for the generated reports.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format used for the generated reports.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format used for the generated reports.</p>
     */
    inline ReportDefinition& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format used for the generated reports.</p>
     */
    inline ReportDefinition& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline const S3Location& GetDestinationS3Location() const{ return m_destinationS3Location; }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline bool DestinationS3LocationHasBeenSet() const { return m_destinationS3LocationHasBeenSet; }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline void SetDestinationS3Location(const S3Location& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = value; }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline void SetDestinationS3Location(S3Location&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::move(value); }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline ReportDefinition& WithDestinationS3Location(const S3Location& value) { SetDestinationS3Location(value); return *this;}

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) the reports should
     * be saved to.</p>
     */
    inline ReportDefinition& WithDestinationS3Location(S3Location&& value) { SetDestinationS3Location(std::move(value)); return *this;}


    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline ReportDefinition& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Timestamp (milliseconds) when this report definition was created.</p>
     */
    inline ReportDefinition& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline ReportDefinition& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Timestamp (milliseconds) when this report definition was last updated.</p>
     */
    inline ReportDefinition& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    Aws::String m_reportDescription;
    bool m_reportDescriptionHasBeenSet = false;

    ReportFrequency m_reportFrequency;
    bool m_reportFrequencyHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    S3Location m_destinationS3Location;
    bool m_destinationS3LocationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
