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
    AWS_CLOUDWATCHEVIDENTLY_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


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
    inline const ProjectAppConfigResourceConfig& GetAppConfigResource() const{ return m_appConfigResource; }

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
    inline bool AppConfigResourceHasBeenSet() const { return m_appConfigResourceHasBeenSet; }

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
    inline void SetAppConfigResource(const ProjectAppConfigResourceConfig& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = value; }

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
    inline void SetAppConfigResource(ProjectAppConfigResourceConfig&& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = std::move(value); }

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
    inline CreateProjectRequest& WithAppConfigResource(const ProjectAppConfigResourceConfig& value) { SetAppConfigResource(value); return *this;}

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
    inline CreateProjectRequest& WithAppConfigResource(ProjectAppConfigResourceConfig&& value) { SetAppConfigResource(std::move(value)); return *this;}


    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline const ProjectDataDeliveryConfig& GetDataDelivery() const{ return m_dataDelivery; }

    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline bool DataDeliveryHasBeenSet() const { return m_dataDeliveryHasBeenSet; }

    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline void SetDataDelivery(const ProjectDataDeliveryConfig& value) { m_dataDeliveryHasBeenSet = true; m_dataDelivery = value; }

    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline void SetDataDelivery(ProjectDataDeliveryConfig&& value) { m_dataDeliveryHasBeenSet = true; m_dataDelivery = std::move(value); }

    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline CreateProjectRequest& WithDataDelivery(const ProjectDataDeliveryConfig& value) { SetDataDelivery(value); return *this;}

    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage, if you choose to do so. If you choose
     * not to store these events, Evidently deletes them after using them to produce
     * metrics and other experiment results that you can view.</p>
     */
    inline CreateProjectRequest& WithDataDelivery(ProjectDataDeliveryConfig&& value) { SetDataDelivery(std::move(value)); return *this;}


    /**
     * <p>An optional description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name for the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the project.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * project.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateProjectRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
