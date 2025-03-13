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
    AWS_CODEPIPELINE_API ActionTypeUrls() = default;
    AWS_CODEPIPELINE_API ActionTypeUrls(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeUrls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can configure the external action.</p>
     */
    inline const Aws::String& GetConfigurationUrl() const { return m_configurationUrl; }
    inline bool ConfigurationUrlHasBeenSet() const { return m_configurationUrlHasBeenSet; }
    template<typename ConfigurationUrlT = Aws::String>
    void SetConfigurationUrl(ConfigurationUrlT&& value) { m_configurationUrlHasBeenSet = true; m_configurationUrl = std::forward<ConfigurationUrlT>(value); }
    template<typename ConfigurationUrlT = Aws::String>
    ActionTypeUrls& WithConfigurationUrl(ConfigurationUrlT&& value) { SetConfigurationUrl(std::forward<ConfigurationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as a status page. This link is provided
     * as part of the action display in the pipeline.</p>
     */
    inline const Aws::String& GetEntityUrlTemplate() const { return m_entityUrlTemplate; }
    inline bool EntityUrlTemplateHasBeenSet() const { return m_entityUrlTemplateHasBeenSet; }
    template<typename EntityUrlTemplateT = Aws::String>
    void SetEntityUrlTemplate(EntityUrlTemplateT&& value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate = std::forward<EntityUrlTemplateT>(value); }
    template<typename EntityUrlTemplateT = Aws::String>
    ActionTypeUrls& WithEntityUrlTemplate(EntityUrlTemplateT&& value) { SetEntityUrlTemplate(std::forward<EntityUrlTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link to an execution page for the action type in progress. For example,
     * for a CodeDeploy action, this link is shown on the pipeline view page in the
     * CodePipeline console, and it links to a CodeDeploy status page.</p>
     */
    inline const Aws::String& GetExecutionUrlTemplate() const { return m_executionUrlTemplate; }
    inline bool ExecutionUrlTemplateHasBeenSet() const { return m_executionUrlTemplateHasBeenSet; }
    template<typename ExecutionUrlTemplateT = Aws::String>
    void SetExecutionUrlTemplate(ExecutionUrlTemplateT&& value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate = std::forward<ExecutionUrlTemplateT>(value); }
    template<typename ExecutionUrlTemplateT = Aws::String>
    ActionTypeUrls& WithExecutionUrlTemplate(ExecutionUrlTemplateT&& value) { SetExecutionUrlTemplate(std::forward<ExecutionUrlTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline const Aws::String& GetRevisionUrlTemplate() const { return m_revisionUrlTemplate; }
    inline bool RevisionUrlTemplateHasBeenSet() const { return m_revisionUrlTemplateHasBeenSet; }
    template<typename RevisionUrlTemplateT = Aws::String>
    void SetRevisionUrlTemplate(RevisionUrlTemplateT&& value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate = std::forward<RevisionUrlTemplateT>(value); }
    template<typename RevisionUrlTemplateT = Aws::String>
    ActionTypeUrls& WithRevisionUrlTemplate(RevisionUrlTemplateT&& value) { SetRevisionUrlTemplate(std::forward<RevisionUrlTemplateT>(value)); return *this;}
    ///@}
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
