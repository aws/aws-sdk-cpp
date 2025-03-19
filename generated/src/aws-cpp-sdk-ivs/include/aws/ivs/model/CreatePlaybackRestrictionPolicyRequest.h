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
    AWS_IVS_API CreatePlaybackRestrictionPolicyRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetAllowedCountries() const { return m_allowedCountries; }
    inline bool AllowedCountriesHasBeenSet() const { return m_allowedCountriesHasBeenSet; }
    template<typename AllowedCountriesT = Aws::Vector<Aws::String>>
    void SetAllowedCountries(AllowedCountriesT&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries = std::forward<AllowedCountriesT>(value); }
    template<typename AllowedCountriesT = Aws::Vector<Aws::String>>
    CreatePlaybackRestrictionPolicyRequest& WithAllowedCountries(AllowedCountriesT&& value) { SetAllowedCountries(std::forward<AllowedCountriesT>(value)); return *this;}
    template<typename AllowedCountriesT = Aws::String>
    CreatePlaybackRestrictionPolicyRequest& AddAllowedCountries(AllowedCountriesT&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.emplace_back(std::forward<AllowedCountriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of origin sites that control CORS restriction. Allowed values are the
     * same as valid values of the Origin header defined at <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin">https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Origin</a>.
     * Default: All origins (an empty array).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const { return m_allowedOrigins; }
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    void SetAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::forward<AllowedOriginsT>(value); }
    template<typename AllowedOriginsT = Aws::Vector<Aws::String>>
    CreatePlaybackRestrictionPolicyRequest& WithAllowedOrigins(AllowedOriginsT&& value) { SetAllowedOrigins(std::forward<AllowedOriginsT>(value)); return *this;}
    template<typename AllowedOriginsT = Aws::String>
    CreatePlaybackRestrictionPolicyRequest& AddAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.emplace_back(std::forward<AllowedOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline bool GetEnableStrictOriginEnforcement() const { return m_enableStrictOriginEnforcement; }
    inline bool EnableStrictOriginEnforcementHasBeenSet() const { return m_enableStrictOriginEnforcementHasBeenSet; }
    inline void SetEnableStrictOriginEnforcement(bool value) { m_enableStrictOriginEnforcementHasBeenSet = true; m_enableStrictOriginEnforcement = value; }
    inline CreatePlaybackRestrictionPolicyRequest& WithEnableStrictOriginEnforcement(bool value) { SetEnableStrictOriginEnforcement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback-restriction-policy name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePlaybackRestrictionPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePlaybackRestrictionPolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePlaybackRestrictionPolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedCountries;
    bool m_allowedCountriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    bool m_enableStrictOriginEnforcement{false};
    bool m_enableStrictOriginEnforcementHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
