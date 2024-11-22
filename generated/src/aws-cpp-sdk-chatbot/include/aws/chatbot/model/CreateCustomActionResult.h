/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{
  class CreateCustomActionResult
  {
  public:
    AWS_CHATBOT_API CreateCustomActionResult();
    AWS_CHATBOT_API CreateCustomActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API CreateCustomActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fully defined ARN of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const{ return m_customActionArn; }
    inline void SetCustomActionArn(const Aws::String& value) { m_customActionArn = value; }
    inline void SetCustomActionArn(Aws::String&& value) { m_customActionArn = std::move(value); }
    inline void SetCustomActionArn(const char* value) { m_customActionArn.assign(value); }
    inline CreateCustomActionResult& WithCustomActionArn(const Aws::String& value) { SetCustomActionArn(value); return *this;}
    inline CreateCustomActionResult& WithCustomActionArn(Aws::String&& value) { SetCustomActionArn(std::move(value)); return *this;}
    inline CreateCustomActionResult& WithCustomActionArn(const char* value) { SetCustomActionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCustomActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCustomActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCustomActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_customActionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
