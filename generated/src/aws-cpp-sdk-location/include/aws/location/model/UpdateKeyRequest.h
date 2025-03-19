/**
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
    AWS_LOCATIONSERVICE_API UpdateKeyRequest() = default;

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
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    UpdateKeyRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateKeyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const { return m_expireTime; }
    inline bool ExpireTimeHasBeenSet() const { return m_expireTimeHasBeenSet; }
    template<typename ExpireTimeT = Aws::Utils::DateTime>
    void SetExpireTime(ExpireTimeT&& value) { m_expireTimeHasBeenSet = true; m_expireTime = std::forward<ExpireTimeT>(value); }
    template<typename ExpireTimeT = Aws::Utils::DateTime>
    UpdateKeyRequest& WithExpireTime(ExpireTimeT&& value) { SetExpireTime(std::forward<ExpireTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the API key should expire. Set to <code>true</code> to set the API
     * key to have no expiration time.</p>
     */
    inline bool GetNoExpiry() const { return m_noExpiry; }
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
    inline bool GetForceUpdate() const { return m_forceUpdate; }
    inline bool ForceUpdateHasBeenSet() const { return m_forceUpdateHasBeenSet; }
    inline void SetForceUpdate(bool value) { m_forceUpdateHasBeenSet = true; m_forceUpdate = value; }
    inline UpdateKeyRequest& WithForceUpdate(bool value) { SetForceUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the API key restrictions for the API key resource.</p>
     */
    inline const ApiKeyRestrictions& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = ApiKeyRestrictions>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = ApiKeyRestrictions>
    UpdateKeyRequest& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_expireTime{};
    bool m_expireTimeHasBeenSet = false;

    bool m_noExpiry{false};
    bool m_noExpiryHasBeenSet = false;

    bool m_forceUpdate{false};
    bool m_forceUpdateHasBeenSet = false;

    ApiKeyRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
