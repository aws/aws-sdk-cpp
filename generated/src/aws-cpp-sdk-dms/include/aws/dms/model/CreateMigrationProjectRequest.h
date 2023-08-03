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
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class CreateMigrationProjectRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateMigrationProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMigrationProject"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectName() const{ return m_migrationProjectName; }

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline bool MigrationProjectNameHasBeenSet() const { return m_migrationProjectNameHasBeenSet; }

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline void SetMigrationProjectName(const Aws::String& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = value; }

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline void SetMigrationProjectName(Aws::String&& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = std::move(value); }

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline void SetMigrationProjectName(const char* value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName.assign(value); }

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithMigrationProjectName(const Aws::String& value) { SetMigrationProjectName(value); return *this;}

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithMigrationProjectName(Aws::String&& value) { SetMigrationProjectName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithMigrationProjectName(const char* value) { SetMigrationProjectName(value); return *this;}


    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetSourceDataProviderDescriptors() const{ return m_sourceDataProviderDescriptors; }

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline bool SourceDataProviderDescriptorsHasBeenSet() const { return m_sourceDataProviderDescriptorsHasBeenSet; }

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline void SetSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = value; }

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline void SetSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = std::move(value); }

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& WithSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { SetSourceDataProviderDescriptors(value); return *this;}

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& WithSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { SetSourceDataProviderDescriptors(std::move(value)); return *this;}

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& AddSourceDataProviderDescriptors(const DataProviderDescriptorDefinition& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(value); return *this; }

    /**
     * <p>Information about the source data provider, including the name, ARN, and
     * Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& AddSourceDataProviderDescriptors(DataProviderDescriptorDefinition&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptorDefinition>& GetTargetDataProviderDescriptors() const{ return m_targetDataProviderDescriptors; }

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline bool TargetDataProviderDescriptorsHasBeenSet() const { return m_targetDataProviderDescriptorsHasBeenSet; }

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline void SetTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = value; }

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline void SetTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = std::move(value); }

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& WithTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptorDefinition>& value) { SetTargetDataProviderDescriptors(value); return *this;}

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& WithTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptorDefinition>&& value) { SetTargetDataProviderDescriptors(std::move(value)); return *this;}

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& AddTargetDataProviderDescriptors(const DataProviderDescriptorDefinition& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(value); return *this; }

    /**
     * <p>Information about the target data provider, including the name, ARN, and
     * Amazon Web Services Secrets Manager parameters.</p>
     */
    inline CreateMigrationProjectRequest& AddTargetDataProviderDescriptors(DataProviderDescriptorDefinition&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetInstanceProfileIdentifier() const{ return m_instanceProfileIdentifier; }

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline bool InstanceProfileIdentifierHasBeenSet() const { return m_instanceProfileIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(const Aws::String& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = value; }

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(Aws::String&& value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier = std::move(value); }

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline void SetInstanceProfileIdentifier(const char* value) { m_instanceProfileIdentifierHasBeenSet = true; m_instanceProfileIdentifier.assign(value); }

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline CreateMigrationProjectRequest& WithInstanceProfileIdentifier(const Aws::String& value) { SetInstanceProfileIdentifier(value); return *this;}

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline CreateMigrationProjectRequest& WithInstanceProfileIdentifier(Aws::String&& value) { SetInstanceProfileIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the associated instance profile. Identifiers must begin
     * with a letter and must contain only ASCII letters, digits, and hyphens. They
     * can't end with a hyphen, or contain two consecutive hyphens.</p>
     */
    inline CreateMigrationProjectRequest& WithInstanceProfileIdentifier(const char* value) { SetInstanceProfileIdentifier(value); return *this;}


    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline const Aws::String& GetTransformationRules() const{ return m_transformationRules; }

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline bool TransformationRulesHasBeenSet() const { return m_transformationRulesHasBeenSet; }

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline void SetTransformationRules(const Aws::String& value) { m_transformationRulesHasBeenSet = true; m_transformationRules = value; }

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline void SetTransformationRules(Aws::String&& value) { m_transformationRulesHasBeenSet = true; m_transformationRules = std::move(value); }

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline void SetTransformationRules(const char* value) { m_transformationRulesHasBeenSet = true; m_transformationRules.assign(value); }

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline CreateMigrationProjectRequest& WithTransformationRules(const Aws::String& value) { SetTransformationRules(value); return *this;}

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline CreateMigrationProjectRequest& WithTransformationRules(Aws::String&& value) { SetTransformationRules(std::move(value)); return *this;}

    /**
     * <p>The settings in JSON format for migration rules. Migration rules make it
     * possible for you to change the object names according to the rules that you
     * specify. For example, you can change an object name to lowercase or uppercase,
     * add or remove a prefix or suffix, or rename objects.</p>
     */
    inline CreateMigrationProjectRequest& WithTransformationRules(const char* value) { SetTransformationRules(value); return *this;}


    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-friendly description of the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline CreateMigrationProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline CreateMigrationProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags to be assigned to the migration project.</p>
     */
    inline CreateMigrationProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline const SCApplicationAttributes& GetSchemaConversionApplicationAttributes() const{ return m_schemaConversionApplicationAttributes; }

    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline bool SchemaConversionApplicationAttributesHasBeenSet() const { return m_schemaConversionApplicationAttributesHasBeenSet; }

    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline void SetSchemaConversionApplicationAttributes(const SCApplicationAttributes& value) { m_schemaConversionApplicationAttributesHasBeenSet = true; m_schemaConversionApplicationAttributes = value; }

    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline void SetSchemaConversionApplicationAttributes(SCApplicationAttributes&& value) { m_schemaConversionApplicationAttributesHasBeenSet = true; m_schemaConversionApplicationAttributes = std::move(value); }

    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline CreateMigrationProjectRequest& WithSchemaConversionApplicationAttributes(const SCApplicationAttributes& value) { SetSchemaConversionApplicationAttributes(value); return *this;}

    /**
     * <p>The schema conversion application attributes, including the Amazon S3 bucket
     * name and Amazon S3 role ARN.</p>
     */
    inline CreateMigrationProjectRequest& WithSchemaConversionApplicationAttributes(SCApplicationAttributes&& value) { SetSchemaConversionApplicationAttributes(std::move(value)); return *this;}

  private:

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SCApplicationAttributes m_schemaConversionApplicationAttributes;
    bool m_schemaConversionApplicationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
