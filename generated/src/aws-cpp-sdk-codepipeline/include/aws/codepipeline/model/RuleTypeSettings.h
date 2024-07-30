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
   * <p>Returns information about the settings for a rule type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleTypeSettings">AWS
   * API Reference</a></p>
   */
  class RuleTypeSettings
  {
  public:
    AWS_CODEPIPELINE_API RuleTypeSettings();
    AWS_CODEPIPELINE_API RuleTypeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleTypeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of a sign-up page where users can sign up for an external service and
     * perform initial configuration of the action provided by that service.</p>
     */
    inline const Aws::String& GetThirdPartyConfigurationUrl() const{ return m_thirdPartyConfigurationUrl; }
    inline bool ThirdPartyConfigurationUrlHasBeenSet() const { return m_thirdPartyConfigurationUrlHasBeenSet; }
    inline void SetThirdPartyConfigurationUrl(const Aws::String& value) { m_thirdPartyConfigurationUrlHasBeenSet = true; m_thirdPartyConfigurationUrl = value; }
    inline void SetThirdPartyConfigurationUrl(Aws::String&& value) { m_thirdPartyConfigurationUrlHasBeenSet = true; m_thirdPartyConfigurationUrl = std::move(value); }
    inline void SetThirdPartyConfigurationUrl(const char* value) { m_thirdPartyConfigurationUrlHasBeenSet = true; m_thirdPartyConfigurationUrl.assign(value); }
    inline RuleTypeSettings& WithThirdPartyConfigurationUrl(const Aws::String& value) { SetThirdPartyConfigurationUrl(value); return *this;}
    inline RuleTypeSettings& WithThirdPartyConfigurationUrl(Aws::String&& value) { SetThirdPartyConfigurationUrl(std::move(value)); return *this;}
    inline RuleTypeSettings& WithThirdPartyConfigurationUrl(const char* value) { SetThirdPartyConfigurationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that provides a deep link to the
     * resources of the external system, such as the configuration page for a
     * CodeDeploy deployment group. This link is provided as part of the action display
     * in the pipeline.</p>
     */
    inline const Aws::String& GetEntityUrlTemplate() const{ return m_entityUrlTemplate; }
    inline bool EntityUrlTemplateHasBeenSet() const { return m_entityUrlTemplateHasBeenSet; }
    inline void SetEntityUrlTemplate(const Aws::String& value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate = value; }
    inline void SetEntityUrlTemplate(Aws::String&& value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate = std::move(value); }
    inline void SetEntityUrlTemplate(const char* value) { m_entityUrlTemplateHasBeenSet = true; m_entityUrlTemplate.assign(value); }
    inline RuleTypeSettings& WithEntityUrlTemplate(const Aws::String& value) { SetEntityUrlTemplate(value); return *this;}
    inline RuleTypeSettings& WithEntityUrlTemplate(Aws::String&& value) { SetEntityUrlTemplate(std::move(value)); return *this;}
    inline RuleTypeSettings& WithEntityUrlTemplate(const char* value) { SetEntityUrlTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the
     * top-level landing page for the external system, such as the console page for
     * CodeDeploy. This link is shown on the pipeline view page in the CodePipeline
     * console and provides a link to the execution entity of the external action.</p>
     */
    inline const Aws::String& GetExecutionUrlTemplate() const{ return m_executionUrlTemplate; }
    inline bool ExecutionUrlTemplateHasBeenSet() const { return m_executionUrlTemplateHasBeenSet; }
    inline void SetExecutionUrlTemplate(const Aws::String& value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate = value; }
    inline void SetExecutionUrlTemplate(Aws::String&& value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate = std::move(value); }
    inline void SetExecutionUrlTemplate(const char* value) { m_executionUrlTemplateHasBeenSet = true; m_executionUrlTemplate.assign(value); }
    inline RuleTypeSettings& WithExecutionUrlTemplate(const Aws::String& value) { SetExecutionUrlTemplate(value); return *this;}
    inline RuleTypeSettings& WithExecutionUrlTemplate(Aws::String&& value) { SetExecutionUrlTemplate(std::move(value)); return *this;}
    inline RuleTypeSettings& WithExecutionUrlTemplate(const char* value) { SetExecutionUrlTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL returned to the CodePipeline console that contains a link to the page
     * where customers can update or change the configuration of the external
     * action.</p>
     */
    inline const Aws::String& GetRevisionUrlTemplate() const{ return m_revisionUrlTemplate; }
    inline bool RevisionUrlTemplateHasBeenSet() const { return m_revisionUrlTemplateHasBeenSet; }
    inline void SetRevisionUrlTemplate(const Aws::String& value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate = value; }
    inline void SetRevisionUrlTemplate(Aws::String&& value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate = std::move(value); }
    inline void SetRevisionUrlTemplate(const char* value) { m_revisionUrlTemplateHasBeenSet = true; m_revisionUrlTemplate.assign(value); }
    inline RuleTypeSettings& WithRevisionUrlTemplate(const Aws::String& value) { SetRevisionUrlTemplate(value); return *this;}
    inline RuleTypeSettings& WithRevisionUrlTemplate(Aws::String&& value) { SetRevisionUrlTemplate(std::move(value)); return *this;}
    inline RuleTypeSettings& WithRevisionUrlTemplate(const char* value) { SetRevisionUrlTemplate(value); return *this;}
    ///@}
  private:

    Aws::String m_thirdPartyConfigurationUrl;
    bool m_thirdPartyConfigurationUrlHasBeenSet = false;

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
