/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public CostandUsageReportServiceRequest
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API ListTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline const Aws::String& GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    template<typename ReportNameT = Aws::String>
    void SetReportName(ReportNameT&& value) { m_reportNameHasBeenSet = true; m_reportName = std::forward<ReportNameT>(value); }
    template<typename ReportNameT = Aws::String>
    ListTagsForResourceRequest& WithReportName(ReportNameT&& value) { SetReportName(std::forward<ReportNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
