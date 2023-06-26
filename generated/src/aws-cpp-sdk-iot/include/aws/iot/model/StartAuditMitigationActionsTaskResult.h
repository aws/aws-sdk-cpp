/**
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
  class StartAuditMitigationActionsTaskResult
  {
  public:
    AWS_IOT_API StartAuditMitigationActionsTaskResult();
    AWS_IOT_API StartAuditMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API StartAuditMitigationActionsTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline StartAuditMitigationActionsTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline StartAuditMitigationActionsTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the audit mitigation task. This matches the
     * <code>taskId</code> that you specified in the request.</p>
     */
    inline StartAuditMitigationActionsTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAuditMitigationActionsTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAuditMitigationActionsTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAuditMitigationActionsTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_taskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
