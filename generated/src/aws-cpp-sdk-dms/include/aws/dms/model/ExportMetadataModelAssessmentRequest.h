/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/AssessmentReportType.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ExportMetadataModelAssessmentRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportMetadataModelAssessment"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}

    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}


    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The file format of the assessment file.</p>
     */
    inline const Aws::Vector<AssessmentReportType>& GetAssessmentReportTypes() const{ return m_assessmentReportTypes; }

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline bool AssessmentReportTypesHasBeenSet() const { return m_assessmentReportTypesHasBeenSet; }

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline void SetAssessmentReportTypes(const Aws::Vector<AssessmentReportType>& value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes = value; }

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline void SetAssessmentReportTypes(Aws::Vector<AssessmentReportType>&& value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes = std::move(value); }

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithAssessmentReportTypes(const Aws::Vector<AssessmentReportType>& value) { SetAssessmentReportTypes(value); return *this;}

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline ExportMetadataModelAssessmentRequest& WithAssessmentReportTypes(Aws::Vector<AssessmentReportType>&& value) { SetAssessmentReportTypes(std::move(value)); return *this;}

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline ExportMetadataModelAssessmentRequest& AddAssessmentReportTypes(const AssessmentReportType& value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes.push_back(value); return *this; }

    /**
     * <p>The file format of the assessment file.</p>
     */
    inline ExportMetadataModelAssessmentRequest& AddAssessmentReportTypes(AssessmentReportType&& value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::Vector<AssessmentReportType> m_assessmentReportTypes;
    bool m_assessmentReportTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
