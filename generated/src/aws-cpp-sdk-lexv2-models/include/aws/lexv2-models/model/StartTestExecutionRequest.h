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
    AWS_LEXMODELSV2_API StartTestExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTestExecution"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionRequest& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionRequest& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionRequest& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline const TestExecutionTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline void SetTarget(const TestExecutionTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline void SetTarget(TestExecutionTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline StartTestExecutionRequest& WithTarget(const TestExecutionTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline StartTestExecutionRequest& WithTarget(TestExecutionTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline const TestExecutionApiMode& GetApiMode() const{ return m_apiMode; }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline bool ApiModeHasBeenSet() const { return m_apiModeHasBeenSet; }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline void SetApiMode(const TestExecutionApiMode& value) { m_apiModeHasBeenSet = true; m_apiMode = value; }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline void SetApiMode(TestExecutionApiMode&& value) { m_apiModeHasBeenSet = true; m_apiMode = std::move(value); }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline StartTestExecutionRequest& WithApiMode(const TestExecutionApiMode& value) { SetApiMode(value); return *this;}

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Runtime API is used. Whereas, for
     * non-streaming, RecognizeUtterance and RecognizeText Amazon Lex Runtime API are
     * used.</p>
     */
    inline StartTestExecutionRequest& WithApiMode(TestExecutionApiMode&& value) { SetApiMode(std::move(value)); return *this;}


    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline const TestExecutionModality& GetTestExecutionModality() const{ return m_testExecutionModality; }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline bool TestExecutionModalityHasBeenSet() const { return m_testExecutionModalityHasBeenSet; }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline void SetTestExecutionModality(const TestExecutionModality& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = value; }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline void SetTestExecutionModality(TestExecutionModality&& value) { m_testExecutionModalityHasBeenSet = true; m_testExecutionModality = std::move(value); }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline StartTestExecutionRequest& WithTestExecutionModality(const TestExecutionModality& value) { SetTestExecutionModality(value); return *this;}

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline StartTestExecutionRequest& WithTestExecutionModality(TestExecutionModality&& value) { SetTestExecutionModality(std::move(value)); return *this;}

  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

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
