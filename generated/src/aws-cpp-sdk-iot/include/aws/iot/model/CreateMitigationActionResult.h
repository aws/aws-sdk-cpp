﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateMitigationActionResult
  {
  public:
    AWS_IOT_API CreateMitigationActionResult();
    AWS_IOT_API CreateMitigationActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateMitigationActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }
    inline CreateMitigationActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}
    inline CreateMitigationActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}
    inline CreateMitigationActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionId.assign(value); }
    inline CreateMitigationActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline CreateMitigationActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline CreateMitigationActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMitigationActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMitigationActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMitigationActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_actionArn;

    Aws::String m_actionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
