/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   */
  class GetReportDefinitionRequest : public ApplicationCostProfilerRequest
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API GetReportDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReportDefinition"; }

    AWS_APPLICATIONCOSTPROFILER_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline GetReportDefinitionRequest& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline GetReportDefinitionRequest& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>ID of the report to retrieve.</p>
     */
    inline GetReportDefinitionRequest& WithReportId(const char* value) { SetReportId(value); return *this;}

  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
