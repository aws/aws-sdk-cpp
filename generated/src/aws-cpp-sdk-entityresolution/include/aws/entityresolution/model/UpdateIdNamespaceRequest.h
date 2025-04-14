/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdNamespaceInputSource.h>
#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowProperties.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class UpdateIdNamespaceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateIdNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdNamespace"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceName() const { return m_idNamespaceName; }
    inline bool IdNamespaceNameHasBeenSet() const { return m_idNamespaceNameHasBeenSet; }
    template<typename IdNamespaceNameT = Aws::String>
    void SetIdNamespaceName(IdNamespaceNameT&& value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName = std::forward<IdNamespaceNameT>(value); }
    template<typename IdNamespaceNameT = Aws::String>
    UpdateIdNamespaceRequest& WithIdNamespaceName(IdNamespaceNameT&& value) { SetIdNamespaceName(std::forward<IdNamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ID namespace.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateIdNamespaceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceInputSource>& GetInputSourceConfig() const { return m_inputSourceConfig; }
    inline bool InputSourceConfigHasBeenSet() const { return m_inputSourceConfigHasBeenSet; }
    template<typename InputSourceConfigT = Aws::Vector<IdNamespaceInputSource>>
    void SetInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::forward<InputSourceConfigT>(value); }
    template<typename InputSourceConfigT = Aws::Vector<IdNamespaceInputSource>>
    UpdateIdNamespaceRequest& WithInputSourceConfig(InputSourceConfigT&& value) { SetInputSourceConfig(std::forward<InputSourceConfigT>(value)); return *this;}
    template<typename InputSourceConfigT = IdNamespaceInputSource>
    UpdateIdNamespaceRequest& AddInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.emplace_back(std::forward<InputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& GetIdMappingWorkflowProperties() const { return m_idMappingWorkflowProperties; }
    inline bool IdMappingWorkflowPropertiesHasBeenSet() const { return m_idMappingWorkflowPropertiesHasBeenSet; }
    template<typename IdMappingWorkflowPropertiesT = Aws::Vector<IdNamespaceIdMappingWorkflowProperties>>
    void SetIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = std::forward<IdMappingWorkflowPropertiesT>(value); }
    template<typename IdMappingWorkflowPropertiesT = Aws::Vector<IdNamespaceIdMappingWorkflowProperties>>
    UpdateIdNamespaceRequest& WithIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { SetIdMappingWorkflowProperties(std::forward<IdMappingWorkflowPropertiesT>(value)); return *this;}
    template<typename IdMappingWorkflowPropertiesT = IdNamespaceIdMappingWorkflowProperties>
    UpdateIdNamespaceRequest& AddIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.emplace_back(std::forward<IdMappingWorkflowPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateIdNamespaceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceName;
    bool m_idNamespaceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IdNamespaceInputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::Vector<IdNamespaceIdMappingWorkflowProperties> m_idMappingWorkflowProperties;
    bool m_idMappingWorkflowPropertiesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
