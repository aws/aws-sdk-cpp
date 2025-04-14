/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdNamespaceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowMetadata.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A summary of ID namespaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdNamespaceSummary">AWS
   * API Reference</a></p>
   */
  class IdNamespaceSummary
  {
  public:
    AWS_ENTITYRESOLUTION_API IdNamespaceSummary() = default;
    AWS_ENTITYRESOLUTION_API IdNamespaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdNamespaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceName() const { return m_idNamespaceName; }
    inline bool IdNamespaceNameHasBeenSet() const { return m_idNamespaceNameHasBeenSet; }
    template<typename IdNamespaceNameT = Aws::String>
    void SetIdNamespaceName(IdNamespaceNameT&& value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName = std::forward<IdNamespaceNameT>(value); }
    template<typename IdNamespaceNameT = Aws::String>
    IdNamespaceSummary& WithIdNamespaceName(IdNamespaceNameT&& value) { SetIdNamespaceName(std::forward<IdNamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceArn() const { return m_idNamespaceArn; }
    inline bool IdNamespaceArnHasBeenSet() const { return m_idNamespaceArnHasBeenSet; }
    template<typename IdNamespaceArnT = Aws::String>
    void SetIdNamespaceArn(IdNamespaceArnT&& value) { m_idNamespaceArnHasBeenSet = true; m_idNamespaceArn = std::forward<IdNamespaceArnT>(value); }
    template<typename IdNamespaceArnT = Aws::String>
    IdNamespaceSummary& WithIdNamespaceArn(IdNamespaceArnT&& value) { SetIdNamespaceArn(std::forward<IdNamespaceArnT>(value)); return *this;}
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
    IdNamespaceSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines any additional configurations required by the ID
     * mapping workflow.</p>
     */
    inline const Aws::Vector<IdNamespaceIdMappingWorkflowMetadata>& GetIdMappingWorkflowProperties() const { return m_idMappingWorkflowProperties; }
    inline bool IdMappingWorkflowPropertiesHasBeenSet() const { return m_idMappingWorkflowPropertiesHasBeenSet; }
    template<typename IdMappingWorkflowPropertiesT = Aws::Vector<IdNamespaceIdMappingWorkflowMetadata>>
    void SetIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = std::forward<IdMappingWorkflowPropertiesT>(value); }
    template<typename IdMappingWorkflowPropertiesT = Aws::Vector<IdNamespaceIdMappingWorkflowMetadata>>
    IdNamespaceSummary& WithIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { SetIdMappingWorkflowProperties(std::forward<IdMappingWorkflowPropertiesT>(value)); return *this;}
    template<typename IdMappingWorkflowPropertiesT = IdNamespaceIdMappingWorkflowMetadata>
    IdNamespaceSummary& AddIdMappingWorkflowProperties(IdMappingWorkflowPropertiesT&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.emplace_back(std::forward<IdMappingWorkflowPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> which all <code>sourceIds</code> will resolve to.</p>
     */
    inline IdNamespaceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IdNamespaceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline IdNamespaceSummary& WithType(IdNamespaceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    IdNamespaceSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    IdNamespaceSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceName;
    bool m_idNamespaceNameHasBeenSet = false;

    Aws::String m_idNamespaceArn;
    bool m_idNamespaceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IdNamespaceIdMappingWorkflowMetadata> m_idMappingWorkflowProperties;
    bool m_idMappingWorkflowPropertiesHasBeenSet = false;

    IdNamespaceType m_type{IdNamespaceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
