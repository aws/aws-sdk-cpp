/**
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
    AWS_COSTANDUSAGEREPORTSERVICE_API PutReportDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutReportDefinition"; }

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String SerializePayload() const override;

    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Represents the output of the PutReportDefinition operation. The content
     * consists of the detailed metadata and data file information. </p>
     */
    inline const ReportDefinition& GetReportDefinition() const { return m_reportDefinition; }
    inline bool ReportDefinitionHasBeenSet() const { return m_reportDefinitionHasBeenSet; }
    template<typename ReportDefinitionT = ReportDefinition>
    void SetReportDefinition(ReportDefinitionT&& value) { m_reportDefinitionHasBeenSet = true; m_reportDefinition = std::forward<ReportDefinitionT>(value); }
    template<typename ReportDefinitionT = ReportDefinition>
    PutReportDefinitionRequest& WithReportDefinition(ReportDefinitionT&& value) { SetReportDefinition(std::forward<ReportDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the report definition resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutReportDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutReportDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ReportDefinition m_reportDefinition;
    bool m_reportDefinitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
