/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetControlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p> The identifier for the control. </p>
     */
    inline GetControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p> The identifier for the control. </p>
     */
    inline GetControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control. </p>
     */
    inline GetControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}

  private:

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
