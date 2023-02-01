/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Returns information about URLs for web pages that display to customers as
   * links on the pipeline view, such as an external configuration page for the
   * action type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeUrls">AWS
   * API Reference</a></p>
   */
  class ActionTypeUrls
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeUrls();
    AWS_CODEPIPELINE_API ActionTypeUrls(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeUrls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline const Aws::String& GetConfigurationUrl() const{ return m_configurationUrl; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline bool ConfigurationUrlHasBeenSet() const { return m_configurationUrlHasBeenSet; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline void SetConfigurationUrl(const Aws::String& value) { m_configurationUrlHasBeenSet = true; m_configurationUrl = value; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline void SetConfigurationUrl(Aws::String&& value) { m_configurationUrlHasBeenSet = true; m_configurationUrl = std::move(value); }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline void SetConfigurationUrl(const char* value) { m_configurationUrlHasBeenSet = true; m_configurationUrl.assign(value); }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline ActionTypeUrls& WithConfigurationUrl(const Aws::String& value) { SetConfigurationUrl(value); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline ActionTypeUrls& WithConfigurationUrl(Aws::String&& value) { SetConfigurationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline ActionTypeUrls& WithConfigurationUrl(const char* value) { SetConfigurationUrl(value); return *this;}


    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline const Aws::String& GetEntityUrlTemplate() const{ return m_entityUrlTemplate; }

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline bool EntityUrlTemplateHasBeenSet() const { return m_entityUrlTemplateHasBeenSet; }

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline void SetEntityUrlTemplate(const Aws::String& value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate = value; }

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline void SetEntityUrlTemplate(Aws::String&& value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate = std::move(value); }

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline void SetEntityUrlTemplate(const char* value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate.assign(value); }

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline ActionTypeUrls& WithEntityUrlTemplate(const Aws::String& value) { SetEntityUrlTemplate(value); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline ActionTypeUrls& WithEntityUrlTemplate(Aws::String&& value) { SetEntityUrlTemplate(std::move(value)); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline ActionTypeUrls& WithEntityUrlTemplate(const char* value) { SetEntityUrlTemplate(value); return *this;}


    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline const Aws::String& GetExecutionUrlTemplate() const{ return m_executionUrlTemplate; }

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline bool ExecutionUrlTemplateHasBeenSet() const { return m_executionUrlTemplateHasBeenSet; }

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline void SetExecutionUrlTemplate(const Aws::String& value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate = value; }

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline void SetExecutionUrlTemplate(Aws::String&& value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate = std::move(value); }

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline void SetExecutionUrlTemplate(const char* value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate.assign(value); }

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline ActionTypeUrls& WithExecutionUrlTemplate(const Aws::String& value) { SetExecutionUrlTemplate(value); return *this;}

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline ActionTypeUrls& WithExecutionUrlTemplate(Aws::String&& value) { SetExecutionUrlTemplate(std::move(value)); return *this;}

    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline ActionTypeUrls& WithExecutionUrlTemplate(const char* value) { SetExecutionUrlTemplate(value); return *this;}


    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline const Aws::String& GetRevisionUrlTemplate() const{ return m_revisionUrlTemplate; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline bool RevisionUrlTemplateHasBeenSet() const { return m_revisionUrlTemplateHasBeenSet; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline void SetRevisionUrlTemplate(const Aws::String& value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate = value; }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline void SetRevisionUrlTemplate(Aws::String&& value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate = std::move(value); }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline void SetRevisionUrlTemplate(const char* value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate.assign(value); }

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline ActionTypeUrls& WithRevisionUrlTemplate(const Aws::String& value) { SetRevisionUrlTemplate(value); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline ActionTypeUrls& WithRevisionUrlTemplate(Aws::String&& value) { SetRevisionUrlTemplate(std::move(value)); return *this;}

    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline ActionTypeUrls& WithRevisionUrlTemplate(const char* value) { SetRevisionUrlTemplate(value); return *this;}

  private:

    Aws::String m_configurationUrl;
    bool m_configurationUrlHasBeenSet = false;

    Aws::String m_entityUrlTemplate;
    bool m_entityUrlTemplateHasBeenSet = false;

    Aws::String m_executionUrlTemplate;
    bool m_executionUrlTemplateHasBeenSet = false;

    Aws::String m_revisionUrlTemplate;
    bool m_revisionUrlTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
