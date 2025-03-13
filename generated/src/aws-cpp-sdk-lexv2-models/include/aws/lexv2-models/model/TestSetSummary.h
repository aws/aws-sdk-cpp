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
    AWS_LEXMODELSV2_API TestSetSummary() = default;
    AWS_LEXMODELSV2_API TestSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the test set.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    TestSetSummary& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test set.</p>
     */
    inline const Aws::String& GetTestSetName() const { return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    template<typename TestSetNameT = Aws::String>
    void SetTestSetName(TestSetNameT&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::forward<TestSetNameT>(value); }
    template<typename TestSetNameT = Aws::String>
    TestSetSummary& WithTestSetName(TestSetNameT&& value) { SetTestSetName(std::forward<TestSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TestSetSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the test set contains written or spoken data.</p>
     */
    inline TestSetModality GetModality() const { return m_modality; }
    inline bool ModalityHasBeenSet() const { return m_modalityHasBeenSet; }
    inline void SetModality(TestSetModality value) { m_modalityHasBeenSet = true; m_modality = value; }
    inline TestSetSummary& WithModality(TestSetModality value) { SetModality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test set.</p>
     */
    inline TestSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestSetSummary& WithStatus(TestSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the test set.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    TestSetSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of turns in the test set.</p>
     */
    inline int GetNumTurns() const { return m_numTurns; }
    inline bool NumTurnsHasBeenSet() const { return m_numTurnsHasBeenSet; }
    inline void SetNumTurns(int value) { m_numTurnsHasBeenSet = true; m_numTurns = value; }
    inline TestSetSummary& WithNumTurns(int value) { SetNumTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location at which the test set is stored.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = TestSetStorageLocation>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = TestSetStorageLocation>
    TestSetSummary& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    TestSetSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    TestSetSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestSetModality m_modality{TestSetModality::NOT_SET};
    bool m_modalityHasBeenSet = false;

    TestSetStatus m_status{TestSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_numTurns{0};
    bool m_numTurnsHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
