/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestExecutionStatus.h>
#include <aws/lexv2-models/model/TestExecutionTarget.h>
#include <aws/lexv2-models/model/TestExecutionApiMode.h>
#include <aws/lexv2-models/model/TestExecutionModality.h>
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
   * <p>Summarizes metadata about the test execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestExecutionSummary">AWS
   * API Reference</a></p>
   */
  class TestExecutionSummary
  {
  public:
    AWS_LEXMODELSV2_API TestExecutionSummary() = default;
    AWS_LEXMODELSV2_API TestExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const { return m_testExecutionId; }
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }
    template<typename TestExecutionIdT = Aws::String>
    void SetTestExecutionId(TestExecutionIdT&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::forward<TestExecutionIdT>(value); }
    template<typename TestExecutionIdT = Aws::String>
    TestExecutionSummary& WithTestExecutionId(TestExecutionIdT&& value) { SetTestExecutionId(std::forward<TestExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    TestExecutionSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    TestExecutionSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the test execution.</p>
     */
    inline TestExecutionStatus GetTestExecutionStatus() const { return m_testExecutionStatus; }
    inline bool TestExecutionStatusHasBeenSet() const { return m_testExecutionStatusHasBeenSet; }
    inline void SetTestExecutionStatus(TestExecutionStatus value) { m_testExecutionStatusHasBeenSet = true; m_testExecutionStatus = value; }
    inline TestExecutionSummary& WithTestExecutionStatus(TestExecutionStatus value) { SetTestExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    TestExecutionSummary& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetName() const { return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    template<typename TestSetNameT = Aws::String>
    void SetTestSetName(TestSetNameT&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::forward<TestSetNameT>(value); }
    template<typename TestSetNameT = Aws::String>
    TestExecutionSummary& WithTestSetName(TestSetNameT&& value) { SetTestSetName(std::forward<TestSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline const TestExecutionTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = TestExecutionTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TestExecutionTarget>
    TestExecutionSummary& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline TestExecutionApiMode GetApiMode() const { return m_apiMode; }
    inline bool ApiModeHasBeenSet() const { return m_apiModeHasBeenSet; }
    inline void SetApiMode(TestExecutionApiMode value) { m_apiModeHasBeenSet = true; m_apiMode = value; }
    inline TestExecutionSummary& WithApiMode(TestExecutionApiMode value) { SetApiMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline TestExecutionModality GetTestExecutionModality() const { return m_testExecutionModality; }
    inline bool TestExecutionModalityHasBeenSet() const { return m_testExecutionModalityHasBeenSet; }
    inline void SetTestExecutionModality(TestExecutionModality value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }
    inline TestExecutionSummary& WithTestExecutionModality(TestExecutionModality value) { SetTestExecutionModality(value); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    TestExecutionStatus m_testExecutionStatus{TestExecutionStatus::NOT_SET};
    bool m_testExecutionStatusHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    TestExecutionTarget m_target;
    bool m_targetHasBeenSet = false;

    TestExecutionApiMode m_apiMode{TestExecutionApiMode::NOT_SET};
    bool m_apiModeHasBeenSet = false;

    TestExecutionModality m_testExecutionModality{TestExecutionModality::NOT_SET};
    bool m_testExecutionModalityHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
