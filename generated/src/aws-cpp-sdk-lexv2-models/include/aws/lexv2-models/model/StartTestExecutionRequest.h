/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestExecutionTarget.h>
#include <aws/lexv2-models/model/TestExecutionApiMode.h>
#include <aws/lexv2-models/model/TestExecutionModality.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class StartTestExecutionRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StartTestExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTestExecution"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    StartTestExecutionRequest& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline const TestExecutionTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = TestExecutionTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TestExecutionTarget>
    StartTestExecutionRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline TestExecutionApiMode GetApiMode() const { return m_apiMode; }
    inline bool ApiModeHasBeenSet() const { return m_apiModeHasBeenSet; }
    inline void SetApiMode(TestExecutionApiMode value) { m_apiModeHasBeenSet = true; m_apiMode = value; }
    inline StartTestExecutionRequest& WithApiMode(TestExecutionApiMode value) { SetApiMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline TestExecutionModality GetTestExecutionModality() const { return m_testExecutionModality; }
    inline bool TestExecutionModalityHasBeenSet() const { return m_testExecutionModalityHasBeenSet; }
    inline void SetTestExecutionModality(TestExecutionModality value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }
    inline StartTestExecutionRequest& WithTestExecutionModality(TestExecutionModality value) { SetTestExecutionModality(value); return *this;}
    ///@}
  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

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
