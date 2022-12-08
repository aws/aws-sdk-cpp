/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Termination settings enable your SIP hosts to make outbound calls using your
   * Amazon Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Termination">AWS
   * API Reference</a></p>
   */
  class Termination
  {
  public:
    AWS_CHIME_API Termination();
    AWS_CHIME_API Termination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Termination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The limit on calls per second. Max value based on account service quota.
     * Default value of 1.</p>
     */
    inline int GetCpsLimit() const{ return m_cpsLimit; }

    /**
     * <p>The limit on calls per second. Max value based on account service quota.
     * Default value of 1.</p>
     */
    inline bool CpsLimitHasBeenSet() const { return m_cpsLimitHasBeenSet; }

    /**
     * <p>The limit on calls per second. Max value based on account service quota.
     * Default value of 1.</p>
     */
    inline void SetCpsLimit(int value) { m_cpsLimitHasBeenSet = true; m_cpsLimit = value; }

    /**
     * <p>The limit on calls per second. Max value based on account service quota.
     * Default value of 1.</p>
     */
    inline Termination& WithCpsLimit(int value) { SetCpsLimit(value); return *this;}


    /**
     * <p>The default caller ID phone number.</p>
     */
    inline const Aws::String& GetDefaultPhoneNumber() const{ return m_defaultPhoneNumber; }

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline bool DefaultPhoneNumberHasBeenSet() const { return m_defaultPhoneNumberHasBeenSet; }

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline void SetDefaultPhoneNumber(const Aws::String& value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber = value; }

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline void SetDefaultPhoneNumber(Aws::String&& value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber = std::move(value); }

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline void SetDefaultPhoneNumber(const char* value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber.assign(value); }

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline Termination& WithDefaultPhoneNumber(const Aws::String& value) { SetDefaultPhoneNumber(value); return *this;}

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline Termination& WithDefaultPhoneNumber(Aws::String&& value) { SetDefaultPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The default caller ID phone number.</p>
     */
    inline Termination& WithDefaultPhoneNumber(const char* value) { SetDefaultPhoneNumber(value); return *this;}


    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallingRegions() const{ return m_callingRegions; }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline bool CallingRegionsHasBeenSet() const { return m_callingRegionsHasBeenSet; }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline void SetCallingRegions(const Aws::Vector<Aws::String>& value) { m_callingRegionsHasBeenSet = true; m_callingRegions = value; }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline void SetCallingRegions(Aws::Vector<Aws::String>&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions = std::move(value); }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline Termination& WithCallingRegions(const Aws::Vector<Aws::String>& value) { SetCallingRegions(value); return *this;}

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline Termination& WithCallingRegions(Aws::Vector<Aws::String>&& value) { SetCallingRegions(std::move(value)); return *this;}

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline Termination& AddCallingRegions(const Aws::String& value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(value); return *this; }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline Termination& AddCallingRegions(Aws::String&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The countries to which calls are allowed, in ISO 3166-1 alpha-2 format.
     * Required.</p>
     */
    inline Termination& AddCallingRegions(const char* value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(value); return *this; }


    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowedList() const{ return m_cidrAllowedList; }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline bool CidrAllowedListHasBeenSet() const { return m_cidrAllowedListHasBeenSet; }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline void SetCidrAllowedList(const Aws::Vector<Aws::String>& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList = value; }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline void SetCidrAllowedList(Aws::Vector<Aws::String>&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList = std::move(value); }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline Termination& WithCidrAllowedList(const Aws::Vector<Aws::String>& value) { SetCidrAllowedList(value); return *this;}

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline Termination& WithCidrAllowedList(Aws::Vector<Aws::String>&& value) { SetCidrAllowedList(std::move(value)); return *this;}

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline Termination& AddCidrAllowedList(const Aws::String& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(value); return *this; }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline Termination& AddCidrAllowedList(Aws::String&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses allowed to make calls, in CIDR format. Required.</p>
     */
    inline Termination& AddCidrAllowedList(const char* value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(value); return *this; }


    /**
     * <p>When termination settings are disabled, outbound calls can not be made.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When termination settings are disabled, outbound calls can not be made.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When termination settings are disabled, outbound calls can not be made.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When termination settings are disabled, outbound calls can not be made.</p>
     */
    inline Termination& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    int m_cpsLimit;
    bool m_cpsLimitHasBeenSet = false;

    Aws::String m_defaultPhoneNumber;
    bool m_defaultPhoneNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_callingRegions;
    bool m_callingRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrAllowedList;
    bool m_cidrAllowedListHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
