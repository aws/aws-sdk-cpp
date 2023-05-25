/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/Action.h>
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
namespace FIS
{
namespace Model
{
  class GetActionResult
  {
  public:
    AWS_FIS_API GetActionResult();
    AWS_FIS_API GetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the action.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetAction(const Action& value) { m_action = value; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetAction(Action&& value) { m_action = std::move(value); }

    /**
     * <p>Information about the action.</p>
     */
    inline GetActionResult& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the action.</p>
     */
    inline GetActionResult& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Action m_action;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
