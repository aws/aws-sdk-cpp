/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cur/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public CostandUsageReportServiceRequest
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline const Aws::String& GetReportName() const{ return m_reportName; }

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline void SetReportName(const Aws::String& value) { m_reportNameHasBeenSet = true; m_reportName = value; }

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline void SetReportName(Aws::String&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline void SetReportName(const char* value) { m_reportNameHasBeenSet = true; m_reportName.assign(value); }

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline TagResourceRequest& WithReportName(const Aws::String& value) { SetReportName(value); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline TagResourceRequest& WithReportName(Aws::String&& value) { SetReportName(std::move(value)); return *this;}

    /**
     * <p>The report name of the report definition that tags are to be associated
     * with.</p>
     */
    inline TagResourceRequest& WithReportName(const char* value) { SetReportName(value); return *this;}


    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
