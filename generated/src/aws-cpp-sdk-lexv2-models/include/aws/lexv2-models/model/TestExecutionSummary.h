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


    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = value; }

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline void SetTestExecutionId(const char* value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline TestExecutionSummary& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline TestExecutionSummary& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test execution.</p>
     */
    inline TestExecutionSummary& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}


    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline TestExecutionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time at which the test execution was created.</p>
     */
    inline TestExecutionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline TestExecutionSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time at which the test execution was last updated.</p>
     */
    inline TestExecutionSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the test execution.</p>
     */
    inline const TestExecutionStatus& GetTestExecutionStatus() const{ return m_testExecutionStatus; }

    /**
     * <p>The current status of the test execution.</p>
     */
    inline bool TestExecutionStatusHasBeenSet() const { return m_testExecutionStatusHasBeenSet; }

    /**
     * <p>The current status of the test execution.</p>
     */
    inline void SetTestExecutionStatus(const TestExecutionStatus& value) { m_testExecutionStatusHasBeenSet = true; m_testExecutionStatus = value; }

    /**
     * <p>The current status of the test execution.</p>
     */
    inline void SetTestExecutionStatus(TestExecutionStatus&& value) { m_testExecutionStatusHasBeenSet = true; m_testExecutionStatus = std::move(value); }

    /**
     * <p>The current status of the test execution.</p>
     */
    inline TestExecutionSummary& WithTestExecutionStatus(const TestExecutionStatus& value) { SetTestExecutionStatus(value); return *this;}

    /**
     * <p>The current status of the test execution.</p>
     */
    inline TestExecutionSummary& WithTestExecutionStatus(TestExecutionStatus&& value) { SetTestExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the test set used in the test execution.</p>
     */
    inline TestExecutionSummary& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}


    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline const TestExecutionTarget& GetTarget() const{ return m_target; }

    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline void SetTarget(const TestExecutionTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline void SetTarget(TestExecutionTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline TestExecutionSummary& WithTarget(const TestExecutionTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>Contains information about the bot used for the test execution..</p>
     */
    inline TestExecutionSummary& WithTarget(TestExecutionTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline const TestExecutionApiMode& GetApiMode() const{ return m_apiMode; }

    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline bool ApiModeHasBeenSet() const { return m_apiModeHasBeenSet; }

    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline void SetApiMode(const TestExecutionApiMode& value) { m_apiModeHasBeenSet = true; m_apiMode = value; }

    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline void SetApiMode(TestExecutionApiMode&& value) { m_apiModeHasBeenSet = true; m_apiMode = std::move(value); }

    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline TestExecutionSummary& WithApiMode(const TestExecutionApiMode& value) { SetApiMode(value); return *this;}

    /**
     * <p>Specifies whether the API mode for the test execution is streaming or
     * non-streaming.</p>
     */
    inline TestExecutionSummary& WithApiMode(TestExecutionApiMode&& value) { SetApiMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline const TestExecutionModality& GetTestExecutionModality() const{ return m_testExecutionModality; }

    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline bool TestExecutionModalityHasBeenSet() const { return m_testExecutionModalityHasBeenSet; }

    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline void SetTestExecutionModality(const TestExecutionModality& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }

    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline void SetTestExecutionModality(TestExecutionModality&& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = std::move(value); }

    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline TestExecutionSummary& WithTestExecutionModality(const TestExecutionModality& value) { SetTestExecutionModality(value); return *this;}

    /**
     * <p>Specifies whether the data used for the test execution is written or
     * spoken.</p>
     */
    inline TestExecutionSummary& WithTestExecutionModality(TestExecutionModality&& value) { SetTestExecutionModality(std::move(value)); return *this;}

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
