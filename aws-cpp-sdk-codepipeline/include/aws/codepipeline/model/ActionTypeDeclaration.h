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
    AWS_CODEPIPELINE_API ActionTypeDeclaration();
    AWS_CODEPIPELINE_API ActionTypeDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline const ActionTypeExecutor& GetExecutor() const{ return m_executor; }

    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline bool ExecutorHasBeenSet() const { return m_executorHasBeenSet; }

    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline void SetExecutor(const ActionTypeExecutor& value) { m_executorHasBeenSet = true; m_executor = value; }

    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline void SetExecutor(ActionTypeExecutor&& value) { m_executorHasBeenSet = true; m_executor = std::move(value); }

    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline ActionTypeDeclaration& WithExecutor(const ActionTypeExecutor& value) { SetExecutor(value); return *this;}

    /**
     * <p>Information about the executor for an action type that was created with any
     * supported integration model.</p>
     */
    inline ActionTypeDeclaration& WithExecutor(ActionTypeExecutor&& value) { SetExecutor(std::move(value)); return *this;}


    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline const ActionTypeIdentifier& GetId() const{ return m_id; }

    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline void SetId(const ActionTypeIdentifier& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline void SetId(ActionTypeIdentifier&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline ActionTypeDeclaration& WithId(const ActionTypeIdentifier& value) { SetId(value); return *this;}

    /**
     * <p>The action category, owner, provider, and version of the action type to be
     * updated.</p>
     */
    inline ActionTypeDeclaration& WithId(ActionTypeIdentifier&& value) { SetId(std::move(value)); return *this;}


    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline const ActionTypeArtifactDetails& GetInputArtifactDetails() const{ return m_inputArtifactDetails; }

    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }

    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline void SetInputArtifactDetails(const ActionTypeArtifactDetails& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = value; }

    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline void SetInputArtifactDetails(ActionTypeArtifactDetails&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::move(value); }

    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline ActionTypeDeclaration& WithInputArtifactDetails(const ActionTypeArtifactDetails& value) { SetInputArtifactDetails(value); return *this;}

    /**
     * <p>Details for the artifacts, such as application files, to be worked on by the
     * action. For example, the minimum and maximum number of input artifacts
     * allowed.</p>
     */
    inline ActionTypeDeclaration& WithInputArtifactDetails(ActionTypeArtifactDetails&& value) { SetInputArtifactDetails(std::move(value)); return *this;}


    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline const ActionTypeArtifactDetails& GetOutputArtifactDetails() const{ return m_outputArtifactDetails; }

    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }

    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline void SetOutputArtifactDetails(const ActionTypeArtifactDetails& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = value; }

    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline void SetOutputArtifactDetails(ActionTypeArtifactDetails&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::move(value); }

    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline ActionTypeDeclaration& WithOutputArtifactDetails(const ActionTypeArtifactDetails& value) { SetOutputArtifactDetails(value); return *this;}

    /**
     * <p>Details for the output artifacts, such as a built application, that are the
     * result of the action. For example, the minimum and maximum number of output
     * artifacts allowed.</p>
     */
    inline ActionTypeDeclaration& WithOutputArtifactDetails(ActionTypeArtifactDetails&& value) { SetOutputArtifactDetails(std::move(value)); return *this;}


    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline const ActionTypePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline void SetPermissions(const ActionTypePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline void SetPermissions(ActionTypePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline ActionTypeDeclaration& WithPermissions(const ActionTypePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>Details identifying the accounts with permissions to use the action type.</p>
     */
    inline ActionTypeDeclaration& WithPermissions(ActionTypePermissions&& value) { SetPermissions(std::move(value)); return *this;}


    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline const Aws::Vector<ActionTypeProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline void SetProperties(const Aws::Vector<ActionTypeProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline void SetProperties(Aws::Vector<ActionTypeProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithProperties(const Aws::Vector<ActionTypeProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithProperties(Aws::Vector<ActionTypeProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& AddProperties(const ActionTypeProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>The properties of the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& AddProperties(ActionTypeProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline const ActionTypeUrls& GetUrls() const{ return m_urls; }

    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline void SetUrls(const ActionTypeUrls& value) { m_urlsHasBeenSet = true; m_urls = value; }

    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline void SetUrls(ActionTypeUrls&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithUrls(const ActionTypeUrls& value) { SetUrls(value); return *this;}

    /**
     * <p>The links associated with the action type to be updated.</p>
     */
    inline ActionTypeDeclaration& WithUrls(ActionTypeUrls&& value) { SetUrls(std::move(value)); return *this;}

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
