/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/auditmanager/model/SettingAttribute.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetSettingsRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSettings"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The list of setting attribute enum values. </p>
     */
    inline SettingAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(SettingAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline GetSettingsRequest& WithAttribute(SettingAttribute value) { SetAttribute(value); return *this;}
    ///@}
  private:

    SettingAttribute m_attribute{SettingAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
