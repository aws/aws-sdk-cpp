/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public CostandUsageReportServiceRequest
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline UntagResourceRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline UntagResourceRequest& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be disassociated
     * from.</p>
     */
    inline UntagResourceRequest& WithReportName(const char* value) { SetReportName(value); return *this;}


    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags to be disassociated from the report definition resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
