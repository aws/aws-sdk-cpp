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
    AWS_COSTANDUSAGEREPORTSERVICE_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be returned
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithReportName(const char* value) { SetReportName(value); return *this;}

  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
