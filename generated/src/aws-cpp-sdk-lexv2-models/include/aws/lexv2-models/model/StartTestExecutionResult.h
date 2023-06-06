/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestExecutionTarget.h>
#include <aws/lexv2-models/model/TestExecutionApiMode.h>
#include <aws/lexv2-models/model/TestExecutionModality.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class StartTestExecutionResult
  {
  public:
    AWS_LEXMODELSV2_API StartTestExecutionResult();
    AWS_LEXMODELSV2_API StartTestExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartTestExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionId = value; }

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline void SetTestExecutionId(const char* value) { m_testExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}


    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline const TestExecutionTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline void SetTarget(const TestExecutionTarget& value) { m_target = value; }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline void SetTarget(TestExecutionTarget&& value) { m_target = std::move(value); }

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTarget(const TestExecutionTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The target bot for the test set execution.</p>
     */
    inline StartTestExecutionResult& WithTarget(TestExecutionTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline const TestExecutionApiMode& GetApiMode() const{ return m_apiMode; }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline void SetApiMode(const TestExecutionApiMode& value) { m_apiMode = value; }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline void SetApiMode(TestExecutionApiMode&& value) { m_apiMode = std::move(value); }

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline StartTestExecutionResult& WithApiMode(const TestExecutionApiMode& value) { SetApiMode(value); return *this;}

    /**
     * <p>Indicates whether we use streaming or non-streaming APIs for the test set
     * execution. For streaming, StartConversation Amazon Lex Runtime API is used.
     * Whereas for non-streaming, RecognizeUtterance and RecognizeText Amazon Lex
     * Runtime API are used.</p>
     */
    inline StartTestExecutionResult& WithApiMode(TestExecutionApiMode&& value) { SetApiMode(std::move(value)); return *this;}


    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline const TestExecutionModality& GetTestExecutionModality() const{ return m_testExecutionModality; }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline void SetTestExecutionModality(const TestExecutionModality& value) { m_testExecutionModality = value; }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline void SetTestExecutionModality(TestExecutionModality&& value) { m_testExecutionModality = std::move(value); }

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline StartTestExecutionResult& WithTestExecutionModality(const TestExecutionModality& value) { SetTestExecutionModality(value); return *this;}

    /**
     * <p>Indicates whether audio or text is used.</p>
     */
    inline StartTestExecutionResult& WithTestExecutionModality(TestExecutionModality&& value) { SetTestExecutionModality(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTestExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTestExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTestExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_testExecutionId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_testSetId;

    TestExecutionTarget m_target;

    TestExecutionApiMode m_apiMode;

    TestExecutionModality m_testExecutionModality;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
