/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateExplainabilityExportRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExplainabilityExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityExportName() const { return m_explainabilityExportName; }
    inline bool ExplainabilityExportNameHasBeenSet() const { return m_explainabilityExportNameHasBeenSet; }
    template<typename ExplainabilityExportNameT = Aws::String>
    void SetExplainabilityExportName(ExplainabilityExportNameT&& value) { m_explainabilityExportNameHasBeenSet = true; m_explainabilityExportName = std::forward<ExplainabilityExportNameT>(value); }
    template<typename ExplainabilityExportNameT = Aws::String>
    CreateExplainabilityExportRequest& WithExplainabilityExportName(ExplainabilityExportNameT&& value) { SetExplainabilityExportName(std::forward<ExplainabilityExportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability to export.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const { return m_explainabilityArn; }
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }
    template<typename ExplainabilityArnT = Aws::String>
    void SetExplainabilityArn(ExplainabilityArnT&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::forward<ExplainabilityArnT>(value); }
    template<typename ExplainabilityArnT = Aws::String>
    CreateExplainabilityExportRequest& WithExplainabilityArn(ExplainabilityArnT&& value) { SetExplainabilityArn(std::forward<ExplainabilityArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    CreateExplainabilityExportRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata to help you categorize and organize your resources. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateExplainabilityExportRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateExplainabilityExportRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    CreateExplainabilityExportRequest& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityExportName;
    bool m_explainabilityExportNameHasBeenSet = false;

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
