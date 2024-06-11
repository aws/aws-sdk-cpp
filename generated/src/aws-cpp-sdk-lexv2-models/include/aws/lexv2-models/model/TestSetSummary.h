/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/lexv2-models/model/TestSetStatus.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains summary information about the test set.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetSummary">AWS
   * API Reference</a></p>
   */
  class TestSetSummary
  {
  public:
    AWS_LEXMODELSV2_API TestSetSummary();
    AWS_LEXMODELSV2_API TestSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }
    inline TestSetSummary& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline TestSetSummary& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline TestSetSummary& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test set.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }
    inline TestSetSummary& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline TestSetSummary& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline TestSetSummary& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TestSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TestSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TestSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the test set contains written or spoken data.</p>
     */
    inline const TestSetModality& GetModality() const{ return m_modality; }
    inline bool ModalityHasBeenSet() const { return m_modalityHasBeenSet; }
    inline void SetModality(const TestSetModality& value) { m_modalityHasBeenSet = true; m_modality = value; }
    inline void SetModality(TestSetModality&& value) { m_modalityHasBeenSet = true; m_modality = std::move(value); }
    inline TestSetSummary& WithModality(const TestSetModality& value) { SetModality(value); return *this;}
    inline TestSetSummary& WithModality(TestSetModality&& value) { SetModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test set.</p>
     */
    inline const TestSetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestSetSummary& WithStatus(const TestSetStatus& value) { SetStatus(value); return *this;}
    inline TestSetSummary& WithStatus(TestSetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the test set.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline TestSetSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline TestSetSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline TestSetSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of turns in the test set.</p>
     */
    inline int GetNumTurns() const{ return m_numTurns; }
    inline bool NumTurnsHasBeenSet() const { return m_numTurnsHasBeenSet; }
    inline void SetNumTurns(int value) { m_numTurnsHasBeenSet = true; m_numTurns = value; }
    inline TestSetSummary& WithNumTurns(int value) { SetNumTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location at which the test set is stored.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline TestSetSummary& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}
    inline TestSetSummary& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline TestSetSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline TestSetSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline TestSetSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline TestSetSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestSetModality m_modality;
    bool m_modalityHasBeenSet = false;

    TestSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_numTurns;
    bool m_numTurnsHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
