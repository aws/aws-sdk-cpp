/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/model/PayloadConfig.h>
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
  class TestPayloadStructureResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult();
    AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetTestId() const{ return m_testId; }
    inline void SetTestId(const Aws::String& value) { m_testId = value; }
    inline void SetTestId(Aws::String&& value) { m_testId = std::move(value); }
    inline void SetTestId(const char* value) { m_testId.assign(value); }
    inline TestPayloadStructureResult& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}
    inline TestPayloadStructureResult& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}
    inline TestPayloadStructureResult& WithTestId(const char* value) { SetTestId(value); return *this;}
    ///@}

    ///@{
    
    inline const PayloadConfig& GetPayloadConfig() const{ return m_payloadConfig; }
    inline void SetPayloadConfig(const PayloadConfig& value) { m_payloadConfig = value; }
    inline void SetPayloadConfig(PayloadConfig&& value) { m_payloadConfig = std::move(value); }
    inline TestPayloadStructureResult& WithPayloadConfig(const PayloadConfig& value) { SetPayloadConfig(value); return *this;}
    inline TestPayloadStructureResult& WithPayloadConfig(PayloadConfig&& value) { SetPayloadConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestPayloadStructureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestPayloadStructureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestPayloadStructureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testId;

    PayloadConfig m_payloadConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
