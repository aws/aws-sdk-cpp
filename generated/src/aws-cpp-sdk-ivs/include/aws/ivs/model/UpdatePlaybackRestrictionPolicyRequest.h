/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class UpdatePlaybackRestrictionPolicyRequest : public IVSRequest
  {
  public:
    AWS_IVS_API UpdatePlaybackRestrictionPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePlaybackRestrictionPolicy"; }

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
    UpdatePlaybackRestrictionPolicyRequest& WithAllowedCountries(AllowedCountriesT&& value) { SetAllowedCountries(std::forward<AllowedCountriesT>(value)); return *this;}
    template<typename AllowedCountriesT = Aws::String>
    UpdatePlaybackRestrictionPolicyRequest& AddAllowedCountries(AllowedCountriesT&& value) { m_allowedCountriesHasBeenSet = true; m_allowedCountries.emplace_back(std::forward<AllowedCountriesT>(value)); return *this; }
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
    UpdatePlaybackRestrictionPolicyRequest& WithAllowedOrigins(AllowedOriginsT&& value) { SetAllowedOrigins(std::forward<AllowedOriginsT>(value)); return *this;}
    template<typename AllowedOriginsT = Aws::String>
    UpdatePlaybackRestrictionPolicyRequest& AddAllowedOrigins(AllowedOriginsT&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.emplace_back(std::forward<AllowedOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>ARN of the playback-restriction-policy to be updated.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdatePlaybackRestrictionPolicyRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether channel playback is constrained by origin site. Default:
     * <code>false</code>.</p>
     */
    inline bool GetEnableStrictOriginEnforcement() const { return m_enableStrictOriginEnforcement; }
    inline bool EnableStrictOriginEnforcementHasBeenSet() const { return m_enableStrictOriginEnforcementHasBeenSet; }
    inline void SetEnableStrictOriginEnforcement(bool value) { m_enableStrictOriginEnforcementHasBeenSet = true; m_enableStrictOriginEnforcement = value; }
    inline UpdatePlaybackRestrictionPolicyRequest& WithEnableStrictOriginEnforcement(bool value) { SetEnableStrictOriginEnforcement(value); return *this;}
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
    UpdatePlaybackRestrictionPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedCountries;
    bool m_allowedCountriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_enableStrictOriginEnforcement{false};
    bool m_enableStrictOriginEnforcementHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
