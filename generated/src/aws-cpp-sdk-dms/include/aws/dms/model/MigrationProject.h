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
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject() = default;
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MigrationProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectName() const { return m_migrationProjectName; }
    inline bool MigrationProjectNameHasBeenSet() const { return m_migrationProjectNameHasBeenSet; }
    template<typename MigrationProjectNameT = Aws::String>
    void SetMigrationProjectName(MigrationProjectNameT&& value) { m_migrationProjectNameHasBeenSet = true; m_migrationProjectName = std::forward<MigrationProjectNameT>(value); }
    template<typename MigrationProjectNameT = Aws::String>
    MigrationProject& WithMigrationProjectName(MigrationProjectNameT&& value) { SetMigrationProjectName(std::forward<MigrationProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN string that uniquely identifies the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const { return m_migrationProjectArn; }
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }
    template<typename MigrationProjectArnT = Aws::String>
    void SetMigrationProjectArn(MigrationProjectArnT&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::forward<MigrationProjectArnT>(value); }
    template<typename MigrationProjectArnT = Aws::String>
    MigrationProject& WithMigrationProjectArn(MigrationProjectArnT&& value) { SetMigrationProjectArn(std::forward<MigrationProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the migration project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationProjectCreationTime() const { return m_migrationProjectCreationTime; }
    inline bool MigrationProjectCreationTimeHasBeenSet() const { return m_migrationProjectCreationTimeHasBeenSet; }
    template<typename MigrationProjectCreationTimeT = Aws::Utils::DateTime>
    void SetMigrationProjectCreationTime(MigrationProjectCreationTimeT&& value) { m_migrationProjectCreationTimeHasBeenSet = true; m_migrationProjectCreationTime = std::forward<MigrationProjectCreationTimeT>(value); }
    template<typename MigrationProjectCreationTimeT = Aws::Utils::DateTime>
    MigrationProject& WithMigrationProjectCreationTime(MigrationProjectCreationTimeT&& value) { SetMigrationProjectCreationTime(std::forward<MigrationProjectCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source data provider, including the name or ARN, and
     * Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptor>& GetSourceDataProviderDescriptors() const { return m_sourceDataProviderDescriptors; }
    inline bool SourceDataProviderDescriptorsHasBeenSet() const { return m_sourceDataProviderDescriptorsHasBeenSet; }
    template<typename SourceDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptor>>
    void SetSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors = std::forward<SourceDataProviderDescriptorsT>(value); }
    template<typename SourceDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptor>>
    MigrationProject& WithSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { SetSourceDataProviderDescriptors(std::forward<SourceDataProviderDescriptorsT>(value)); return *this;}
    template<typename SourceDataProviderDescriptorsT = DataProviderDescriptor>
    MigrationProject& AddSourceDataProviderDescriptors(SourceDataProviderDescriptorsT&& value) { m_sourceDataProviderDescriptorsHasBeenSet = true; m_sourceDataProviderDescriptors.emplace_back(std::forward<SourceDataProviderDescriptorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the target data provider, including the name or ARN, and
     * Secrets Manager parameters.</p>
     */
    inline const Aws::Vector<DataProviderDescriptor>& GetTargetDataProviderDescriptors() const { return m_targetDataProviderDescriptors; }
    inline bool TargetDataProviderDescriptorsHasBeenSet() const { return m_targetDataProviderDescriptorsHasBeenSet; }
    template<typename TargetDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptor>>
    void SetTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors = std::forward<TargetDataProviderDescriptorsT>(value); }
    template<typename TargetDataProviderDescriptorsT = Aws::Vector<DataProviderDescriptor>>
    MigrationProject& WithTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { SetTargetDataProviderDescriptors(std::forward<TargetDataProviderDescriptorsT>(value)); return *this;}
    template<typename TargetDataProviderDescriptorsT = DataProviderDescriptor>
    MigrationProject& AddTargetDataProviderDescriptors(TargetDataProviderDescriptorsT&& value) { m_targetDataProviderDescriptorsHasBeenSet = true; m_targetDataProviderDescriptors.emplace_back(std::forward<TargetDataProviderDescriptorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile for your migration
     * project.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    MigrationProject& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const { return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    template<typename InstanceProfileNameT = Aws::String>
    void SetInstanceProfileName(InstanceProfileNameT&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::forward<InstanceProfileNameT>(value); }
    template<typename InstanceProfileNameT = Aws::String>
    MigrationProject& WithInstanceProfileName(InstanceProfileNameT&& value) { SetInstanceProfileName(std::forward<InstanceProfileNameT>(value)); return *this;}
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
    MigrationProject& WithTransformationRules(TransformationRulesT&& value) { SetTransformationRules(std::forward<TransformationRulesT>(value)); return *this;}
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
    MigrationProject& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    MigrationProject& WithSchemaConversionApplicationAttributes(SchemaConversionApplicationAttributesT&& value) { SetSchemaConversionApplicationAttributes(std::forward<SchemaConversionApplicationAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectName;
    bool m_migrationProjectNameHasBeenSet = false;

    Aws::String m_migrationProjectArn;
    bool m_migrationProjectArnHasBeenSet = false;

    Aws::Utils::DateTime m_migrationProjectCreationTime{};
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
