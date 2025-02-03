/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
namespace JsonProtocol
{
namespace Model
{
  class GreetingWithErrorsResult
  {
  public:
    AWS_JSONPROTOCOL_API GreetingWithErrorsResult();
    AWS_JSONPROTOCOL_API GreetingWithErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API GreetingWithErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGreeting() const{ return m_greeting; }
    inline void SetGreeting(const Aws::String& value) { m_greeting = value; }
    inline void SetGreeting(Aws::String&& value) { m_greeting = std::move(value); }
    inline void SetGreeting(const char* value) { m_greeting.assign(value); }
    inline GreetingWithErrorsResult& WithGreeting(const Aws::String& value) { SetGreeting(value); return *this;}
    inline GreetingWithErrorsResult& WithGreeting(Aws::String&& value) { SetGreeting(std::move(value)); return *this;}
    inline GreetingWithErrorsResult& WithGreeting(const char* value) { SetGreeting(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GreetingWithErrorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GreetingWithErrorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GreetingWithErrorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_greeting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
