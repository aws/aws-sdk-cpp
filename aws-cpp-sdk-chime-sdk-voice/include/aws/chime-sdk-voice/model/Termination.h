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

  class Termination
  {
  public:
    AWS_CHIMESDKVOICE_API Termination();
    AWS_CHIMESDKVOICE_API Termination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Termination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetCpsLimit() const{ return m_cpsLimit; }

    
    inline bool CpsLimitHasBeenSet() const { return m_cpsLimitHasBeenSet; }

    
    inline void SetCpsLimit(int value) { m_cpsLimitHasBeenSet = true; m_cpsLimit = value; }

    
    inline Termination& WithCpsLimit(int value) { SetCpsLimit(value); return *this;}


    
    inline const Aws::String& GetDefaultPhoneNumber() const{ return m_defaultPhoneNumber; }

    
    inline bool DefaultPhoneNumberHasBeenSet() const { return m_defaultPhoneNumberHasBeenSet; }

    
    inline void SetDefaultPhoneNumber(const Aws::String& value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber = value; }

    
    inline void SetDefaultPhoneNumber(Aws::String&& value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber = std::move(value); }

    
    inline void SetDefaultPhoneNumber(const char* value) { m_defaultPhoneNumberHasBeenSet = true; m_defaultPhoneNumber.assign(value); }

    
    inline Termination& WithDefaultPhoneNumber(const Aws::String& value) { SetDefaultPhoneNumber(value); return *this;}

    
    inline Termination& WithDefaultPhoneNumber(Aws::String&& value) { SetDefaultPhoneNumber(std::move(value)); return *this;}

    
    inline Termination& WithDefaultPhoneNumber(const char* value) { SetDefaultPhoneNumber(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetCallingRegions() const{ return m_callingRegions; }

    
    inline bool CallingRegionsHasBeenSet() const { return m_callingRegionsHasBeenSet; }

    
    inline void SetCallingRegions(const Aws::Vector<Aws::String>& value) { m_callingRegionsHasBeenSet = true; m_callingRegions = value; }

    
    inline void SetCallingRegions(Aws::Vector<Aws::String>&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions = std::move(value); }

    
    inline Termination& WithCallingRegions(const Aws::Vector<Aws::String>& value) { SetCallingRegions(value); return *this;}

    
    inline Termination& WithCallingRegions(Aws::Vector<Aws::String>&& value) { SetCallingRegions(std::move(value)); return *this;}

    
    inline Termination& AddCallingRegions(const Aws::String& value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(value); return *this; }

    
    inline Termination& AddCallingRegions(Aws::String&& value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(std::move(value)); return *this; }

    
    inline Termination& AddCallingRegions(const char* value) { m_callingRegionsHasBeenSet = true; m_callingRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetCidrAllowedList() const{ return m_cidrAllowedList; }

    
    inline bool CidrAllowedListHasBeenSet() const { return m_cidrAllowedListHasBeenSet; }

    
    inline void SetCidrAllowedList(const Aws::Vector<Aws::String>& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList = value; }

    
    inline void SetCidrAllowedList(Aws::Vector<Aws::String>&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList = std::move(value); }

    
    inline Termination& WithCidrAllowedList(const Aws::Vector<Aws::String>& value) { SetCidrAllowedList(value); return *this;}

    
    inline Termination& WithCidrAllowedList(Aws::Vector<Aws::String>&& value) { SetCidrAllowedList(std::move(value)); return *this;}

    
    inline Termination& AddCidrAllowedList(const Aws::String& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(value); return *this; }

    
    inline Termination& AddCidrAllowedList(Aws::String&& value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(std::move(value)); return *this; }

    
    inline Termination& AddCidrAllowedList(const char* value) { m_cidrAllowedListHasBeenSet = true; m_cidrAllowedList.push_back(value); return *this; }


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
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
} // namespace ChimeSDKVoice
} // namespace Aws
