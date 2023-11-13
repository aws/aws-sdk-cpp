﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/cur/model/ReportDefinition.h>
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
   * <p>Creates a Cost and Usage Report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class PutReportDefinitionRequest : public CostandUsageReportServiceRequest
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API PutReportDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutReportDefinition"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline const ReportDefinition& GetReportDefinition() const{ return m_reportDefinition; }

    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline bool ReportDefinitionHasBeenSet() const { return m_reportDefinitionHasBeenSet; }

    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline void SetReportDefinition(const ReportDefinition& value) { m_reportDefinitionHasBeenSet = true; m_reportDefinition = value; }

    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline void SetReportDefinition(ReportDefinition&& value) { m_reportDefinitionHasBeenSet = true; m_reportDefinition = std::move(value); }

    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline PutReportDefinitionRequest& WithReportDefinition(const ReportDefinition& value) { SetReportDefinition(value); return *this;}

    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline PutReportDefinitionRequest& WithReportDefinition(ReportDefinition&& value) { SetReportDefinition(std::move(value)); return *this;}


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
    inline PutReportDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline PutReportDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline PutReportDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline PutReportDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ReportDefinition m_reportDefinition;
    bool m_reportDefinitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
