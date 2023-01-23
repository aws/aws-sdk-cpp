/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class GetFindingsReportStatusRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API GetFindingsReportStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsReportStatus"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline GetFindingsReportStatusRequest& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline GetFindingsReportStatusRequest& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>The ID of the report to retrieve the status of.</p>
     */
    inline GetFindingsReportStatusRequest& WithReportId(const char* value) { SetReportId(value); return *this;}

  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
