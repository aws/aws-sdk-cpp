/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/ProjectAppConfigResourceConfig.h>
#include <aws/evidently/model/ProjectDataDeliveryConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Use this parameter if the project will use <i>client-side evaluation powered
     * by AppConfig</i>. Client-side evaluation allows your application to assign
     * variations to user sessions locally instead of by calling the <a
     * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
     * operation. This mitigates the latency and availability risks that come with an
     * API call. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-client-side-evaluation.html">
     * Client-side evaluation - powered by AppConfig.</a> </p> <p>This parameter is a
     * structure that contains information about the AppConfig application and
     * environment that will be used as for client-side evaluation.</p> <p>To create a
     * project that uses client-side evaluation, you must have the
     * <code>evidently:ExportProjectAsConfiguration</code> permission.</p>
     */
    inline const ProjectAppConfigResourceConfig& GetAppConfigResource() const { return m_appConfigResource; }
    inline bool AppConfigResourceHasBeenSet() const { return m_appConfigResourceHasBeenSet; }
    template<typename AppConfigResourceT = ProjectAppConfigResourceConfig>
    void SetAppConfigResource(AppConfigResourceT&& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = std::forward<AppConfigResourceT>(value); }
    template<typename AppConfigResourceT = ProjectAppConfigResourceConfig>
    CreateProjectRequest& WithAppConfigResource(AppConfigResourceT&& value) { SetAppConfigResource(std::forward<AppConfigResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline const ProjectDataDeliveryConfig& GetDataDelivery() const { return m_dataDelivery; }
    inline bool DataDeliveryHasBeenSet() const { return m_dataDeliveryHasBeenSet; }
    template<typename DataDeliveryT = ProjectDataDeliveryConfig>
    void SetDataDelivery(DataDeliveryT&& value) { m_dataDeliveryHasBeenSet = true; m_dataDelivery = std::forward<DataDeliveryT>(value); }
    template<typename DataDeliveryT = ProjectDataDeliveryConfig>
    CreateProjectRequest& WithDataDelivery(DataDeliveryT&& value) { SetDataDelivery(std::forward<DataDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the project.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProjectRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with a project.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateProjectRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    ProjectAppConfigResourceConfig m_appConfigResource;
    bool m_appConfigResourceHasBeenSet = false;

    ProjectDataDeliveryConfig m_dataDelivery;
    bool m_dataDeliveryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
