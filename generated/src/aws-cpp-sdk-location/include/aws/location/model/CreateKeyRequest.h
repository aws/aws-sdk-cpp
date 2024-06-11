/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ApiKeyRestrictions.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class CreateKeyRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CreateKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A custom name for the API key resource.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique API key name.</p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleAPIKey</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline CreateKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline CreateKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline CreateKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key restrictions for the API key resource.</p>
     */
    inline const ApiKeyRestrictions& GetRestrictions() const{ return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    inline void SetRestrictions(const ApiKeyRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }
    inline void SetRestrictions(ApiKeyRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }
    inline CreateKeyRequest& WithRestrictions(const ApiKeyRestrictions& value) { SetRestrictions(value); return *this;}
    inline CreateKeyRequest& WithRestrictions(ApiKeyRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. One of <code>NoExpiry</code> or
     * <code>ExpireTime</code> must be set.</p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const{ return m_expireTime; }
    inline bool ExpireTimeHasBeenSet() const { return m_expireTimeHasBeenSet; }
    inline void SetExpireTime(const Aws::Utils::DateTime& value) { m_expireTimeHasBeenSet = true; m_expireTime = value; }
    inline void SetExpireTime(Aws::Utils::DateTime&& value) { m_expireTimeHasBeenSet = true; m_expireTime = std::move(value); }
    inline CreateKeyRequest& WithExpireTime(const Aws::Utils::DateTime& value) { SetExpireTime(value); return *this;}
    inline CreateKeyRequest& WithExpireTime(Aws::Utils::DateTime&& value) { SetExpireTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally set to <code>true</code> to set no expiration time for the API
     * key. One of <code>NoExpiry</code> or <code>ExpireTime</code> must be set.</p>
     */
    inline bool GetNoExpiry() const{ return m_noExpiry; }
    inline bool NoExpiryHasBeenSet() const { return m_noExpiryHasBeenSet; }
    inline void SetNoExpiry(bool value) { m_noExpiryHasBeenSet = true; m_noExpiry = value; }
    inline CreateKeyRequest& WithNoExpiry(bool value) { SetNoExpiry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies one or more tags to the map resource. A tag is a key-value pair that
     * helps manage, identify, search, and filter your resources by labelling them.</p>
     * <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li>
     * <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateKeyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateKeyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateKeyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateKeyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKeyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKeyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateKeyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKeyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKeyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    ApiKeyRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_expireTime;
    bool m_expireTimeHasBeenSet = false;

    bool m_noExpiry;
    bool m_noExpiryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
