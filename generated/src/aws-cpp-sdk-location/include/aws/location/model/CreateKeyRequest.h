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
    AWS_LOCATIONSERVICE_API CreateKeyRequest() = default;

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
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    CreateKeyRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key restrictions for the API key resource.</p>
     */
    inline const ApiKeyRestrictions& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = ApiKeyRestrictions>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = ApiKeyRestrictions>
    CreateKeyRequest& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateKeyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. One of <code>NoExpiry</code> or
     * <code>ExpireTime</code> must be set.</p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const { return m_expireTime; }
    inline bool ExpireTimeHasBeenSet() const { return m_expireTimeHasBeenSet; }
    template<typename ExpireTimeT = Aws::Utils::DateTime>
    void SetExpireTime(ExpireTimeT&& value) { m_expireTimeHasBeenSet = true; m_expireTime = std::forward<ExpireTimeT>(value); }
    template<typename ExpireTimeT = Aws::Utils::DateTime>
    CreateKeyRequest& WithExpireTime(ExpireTimeT&& value) { SetExpireTime(std::forward<ExpireTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally set to <code>true</code> to set no expiration time for the API
     * key. One of <code>NoExpiry</code> or <code>ExpireTime</code> must be set.</p>
     */
    inline bool GetNoExpiry() const { return m_noExpiry; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateKeyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    ApiKeyRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_expireTime{};
    bool m_expireTimeHasBeenSet = false;

    bool m_noExpiry{false};
    bool m_noExpiryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
