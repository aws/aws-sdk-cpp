﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/ApiKeyRestrictions.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class UpdateKeyRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKey"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the API key resource to update.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline UpdateKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline UpdateKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline UpdateKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const{ return m_expireTime; }
    inline bool ExpireTimeHasBeenSet() const { return m_expireTimeHasBeenSet; }
    inline void SetExpireTime(const Aws::Utils::DateTime& value) { m_expireTimeHasBeenSet = true; m_expireTime = value; }
    inline void SetExpireTime(Aws::Utils::DateTime&& value) { m_expireTimeHasBeenSet = true; m_expireTime = std::move(value); }
    inline UpdateKeyRequest& WithExpireTime(const Aws::Utils::DateTime& value) { SetExpireTime(value); return *this;}
    inline UpdateKeyRequest& WithExpireTime(Aws::Utils::DateTime&& value) { SetExpireTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the API key should expire. Set to <code>true</code> to set the API
     * key to have no expiration time.</p>
     */
    inline bool GetNoExpiry() const{ return m_noExpiry; }
    inline bool NoExpiryHasBeenSet() const { return m_noExpiryHasBeenSet; }
    inline void SetNoExpiry(bool value) { m_noExpiryHasBeenSet = true; m_noExpiry = value; }
    inline UpdateKeyRequest& WithNoExpiry(bool value) { SetNoExpiry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boolean flag to be included for updating <code>ExpireTime</code> or
     * <code>Restrictions</code> details.</p> <p>Must be set to <code>true</code> to
     * update an API key resource that has been used in the past 7 days.</p> <p>
     * <code>False</code> if force update is not preferred</p> <p>Default value:
     * <code>False</code> </p>
     */
    inline bool GetForceUpdate() const{ return m_forceUpdate; }
    inline bool ForceUpdateHasBeenSet() const { return m_forceUpdateHasBeenSet; }
    inline void SetForceUpdate(bool value) { m_forceUpdateHasBeenSet = true; m_forceUpdate = value; }
    inline UpdateKeyRequest& WithForceUpdate(bool value) { SetForceUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the API key restrictions for the API key resource.</p>
     */
    inline const ApiKeyRestrictions& GetRestrictions() const{ return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    inline void SetRestrictions(const ApiKeyRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }
    inline void SetRestrictions(ApiKeyRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }
    inline UpdateKeyRequest& WithRestrictions(const ApiKeyRestrictions& value) { SetRestrictions(value); return *this;}
    inline UpdateKeyRequest& WithRestrictions(ApiKeyRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_expireTime;
    bool m_expireTimeHasBeenSet = false;

    bool m_noExpiry;
    bool m_noExpiryHasBeenSet = false;

    bool m_forceUpdate;
    bool m_forceUpdateHasBeenSet = false;

    ApiKeyRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
