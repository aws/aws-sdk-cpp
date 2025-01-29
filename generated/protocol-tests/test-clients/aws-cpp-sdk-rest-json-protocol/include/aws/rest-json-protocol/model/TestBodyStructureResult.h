/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/model/TestConfig.h>
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
namespace RestJsonProtocol
{
namespace Model
{
  class TestBodyStructureResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API TestBodyStructureResult();
    AWS_RESTJSONPROTOCOL_API TestBodyStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API TestBodyStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetTestId() const{ return m_testId; }
    inline void SetTestId(const Aws::String& value) { m_testId = value; }
    inline void SetTestId(Aws::String&& value) { m_testId = std::move(value); }
    inline void SetTestId(const char* value) { m_testId.assign(value); }
    inline TestBodyStructureResult& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}
    inline TestBodyStructureResult& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}
    inline TestBodyStructureResult& WithTestId(const char* value) { SetTestId(value); return *this;}
    ///@}

    ///@{
    
    inline const TestConfig& GetTestConfig() const{ return m_testConfig; }
    inline void SetTestConfig(const TestConfig& value) { m_testConfig = value; }
    inline void SetTestConfig(TestConfig&& value) { m_testConfig = std::move(value); }
    inline TestBodyStructureResult& WithTestConfig(const TestConfig& value) { SetTestConfig(value); return *this;}
    inline TestBodyStructureResult& WithTestConfig(TestConfig&& value) { SetTestConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestBodyStructureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestBodyStructureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestBodyStructureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testId;

    TestConfig m_testConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
