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
  class CreateControlResult
  {
  public:
    AWS_AUDITMANAGER_API CreateControlResult();
    AWS_AUDITMANAGER_API CreateControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API CreateControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The new control that the <code>CreateControl</code> API returned. </p>
     */
    inline const Control& GetControl() const{ return m_control; }

    /**
     * <p> The new control that the <code>CreateControl</code> API returned. </p>
     */
    inline void SetControl(const Control& value) { m_control = value; }

    /**
     * <p> The new control that the <code>CreateControl</code> API returned. </p>
     */
    inline void SetControl(Control&& value) { m_control = std::move(value); }

    /**
     * <p> The new control that the <code>CreateControl</code> API returned. </p>
     */
    inline CreateControlResult& WithControl(const Control& value) { SetControl(value); return *this;}

    /**
     * <p> The new control that the <code>CreateControl</code> API returned. </p>
     */
    inline CreateControlResult& WithControl(Control&& value) { SetControl(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Control m_control;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
