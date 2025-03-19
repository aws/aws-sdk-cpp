/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SCApplicationAttributes.h>
#include <aws/dms/model/DataProviderDescriptorDefinition.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ModifyMigrationProjectRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyMigrationProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyMigrationProject"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the migration project. Identifiers must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    template<typename MigrationProjectIdentifierT = Aws::String>
    void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value); }
    template<typename MigrationProjectIdentifierT = Aws::String>
    ModifyMigrationProjectRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectName() const { return m_migrationProjectName; }
    inline bool MigrationProjectNameHasBeenSet() const { return m_migrationProjectNameHasBeenSet; }
    template<typename MigrationProjectNameT = Aws::String>
    void SetMigrationProjectName(MigrationProjectNameT&& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = std::forward<MigrationProjectNameT>(value); }
    template<typename MigrationProjectNameT = Aws::String>
    ModifyMigrationProjectRequest& WithMigrationProjectName(MigrationProjectNameT&& value) { SetMigrationProjectName(std::forward<MigrationProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetSourceDataProviderDescriptors() const { return m_sourceDataProviderDescriptors; }
    inline bool SourceDataProviderDescriptorsHasBeenSet() const { return m_sourceDataProviderDescriptorsHasBeenSet; }
    template<typename SourceDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptorDefinition>>
    void SetSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = std::forward<SourceDataProviderDescriptorsT>(value); }
    template<typename SourceDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptorDefinition>>
    ModifyMigrationProjectRequest& WithSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { SetSourceDataProviderDescriptors(std::forward<SourceDataProviderDescriptorsT>(value)); return *this;}
    template<typename SourceDataProviderDescriptorsT = DataProviderDescriptorDefinition>
    ModifyMigrationProjectRequest& AddSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.emplace_back(std::forward<SourceDataProviderDescriptorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetTargetDataProviderDescriptors() const { return m_targetDataProviderDescriptors; }
    inline bool TargetDataProviderDescriptorsHasBeenSet() const { return m_targetDataProviderDescriptorsHasBeenSet; }
    template<typename TargetDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptorDefinition>>
    void SetTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = std::forward<TargetDataProviderDescriptorsT>(value); }
    template<typename TargetDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptorDefinition>>
    ModifyMigrationProjectRequest& WithTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { SetTargetDataProviderDescriptors(std::forward<TargetDataProviderDescriptorsT>(value)); return *this;}
    template<typename TargetDataProviderDescriptorsT = DataProviderDescriptorDefinition>
    ModifyMigrationProjectRequest& AddTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.emplace_back(std::forward<TargetDataProviderDescriptorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileIdentifier() const { return m_instanceProfileIdentifier; }
    inline bool InstanceProfileIdentifierHasBeenSet() const { return m_instanceProfileIdentifierHasBeenSet; }
    template<typename InstanceProfileIdentifierT = Aws::String>
    void SetInstanceProfileIdentifier(InstanceProfileIdentifierT&& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = std::forward<InstanceProfileIdentifierT>(value); }
    template<typename InstanceProfileIdentifierT = Aws::String>
    ModifyMigrationProjectRequest& WithInstanceProfileIdentifier(InstanceProfileIdentifierT&& value) { SetInstanceProfileIdentifier(std::forward<InstanceProfileIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline const Aws::String& GetTransformationRules() const { return m_transformationRules; }
    inline bool TransformationRulesHasBeenSet() const { return m_transformationRulesHasBeenSet; }
    template<typename TransformationRulesT = Aws::String>
    void SetTransformationRules(TransformationRulesT&& value) { m_transformationRulesHasBeenSet = true; m_transformationRules = std::forward<TransformationRulesT>(value); }
    template<typename TransformationRulesT = Aws::String>
    ModifyMigrationProjectRequest& WithTransformationRules(TransformationRulesT&& value) { SetTransformationRules(std::forward<TransformationRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyMigrationProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline const SCApplicationAttributes& GetSchemaConversionApplicationAttributes() const { return m_schemaConversionApplicationAttributes; }
    inline bool SchemaConversionApplicationAttributesHasBeenSet() const { return m_schemaConversionApplicationAttributesHasBeenSet; }
    template<typename SchemaConversionApplicationAttributesT = SCApplicationAttributes>
    void SetSchemaConversionApplicationAttributes(SchemaConversionApplicationAttributesT&& value) { m_schemaConversionApplicationAttributesHasBeenSet = true; m_schemaConversionApplicationAttributes = std::forward<SchemaConversionApplicationAttributesT>(value); }
    template<typename SchemaConversionApplicationAttributesT = SCApplicationAttributes>
    ModifyMigrationProjectRequest& WithSchemaConversionApplicationAttributes(SchemaConversionApplicationAttributesT&& value) { SetSchemaConversionApplicationAttributes(std::forward<SchemaConversionApplicationAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_migrationProjectName;
    bool m_migrationProjectNameHasBeenSet = false;

    Aws::Vector<DataProviderDescriptorDefinition> m_sourceDataProviderDescriptors;
    bool m_sourceDataProviderDescriptorsHasBeenSet = false;

    Aws::Vector<DataProviderDescriptorDefinition> m_targetDataProviderDescriptors;
    bool m_targetDataProviderDescriptorsHasBeenSet = false;

    Aws::String m_instanceProfileIdentifier;
    bool m_instanceProfileIdentifierHasBeenSet = false;

    Aws::String m_transformationRules;
    bool m_transformationRulesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SCApplicationAttributes m_schemaConversionApplicationAttributes;
    bool m_schemaConversionApplicationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
