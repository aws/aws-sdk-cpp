/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class CreatePlaybackRestrictionPolicyRequest : public IVSRequest
  {
  public:
    AWS_IVS_API CreatePlaybackRestrictionPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlaybackRestrictionPolicy"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of country codes that control geoblocking restriction. Allowed values
     * are the officially assigned <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1 alpha-2</a>
     * codes. Default: All countries (an empty array).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedCountries() const{ return m_allowedCountries; }
    inline bool AllowedCountriesHasBeenSet() const { return m_allowedCountriesHasBeenSet; }
    inline void SetAllowedCountries(const Aws::Vector<Aws::String>& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries = value; }
    inline void SetAllowedCountries(Aws::Vector<Aws::String>&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries = std::move(value); }
    inline CreatePlaybackRestrictionPolicyRequest& WithAllowedCountries(const Aws::Vector<Aws::String>& value) { SetAllowedCountries(value); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& WithAllowedCountries(Aws::Vector<Aws::String>&& value) { SetAllowedCountries(std::move(value)); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedCountries(const Aws::String& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(value); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedCountries(Aws::String&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(std::move(value)); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedCountries(const char* value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const{ return m_allowedOrigins; }
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }
    inline void SetAllowedOrigins(const Aws::Vector<Aws::String>& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = value; }
    inline void SetAllowedOrigins(Aws::Vector<Aws::String>&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::move(value); }
    inline CreatePlaybackRestrictionPolicyRequest& WithAllowedOrigins(const Aws::Vector<Aws::String>& value) { SetAllowedOrigins(value); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& WithAllowedOrigins(Aws::Vector<Aws::String>&& value) { SetAllowedOrigins(std::move(value)); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedOrigins(const Aws::String& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedOrigins(Aws::String&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(std::move(value)); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddAllowedOrigins(const char* value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline bool GetEnableStrictOriginEnforcement() const{ return m_enableStrictOriginEnforcement; }
    inline bool EnableStrictOriginEnforcementHasBeenSet() const { return m_enableStrictOriginEnforcementHasBeenSet; }
    inline void SetEnableStrictOriginEnforcement(bool value) { m_enableStrictOriginEnforcementHasBeenSet = true; m_enableStrictOriginEnforcement = value; }
    inline CreatePlaybackRestrictionPolicyRequest& WithEnableStrictOriginEnforcement(bool value) { SetEnableStrictOriginEnforcement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePlaybackRestrictionPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
     * See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS has no service-specific constraints
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePlaybackRestrictionPolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePlaybackRestrictionPolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedCountries;
    bool m_allowedCountriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    bool m_enableStrictOriginEnforcement;
    bool m_enableStrictOriginEnforcementHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
