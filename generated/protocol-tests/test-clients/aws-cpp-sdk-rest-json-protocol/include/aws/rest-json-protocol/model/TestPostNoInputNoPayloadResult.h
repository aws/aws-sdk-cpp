/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TestPostNoInputNoPayloadResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API TestPostNoInputNoPayloadResult();
    AWS_RESTJSONPROTOCOL_API TestPostNoInputNoPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API TestPostNoInputNoPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetTestId() const{ return m_testId; }
    inline void SetTestId(const Aws::String& value) { m_testId = value; }
    inline void SetTestId(Aws::String&& value) { m_testId = std::move(value); }
    inline void SetTestId(const char* value) { m_testId.assign(value); }
    inline TestPostNoInputNoPayloadResult& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}
    inline TestPostNoInputNoPayloadResult& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}
    inline TestPostNoInputNoPayloadResult& WithTestId(const char* value) { SetTestId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestPostNoInputNoPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestPostNoInputNoPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestPostNoInputNoPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
