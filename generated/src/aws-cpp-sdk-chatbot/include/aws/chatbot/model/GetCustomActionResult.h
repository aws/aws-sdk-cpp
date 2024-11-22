/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/CustomAction.h>
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
  class GetCustomActionResult
  {
  public:
    AWS_CHATBOT_API GetCustomActionResult();
    AWS_CHATBOT_API GetCustomActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API GetCustomActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the custom action.</p>
     */
    inline const CustomAction& GetCustomAction() const{ return m_customAction; }
    inline void SetCustomAction(const CustomAction& value) { m_customAction = value; }
    inline void SetCustomAction(CustomAction&& value) { m_customAction = std::move(value); }
    inline GetCustomActionResult& WithCustomAction(const CustomAction& value) { SetCustomAction(value); return *this;}
    inline GetCustomActionResult& WithCustomAction(CustomAction&& value) { SetCustomAction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCustomActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCustomActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCustomActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CustomAction m_customAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
