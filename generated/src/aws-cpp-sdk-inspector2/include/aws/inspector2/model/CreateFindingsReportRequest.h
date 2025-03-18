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
    AWS_INSPECTOR2_API CreateFindingsReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFindingsReport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The filter criteria to apply to the results of the finding report.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    CreateFindingsReportRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format to generate the report in.</p>
     */
    inline ReportFormat GetReportFormat() const { return m_reportFormat; }
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }
    inline void SetReportFormat(ReportFormat value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }
    inline CreateFindingsReportRequest& WithReportFormat(ReportFormat value) { SetReportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 export destination for the report.</p>
     */
    inline const Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = Destination>
    CreateFindingsReportRequest& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    ReportFormat m_reportFormat{ReportFormat::NOT_SET};
    bool m_reportFormatHasBeenSet = false;

    Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
