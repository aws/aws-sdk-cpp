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
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportMetadataModelAssessment"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    template<typename MigrationProjectIdentifierT = Aws::String>
    void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value); }
    template<typename MigrationProjectIdentifierT = Aws::String>
    ExportMetadataModelAssessmentRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the database objects to assess.</p>
     */
    inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    template<typename SelectionRulesT = Aws::String>
    void SetSelectionRules(SelectionRulesT&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::forward<SelectionRulesT>(value); }
    template<typename SelectionRulesT = Aws::String>
    ExportMetadataModelAssessmentRequest& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assessment file to create in your Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    ExportMetadataModelAssessmentRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format of the assessment file.</p>
     */
    inline const Aws::Vector<AssessmentReportType>& GetAssessmentReportTypes() const { return m_assessmentReportTypes; }
    inline bool AssessmentReportTypesHasBeenSet() const { return m_assessmentReportTypesHasBeenSet; }
    template<typename AssessmentReportTypesT = Aws::Vector<AssessmentReportType>>
    void SetAssessmentReportTypes(AssessmentReportTypesT&& value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes = std::forward<AssessmentReportTypesT>(value); }
    template<typename AssessmentReportTypesT = Aws::Vector<AssessmentReportType>>
    ExportMetadataModelAssessmentRequest& WithAssessmentReportTypes(AssessmentReportTypesT&& value) { SetAssessmentReportTypes(std::forward<AssessmentReportTypesT>(value)); return *this;}
    inline ExportMetadataModelAssessmentRequest& AddAssessmentReportTypes(AssessmentReportType value) { m_assessmentReportTypesHasBeenSet = true; m_assessmentReportTypes.push_back(value); return *this; }
    ///@}
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
