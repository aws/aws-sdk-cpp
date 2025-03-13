/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/applicationcostprofiler/model/ReportFrequency.h>
#include <aws/applicationcostprofiler/model/Format.h>
#include <aws/applicationcostprofiler/model/S3Location.h>
#include <utility>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   */
  class UpdateReportDefinitionRequest : public ApplicationCostProfilerRequest
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API UpdateReportDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReportDefinition"; }

    AWS_APPLICATIONCOSTPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required. ID of the report to update.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    UpdateReportDefinitionRequest& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. Description of the report.</p>
     */
    inline const Aws::String& GetReportDescription() const { return m_reportDescription; }
    inline bool ReportDescriptionHasBeenSet() const { return m_reportDescriptionHasBeenSet; }
    template<typename ReportDescriptionT = Aws::String>
    void SetReportDescription(ReportDescriptionT&& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = std::forward<ReportDescriptionT>(value); }
    template<typename ReportDescriptionT = Aws::String>
    UpdateReportDefinitionRequest& WithReportDescription(ReportDescriptionT&& value) { SetReportDescription(std::forward<ReportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The cadence to generate the report.</p>
     */
    inline ReportFrequency GetReportFrequency() const { return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    inline void SetReportFrequency(ReportFrequency value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline UpdateReportDefinitionRequest& WithReportFrequency(ReportFrequency value) { SetReportFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The format to use for the generated report.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline UpdateReportDefinitionRequest& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. Amazon Simple Storage Service (Amazon S3) location where
     * Application Cost Profiler uploads the report.</p>
     */
    inline const S3Location& GetDestinationS3Location() const { return m_destinationS3Location; }
    inline bool DestinationS3LocationHasBeenSet() const { return m_destinationS3LocationHasBeenSet; }
    template<typename DestinationS3LocationT = S3Location>
    void SetDestinationS3Location(DestinationS3LocationT&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::forward<DestinationS3LocationT>(value); }
    template<typename DestinationS3LocationT = S3Location>
    UpdateReportDefinitionRequest& WithDestinationS3Location(DestinationS3LocationT&& value) { SetDestinationS3Location(std::forward<DestinationS3LocationT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
