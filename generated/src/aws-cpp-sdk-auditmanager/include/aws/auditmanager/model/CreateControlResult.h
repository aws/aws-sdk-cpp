/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Control.h>
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

  private:

    Control m_control;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
