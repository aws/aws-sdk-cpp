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
    AWS_DATABASEMIGRATIONSERVICE_API ModifyMigrationProjectRequest();

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
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }
    inline ModifyMigrationProjectRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}
    inline ModifyMigrationProjectRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectName() const{ return m_migrationProjectName; }
    inline bool MigrationProjectNameHasBeenSet() const { return m_migrationProjectNameHasBeenSet; }
    inline void SetMigrationProjectName(const Aws::String& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = value; }
    inline void SetMigrationProjectName(Aws::String&& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = std::move(value); }
    inline void SetMigrationProjectName(const char* value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName.assign(value); }
    inline ModifyMigrationProjectRequest& WithMigrationProjectName(const Aws::String& value) { SetMigrationProjectName(value); return *this;}
    inline ModifyMigrationProjectRequest& WithMigrationProjectName(Aws::String&& value) { SetMigrationProjectName(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& WithMigrationProjectName(const char* value) { SetMigrationProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetSourceDataProviderDescriptors() const{ return m_sourceDataProviderDescriptors; }
    inline bool SourceDataProviderDescriptorsHasBeenSet() const { return m_sourceDataProviderDescriptorsHasBeenSet; }
    inline void SetSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = value; }
    inline void SetSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = std::move(value); }
    inline ModifyMigrationProjectRequest& WithSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { SetSourceDataProviderDescriptors(value); return *this;}
    inline ModifyMigrationProjectRequest& WithSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { SetSourceDataProviderDescriptors(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& AddSourceDataProviderDescriptors(const DataProviderDescriptorDefinition& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(value); return *this; }
    inline ModifyMigrationProjectRequest& AddSourceDataProviderDescriptors(DataProviderDescriptorDefinition&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetTargetDataProviderDescriptors() const{ return m_targetDataProviderDescriptors; }
    inline bool TargetDataProviderDescriptorsHasBeenSet() const { return m_targetDataProviderDescriptorsHasBeenSet; }
    inline void SetTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = value; }
    inline void SetTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = std::move(value); }
    inline ModifyMigrationProjectRequest& WithTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { SetTargetDataProviderDescriptors(value); return *this;}
    inline ModifyMigrationProjectRequest& WithTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { SetTargetDataProviderDescriptors(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& AddTargetDataProviderDescriptors(const DataProviderDescriptorDefinition& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(value); return *this; }
    inline ModifyMigrationProjectRequest& AddTargetDataProviderDescriptors(DataProviderDescriptorDefinition&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileIdentifier() const{ return m_instanceProfileIdentifier; }
    inline bool InstanceProfileIdentifierHasBeenSet() const { return m_instanceProfileIdentifierHasBeenSet; }
    inline void SetInstanceProfileIdentifier(const Aws::String& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = value; }
    inline void SetInstanceProfileIdentifier(Aws::String&& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = std::move(value); }
    inline void SetInstanceProfileIdentifier(const char* value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier.assign(value); }
    inline ModifyMigrationProjectRequest& WithInstanceProfileIdentifier(const Aws::String& value) { SetInstanceProfileIdentifier(value); return *this;}
    inline ModifyMigrationProjectRequest& WithInstanceProfileIdentifier(Aws::String&& value) { SetInstanceProfileIdentifier(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& WithInstanceProfileIdentifier(const char* value) { SetInstanceProfileIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline const Aws::String& GetTransformationRules() const{ return m_transformationRules; }
    inline bool TransformationRulesHasBeenSet() const { return m_transformationRulesHasBeenSet; }
    inline void SetTransformationRules(const Aws::String& value) { m_transformationRulesHasBeenSet = true; m_transformationRules = value; }
    inline void SetTransformationRules(Aws::String&& value) { m_transformationRulesHasBeenSet = true; m_transformationRules = std::move(value); }
    inline void SetTransformationRules(const char* value) { m_transformationRulesHasBeenSet = true; m_transformationRules.assign(value); }
    inline ModifyMigrationProjectRequest& WithTransformationRules(const Aws::String& value) { SetTransformationRules(value); return *this;}
    inline ModifyMigrationProjectRequest& WithTransformationRules(Aws::String&& value) { SetTransformationRules(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& WithTransformationRules(const char* value) { SetTransformationRules(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyMigrationProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyMigrationProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyMigrationProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline const SCApplicationAttributes& GetSchemaConversionApplicationAttributes() const{ return m_schemaConversionApplicationAttributes; }
    inline bool SchemaConversionApplicationAttributesHasBeenSet() const { return m_schemaConversionApplicationAttributesHasBeenSet; }
    inline void SetSchemaConversionApplicationAttributes(const SCApplicationAttributes& value) { m_schemaConversionApplicationAttributesHasBeenSet = true; m_schemaConversionApplicationAttributes = value; }
    inline void SetSchemaConversionApplicationAttributes(SCApplicationAttributes&& value) { m_schemaConversionApplicationAttributesHasBeenSet = true; m_schemaConversionApplicationAttributes = std::move(value); }
    inline ModifyMigrationProjectRequest& WithSchemaConversionApplicationAttributes(const SCApplicationAttributes& value) { SetSchemaConversionApplicationAttributes(value); return *this;}
    inline ModifyMigrationProjectRequest& WithSchemaConversionApplicationAttributes(SCApplicationAttributes&& value) { SetSchemaConversionApplicationAttributes(std::move(value)); return *this;}
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
