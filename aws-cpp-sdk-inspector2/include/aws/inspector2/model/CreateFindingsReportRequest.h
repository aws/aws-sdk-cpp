/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/FilterCriteria.h>
#include <aws/inspector2/model/ReportFormat.h>
#include <aws/inspector2/model/Destination.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class CreateFindingsReportRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API CreateFindingsReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFindingsReport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline CreateFindingsReportRequest& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline CreateFindingsReportRequest& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The format to generate the report in.</p>
     */
    inline const ReportFormat& GetReportFormat() const{ return m_reportFormat; }

    /**
     * <p>The format to generate the report in.</p>
     */
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }

    /**
     * <p>The format to generate the report in.</p>
     */
    inline void SetReportFormat(const ReportFormat& value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }

    /**
     * <p>The format to generate the report in.</p>
     */
    inline void SetReportFormat(ReportFormat&& value) { m_reportFormatHasBeenSet = true; m_reportFormat = std::move(value); }

    /**
     * <p>The format to generate the report in.</p>
     */
    inline CreateFindingsReportRequest& WithReportFormat(const ReportFormat& value) { SetReportFormat(value); return *this;}

    /**
     * <p>The format to generate the report in.</p>
     */
    inline CreateFindingsReportRequest& WithReportFormat(ReportFormat&& value) { SetReportFormat(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline const Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline void SetS3Destination(const Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline void SetS3Destination(Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline CreateFindingsReportRequest& WithS3Destination(const Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline CreateFindingsReportRequest& WithS3Destination(Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    ReportFormat m_reportFormat;
    bool m_reportFormatHasBeenSet = false;

    Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
