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
    AWS_AUDITMANAGER_API GetSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSettings"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline const SettingAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline void SetAttribute(const SettingAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline void SetAttribute(SettingAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline GetSettingsRequest& WithAttribute(const SettingAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p> The list of <code>SettingAttribute</code> enum values. </p>
     */
    inline GetSettingsRequest& WithAttribute(SettingAttribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    SettingAttribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
