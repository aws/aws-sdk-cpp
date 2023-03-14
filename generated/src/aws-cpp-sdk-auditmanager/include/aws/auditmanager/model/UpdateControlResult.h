/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Control.h>
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
namespace AuditManager
{
namespace Model
{
  class UpdateControlResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateControlResult();
    AWS_AUDITMANAGER_API UpdateControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the updated control set that the <code>UpdateControl</code> API
     * returned. </p>
     */
    inline const Control& GetControl() const{ return m_control; }

    /**
     * <p> The name of the updated control set that the <code>UpdateControl</code> API
     * returned. </p>
     */
    inline void SetControl(const Control& value) { m_control = value; }

    /**
     * <p> The name of the updated control set that the <code>UpdateControl</code> API
     * returned. </p>
     */
    inline void SetControl(Control&& value) { m_control = std::move(value); }

    /**
     * <p> The name of the updated control set that the <code>UpdateControl</code> API
     * returned. </p>
     */
    inline UpdateControlResult& WithControl(const Control& value) { SetControl(value); return *this;}

    /**
     * <p> The name of the updated control set that the <code>UpdateControl</code> API
     * returned. </p>
     */
    inline UpdateControlResult& WithControl(Control&& value) { SetControl(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Control m_control;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
