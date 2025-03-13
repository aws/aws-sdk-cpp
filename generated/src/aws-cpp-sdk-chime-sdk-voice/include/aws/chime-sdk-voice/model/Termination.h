/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>Termination settings enable SIP hosts to make outbound calls using an Amazon
   * Chime SDK Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/Termination">AWS
   * API Reference</a></p>
   */
  class Termination
  {
  public:
    AWS_CHIMESDKVOICE_API Termination() = default;
    AWS_CHIMESDKVOICE_API Termination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Termination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The limit on calls per second. Max value based on account service quota.
     * Default value of 1.</p>
     */
    inline int GetCpsLimit() const { return m_cpsLimit; }
    inline bool CpsLimitHasBeenSet() const { return m_cpsLimitHasBeenSet; }
    inline void SetCpsLimit(int value) { m_cpsLimitHasBeenSet = true; m_cpsLimit = value; }
    inline Termination& WithCpsLimit(int value) { SetCpsLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default outbound calling number.</p>
     */
    inline const Aws::String& GetDefaultPhoneNumber() const { return m_defaultPhoneNumber; }
    inline bool DefaultPhoneNumberHasBeenSet() const { return m_defaultPhoneNumberHasBeenSet; }
    template<typename DefaultPhoneNumberT = Aws::String>
    void SetDefaultPhoneNumber(DefaultPhoneNumberT&& value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber = std::forward<DefaultPhoneNumberT>(value); }
    template<typename DefaultPhoneNumberT = Aws::String>
    Termination& WithDefaultPhoneNumber(DefaultPhoneNumberT&& value) { SetDefaultPhoneNumber(std::forward<DefaultPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallingRegions() const { return m_callingRegions; }
    inline bool CallingRegionsHasBeenSet() const { return m_callingRegionsHasBeenSet; }
    template<typename CallingRegionsT = Aws::Vector<Aws::String>>
    void SetCallingRegions(CallingRegionsT&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions = std::forward<CallingRegionsT>(value); }
    template<typename CallingRegionsT = Aws::Vector<Aws::String>>
    Termination& WithCallingRegions(CallingRegionsT&& value) { SetCallingRegions(std::forward<CallingRegionsT>(value)); return *this;}
    template<typename CallingRegionsT = Aws::String>
    Termination& AddCallingRegions(CallingRegionsT&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions.emplace_back(std::forward<CallingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses allowed to make calls, in CIDR format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowedList() const { return m_cidrAllowedList; }
    inline bool CidrAllowedListHasBeenSet() const { return m_cidrAllowedListHasBeenSet; }
    template<typename CidrAllowedListT = Aws::Vector<Aws::String>>
    void SetCidrAllowedList(CidrAllowedListT&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList = std::forward<CidrAllowedListT>(value); }
    template<typename CidrAllowedListT = Aws::Vector<Aws::String>>
    Termination& WithCidrAllowedList(CidrAllowedListT&& value) { SetCidrAllowedList(std::forward<CidrAllowedListT>(value)); return *this;}
    template<typename CidrAllowedListT = Aws::String>
    Termination& AddCidrAllowedList(CidrAllowedListT&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.emplace_back(std::forward<CidrAllowedListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When termination is disabled, outbound calls cannot be made.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline Termination& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}
  private:

    int m_cpsLimit{0};
    bool m_cpsLimitHasBeenSet = false;

    Aws::String m_defaultPhoneNumber;
    bool m_defaultPhoneNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_callingRegions;
    bool m_callingRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrAllowedList;
    bool m_cidrAllowedListHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
