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
   * <p>Deletes the specified report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class DeleteReportDefinitionRequest : public CostandUsageReportServiceRequest
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReportDefinition"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline DeleteReportDefinitionRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline DeleteReportDefinitionRequest& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>The name of the report that you want to delete. The name must be unique, is
     * case sensitive, and can't include spaces.</p>
     */
    inline DeleteReportDefinitionRequest& WithReportName(const char* value) { SetReportName(value); return *this;}

  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
