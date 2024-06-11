/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SCApplicationAttributes.h>
#include <aws/dms/model/DataProviderDescriptor.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a migration project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MigrationProject">AWS
   * API Reference</a></p>
   */
  class MigrationProject
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject();
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectName() const{ return m_migrationProjectName; }
    inline bool MigrationProjectNameHasBeenSet() const { return m_migrationProjectNameHasBeenSet; }
    inline void SetMigrationProjectName(const Aws::String& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = value; }
    inline void SetMigrationProjectName(Aws::String&& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = std::move(value); }
    inline void SetMigrationProjectName(const char* value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName.assign(value); }
    inline MigrationProject& WithMigrationProjectName(const Aws::String& value) { SetMigrationProjectName(value); return *this;}
    inline MigrationProject& WithMigrationProjectName(Aws::String&& value) { SetMigrationProjectName(std::move(value)); return *this;}
    inline MigrationProject& WithMigrationProjectName(const char* value) { SetMigrationProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN string that uniquely identifies the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const{ return m_migrationProjectArn; }
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }
    inline void SetMigrationProjectArn(const Aws::String& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = value; }
    inline void SetMigrationProjectArn(Aws::String&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::move(value); }
    inline void SetMigrationProjectArn(const char* value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn.assign(value); }
    inline MigrationProject& WithMigrationProjectArn(const Aws::String& value) { SetMigrationProjectArn(value); return *this;}
    inline MigrationProject& WithMigrationProjectArn(Aws::String&& value) { SetMigrationProjectArn(std::move(value)); return *this;}
    inline MigrationProject& WithMigrationProjectArn(const char* value) { SetMigrationProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the migration project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationProjectCreationTime() const{ return m_migrationProjectCreationTime; }
    inline bool MigrationProjectCreationTimeHasBeenSet() const { return m_migrationProjectCreationTimeHasBeenSet; }
    inline void SetMigrationProjectCreationTime(const Aws::Utils::DateTime& value) { m_migrationProjectCreationTimeHasBeenSet = true; m_migrationProjectCreationTime = value; }
    inline void SetMigrationProjectCreationTime(Aws::Utils::DateTime&& value) { m_migrationProjectCreationTimeHasBeenSet = true; m_migrationProjectCreationTime = std::move(value); }
    inline MigrationProject& WithMigrationProjectCreationTime(const Aws::Utils::DateTime& value) { SetMigrationProjectCreationTime(value); return *this;}
    inline MigrationProject& WithMigrationProjectCreationTime(Aws::Utils::DateTime&& value) { SetMigrationProjectCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source data provider, including the name or ARN, and
     * Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptor>& GetSourceDataProviderDescriptors() const{ return m_sourceDataProviderDescriptors; }
    inline bool SourceDataProviderDescriptorsHasBeenSet() const { return m_sourceDataProviderDescriptorsHasBeenSet; }
    inline void SetSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptor>& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = value; }
    inline void SetSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptor>&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = std::move(value); }
    inline MigrationProject& WithSourceDataProviderDescriptors(const Aws::Vector<DataProviderDescriptor>& value) { SetSourceDataProviderDescriptors(value); return *this;}
    inline MigrationProject& WithSourceDataProviderDescriptors(Aws::Vector<DataProviderDescriptor>&& value) { SetSourceDataProviderDescriptors(std::move(value)); return *this;}
    inline MigrationProject& AddSourceDataProviderDescriptors(const DataProviderDescriptor& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(value); return *this; }
    inline MigrationProject& AddSourceDataProviderDescriptors(DataProviderDescriptor&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the target data provider, including the name or ARN, and
     * Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptor>& GetTargetDataProviderDescriptors() const{ return m_targetDataProviderDescriptors; }
    inline bool TargetDataProviderDescriptorsHasBeenSet() const { return m_targetDataProviderDescriptorsHasBeenSet; }
    inline void SetTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptor>& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = value; }
    inline void SetTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptor>&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = std::move(value); }
    inline MigrationProject& WithTargetDataProviderDescriptors(const Aws::Vector<DataProviderDescriptor>& value) { SetTargetDataProviderDescriptors(value); return *this;}
    inline MigrationProject& WithTargetDataProviderDescriptors(Aws::Vector<DataProviderDescriptor>&& value) { SetTargetDataProviderDescriptors(std::move(value)); return *this;}
    inline MigrationProject& AddTargetDataProviderDescriptors(const DataProviderDescriptor& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(value); return *this; }
    inline MigrationProject& AddTargetDataProviderDescriptors(DataProviderDescriptor&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile for your migration
     * project.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline MigrationProject& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline MigrationProject& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline MigrationProject& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }
    inline MigrationProject& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}
    inline MigrationProject& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}
    inline MigrationProject& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}
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
    inline MigrationProject& WithTransformationRules(const Aws::String& value) { SetTransformationRules(value); return *this;}
    inline MigrationProject& WithTransformationRules(Aws::String&& value) { SetTransformationRules(std::move(value)); return *this;}
    inline MigrationProject& WithTransformationRules(const char* value) { SetTransformationRules(value); return *this;}
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
    inline MigrationProject& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MigrationProject& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MigrationProject& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline MigrationProject& WithSchemaConversionApplicationAttributes(const SCApplicationAttributes& value) { SetSchemaConversionApplicationAttributes(value); return *this;}
    inline MigrationProject& WithSchemaConversionApplicationAttributes(SCApplicationAttributes&& value) { SetSchemaConversionApplicationAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectName;
    bool m_migrationProjectNameHasBeenSet = false;

    Aws::String m_migrationProjectArn;
    bool m_migrationProjectArnHasBeenSet = false;

    Aws::Utils::DateTime m_migrationProjectCreationTime;
    bool m_migrationProjectCreationTimeHasBeenSet = false;

    Aws::Vector<DataProviderDescriptor> m_sourceDataProviderDescriptors;
    bool m_sourceDataProviderDescriptorsHasBeenSet = false;

    Aws::Vector<DataProviderDescriptor> m_targetDataProviderDescriptors;
    bool m_targetDataProviderDescriptorsHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

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
