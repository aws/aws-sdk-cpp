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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeTestExecutionResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestExecutionResult();
    AWS_LEXMODELSV2_API DescribeTestExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The execution Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionId = value; }
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionId = std::move(value); }
    inline void SetTestExecutionId(const char* value) { m_testExecutionId.assign(value); }
    inline DescribeTestExecutionResult& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}
    inline DescribeTestExecutionResult& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}
    inline DescribeTestExecutionResult& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution creation date and time for the test set execution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeTestExecutionResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeTestExecutionResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last update for the execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeTestExecutionResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeTestExecutionResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test execution status for the test execution.</p>
     */
    inline const TestExecutionStatus& GetTestExecutionStatus() const{ return m_testExecutionStatus; }
    inline void SetTestExecutionStatus(const TestExecutionStatus& value) { m_testExecutionStatus = value; }
    inline void SetTestExecutionStatus(TestExecutionStatus&& value) { m_testExecutionStatus = std::move(value); }
    inline DescribeTestExecutionResult& WithTestExecutionStatus(const TestExecutionStatus& value) { SetTestExecutionStatus(value); return *this;}
    inline DescribeTestExecutionResult& WithTestExecutionStatus(TestExecutionStatus&& value) { SetTestExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set Id for the test set execution.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }
    inline DescribeTestExecutionResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline DescribeTestExecutionResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline DescribeTestExecutionResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set name of the test set execution.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetName.assign(value); }
    inline DescribeTestExecutionResult& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline DescribeTestExecutionResult& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline DescribeTestExecutionResult& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bot for the test set execution details.</p>
     */
    inline const TestExecutionTarget& GetTarget() const{ return m_target; }
    inline void SetTarget(const TestExecutionTarget& value) { m_target = value; }
    inline void SetTarget(TestExecutionTarget&& value) { m_target = std::move(value); }
    inline DescribeTestExecutionResult& WithTarget(const TestExecutionTarget& value) { SetTarget(value); return *this;}
    inline DescribeTestExecutionResult& WithTarget(TestExecutionTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether we use streaming or non-streaming APIs are used for the
     * test set execution. For streaming, <code>StartConversation</code> Amazon Lex
     * Runtime API is used. Whereas for non-streaming, <code>RecognizeUtterance</code>
     * and <code>RecognizeText</code> Amazon Lex Runtime API is used.</p>
     */
    inline const TestExecutionApiMode& GetApiMode() const{ return m_apiMode; }
    inline void SetApiMode(const TestExecutionApiMode& value) { m_apiMode = value; }
    inline void SetApiMode(TestExecutionApiMode&& value) { m_apiMode = std::move(value); }
    inline DescribeTestExecutionResult& WithApiMode(const TestExecutionApiMode& value) { SetApiMode(value); return *this;}
    inline DescribeTestExecutionResult& WithApiMode(TestExecutionApiMode&& value) { SetApiMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether test set is audio or text.</p>
     */
    inline const TestExecutionModality& GetTestExecutionModality() const{ return m_testExecutionModality; }
    inline void SetTestExecutionModality(const TestExecutionModality& value) { m_testExecutionModality = value; }
    inline void SetTestExecutionModality(TestExecutionModality&& value) { m_testExecutionModality = std::move(value); }
    inline DescribeTestExecutionResult& WithTestExecutionModality(const TestExecutionModality& value) { SetTestExecutionModality(value); return *this;}
    inline DescribeTestExecutionResult& WithTestExecutionModality(TestExecutionModality&& value) { SetTestExecutionModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reasons for the failure of the test set execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeTestExecutionResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeTestExecutionResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeTestExecutionResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeTestExecutionResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeTestExecutionResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTestExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTestExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTestExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    TestExecutionStatus m_testExecutionStatus;

    Aws::String m_testSetId;

    Aws::String m_testSetName;

    TestExecutionTarget m_target;

    TestExecutionApiMode m_apiMode;

    TestExecutionModality m_testExecutionModality;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
