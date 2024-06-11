﻿/**
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
  class PutReportDefinitionRequest : public ApplicationCostProfilerRequest
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API PutReportDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutReportDefinition"; }

    AWS_APPLICATIONCOSTPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required. ID of the report. You can choose any valid string matching the
     * pattern for the ID.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }
    inline PutReportDefinitionRequest& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline PutReportDefinitionRequest& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline PutReportDefinitionRequest& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. Description of the report.</p>
     */
    inline const Aws::String& GetReportDescription() const{ return m_reportDescription; }
    inline bool ReportDescriptionHasBeenSet() const { return m_reportDescriptionHasBeenSet; }
    inline void SetReportDescription(const Aws::String& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = value; }
    inline void SetReportDescription(Aws::String&& value) { m_reportDescriptionHasBeenSet = true; m_reportDescription = std::move(value); }
    inline void SetReportDescription(const char* value) { m_reportDescriptionHasBeenSet = true; m_reportDescription.assign(value); }
    inline PutReportDefinitionRequest& WithReportDescription(const Aws::String& value) { SetReportDescription(value); return *this;}
    inline PutReportDefinitionRequest& WithReportDescription(Aws::String&& value) { SetReportDescription(std::move(value)); return *this;}
    inline PutReportDefinitionRequest& WithReportDescription(const char* value) { SetReportDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The cadence to generate the report.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::move(value); }
    inline PutReportDefinitionRequest& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}
    inline PutReportDefinitionRequest& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The format to use for the generated report.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline PutReportDefinitionRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline PutReportDefinitionRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. Amazon Simple Storage Service (Amazon S3) location where
     * Application Cost Profiler uploads the report.</p>
     */
    inline const S3Location& GetDestinationS3Location() const{ return m_destinationS3Location; }
    inline bool DestinationS3LocationHasBeenSet() const { return m_destinationS3LocationHasBeenSet; }
    inline void SetDestinationS3Location(const S3Location& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = value; }
    inline void SetDestinationS3Location(S3Location&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::move(value); }
    inline PutReportDefinitionRequest& WithDestinationS3Location(const S3Location& value) { SetDestinationS3Location(value); return *this;}
    inline PutReportDefinitionRequest& WithDestinationS3Location(S3Location&& value) { SetDestinationS3Location(std::move(value)); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
