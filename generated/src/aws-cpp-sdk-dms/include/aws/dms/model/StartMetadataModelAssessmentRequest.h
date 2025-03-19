/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class StartMetadataModelAssessmentRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMetadataModelAssessment"; }

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
    StartMetadataModelAssessmentRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
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
    StartMetadataModelAssessmentRequest& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
