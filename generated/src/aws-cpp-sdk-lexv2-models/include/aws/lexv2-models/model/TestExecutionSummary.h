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
    AWS_LEXMODELSV2_API TestExecutionSummary();
    AWS_LEXMODELSV2_API TestExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = value; }
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::move(value); }
    inline void SetTestExecutionId(const char* value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId.assign(value); }
    inline TestExecutionSummary& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}
    inline TestExecutionSummary& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}
    inline TestExecutionSummary& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline TestExecutionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline TestExecutionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline TestExecutionSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline TestExecutionSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the test execution.</p>
     */
    inline const TestExecutionStatus& GetTestExecutionStatus() const{ return m_testExecutionStatus; }
    inline bool TestExecutionStatusHasBeenSet() const { return m_testExecutionStatusHasBeenSet; }
    inline void SetTestExecutionStatus(const TestExecutionStatus& value) { m_testExecutionStatusHasBeenSet = true; m_testExecutionStatus = value; }
    inline void SetTestExecutionStatus(TestExecutionStatus&& value) { m_testExecutionStatusHasBeenSet = true; m_testExecutionStatus = std::move(value); }
    inline TestExecutionSummary& WithTestExecutionStatus(const TestExecutionStatus& value) { SetTestExecutionStatus(value); return *this;}
    inline TestExecutionSummary& WithTestExecutionStatus(TestExecutionStatus&& value) { SetTestExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }
    inline TestExecutionSummary& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline TestExecutionSummary& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline TestExecutionSummary& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }
    inline TestExecutionSummary& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline TestExecutionSummary& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline TestExecutionSummary& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline const TestExecutionTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const TestExecutionTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(TestExecutionTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline TestExecutionSummary& WithTarget(const TestExecutionTarget& value) { SetTarget(value); return *this;}
    inline TestExecutionSummary& WithTarget(TestExecutionTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline const TestExecutionApiMode& GetApiMode() const{ return m_apiMode; }
    inline bool ApiModeHasBeenSet() const { return m_apiModeHasBeenSet; }
    inline void SetApiMode(const TestExecutionApiMode& value) { m_apiModeHasBeenSet = true; m_apiMode = value; }
    inline void SetApiMode(TestExecutionApiMode&& value) { m_apiModeHasBeenSet = true; m_apiMode = std::move(value); }
    inline TestExecutionSummary& WithApiMode(const TestExecutionApiMode& value) { SetApiMode(value); return *this;}
    inline TestExecutionSummary& WithApiMode(TestExecutionApiMode&& value) { SetApiMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline const TestExecutionModality& GetTestExecutionModality() const{ return m_testExecutionModality; }
    inline bool TestExecutionModalityHasBeenSet() const { return m_testExecutionModalityHasBeenSet; }
    inline void SetTestExecutionModality(const TestExecutionModality& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }
    inline void SetTestExecutionModality(TestExecutionModality&& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = std::move(value); }
    inline TestExecutionSummary& WithTestExecutionModality(const TestExecutionModality& value) { SetTestExecutionModality(value); return *this;}
    inline TestExecutionSummary& WithTestExecutionModality(TestExecutionModality&& value) { SetTestExecutionModality(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    TestExecutionStatus m_testExecutionStatus;
    bool m_testExecutionStatusHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    TestExecutionTarget m_target;
    bool m_targetHasBeenSet = false;

    TestExecutionApiMode m_apiMode;
    bool m_apiModeHasBeenSet = false;

    TestExecutionModality m_testExecutionModality;
    bool m_testExecutionModalityHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
