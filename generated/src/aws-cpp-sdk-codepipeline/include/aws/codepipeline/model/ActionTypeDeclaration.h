/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionTypeExecutor.h>
#include <aws/codepipeline/model/ActionTypeIdentifier.h>
#include <aws/codepipeline/model/ActionTypeArtifactDetails.h>
#include <aws/codepipeline/model/ActionTypePermissions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ActionTypeUrls.h>
#include <aws/codepipeline/model/ActionTypeProperty.h>
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
   * <p>The parameters for the action type definition that are provided when the
   * action type is created or updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeDeclaration">AWS
   * API Reference</a></p>
   */
  class ActionTypeDeclaration
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeDeclaration() = default;
    AWS_CODEPIPELINE_API ActionTypeDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionTypeDeclaration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline const ActionTypeExecutor& GetExecutor() const { return m_executor; }
    inline bool ExecutorHasBeenSet() const { return m_executorHasBeenSet; }
    template<typename ExecutorT = ActionTypeExecutor>
    void SetExecutor(ExecutorT&& value) { m_executorHasBeenSet = true; m_executor = std::forward<ExecutorT>(value); }
    template<typename ExecutorT = ActionTypeExecutor>
    ActionTypeDeclaration& WithExecutor(ExecutorT&& value) { SetExecutor(std::forward<ExecutorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline const ActionTypeIdentifier& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = ActionTypeIdentifier>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = ActionTypeIdentifier>
    ActionTypeDeclaration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline const ActionTypeArtifactDetails& GetInputArtifactDetails() const { return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    template<typename InputArtifactDetailsT = ActionTypeArtifactDetails>
    void SetInputArtifactDetails(InputArtifactDetailsT&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::forward<InputArtifactDetailsT>(value); }
    template<typename InputArtifactDetailsT = ActionTypeArtifactDetails>
    ActionTypeDeclaration& WithInputArtifactDetails(InputArtifactDetailsT&& value) { SetInputArtifactDetails(std::forward<InputArtifactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline const ActionTypeArtifactDetails& GetOutputArtifactDetails() const { return m_outputArtifactDetails; }
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }
    template<typename OutputArtifactDetailsT = ActionTypeArtifactDetails>
    void SetOutputArtifactDetails(OutputArtifactDetailsT&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::forward<OutputArtifactDetailsT>(value); }
    template<typename OutputArtifactDetailsT = ActionTypeArtifactDetails>
    ActionTypeDeclaration& WithOutputArtifactDetails(OutputArtifactDetailsT&& value) { SetOutputArtifactDetails(std::forward<OutputArtifactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline const ActionTypePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = ActionTypePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = ActionTypePermissions>
    ActionTypeDeclaration& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline const Aws::Vector<ActionTypeProperty>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<ActionTypeProperty>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<ActionTypeProperty>>
    ActionTypeDeclaration& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = ActionTypeProperty>
    ActionTypeDeclaration& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline const ActionTypeUrls& GetUrls() const { return m_urls; }
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }
    template<typename UrlsT = ActionTypeUrls>
    void SetUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls = std::forward<UrlsT>(value); }
    template<typename UrlsT = ActionTypeUrls>
    ActionTypeDeclaration& WithUrls(UrlsT&& value) { SetUrls(std::forward<UrlsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionTypeExecutor m_executor;
    bool m_executorHasBeenSet = false;

    ActionTypeIdentifier m_id;
    bool m_idHasBeenSet = false;

    ActionTypeArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet = false;

    ActionTypeArtifactDetails m_outputArtifactDetails;
    bool m_outputArtifactDetailsHasBeenSet = false;

    ActionTypePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<ActionTypeProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    ActionTypeUrls m_urls;
    bool m_urlsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
