/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class AWS_CHIME_API Participant
  {
  public:
    Participant();
    Participant(Aws::Utils::Json::JsonView jsonValue);
    Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    
    inline Participant& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    
    inline Participant& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    
    inline Participant& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetProxyPhoneNumber() const{ return m_proxyPhoneNumber; }

    
    inline bool ProxyPhoneNumberHasBeenSet() const { return m_proxyPhoneNumberHasBeenSet; }

    
    inline void SetProxyPhoneNumber(const Aws::String& value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber = value; }

    
    inline void SetProxyPhoneNumber(Aws::String&& value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber = std::move(value); }

    
    inline void SetProxyPhoneNumber(const char* value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber.assign(value); }

    
    inline Participant& WithProxyPhoneNumber(const Aws::String& value) { SetProxyPhoneNumber(value); return *this;}

    
    inline Participant& WithProxyPhoneNumber(Aws::String&& value) { SetProxyPhoneNumber(std::move(value)); return *this;}

    
    inline Participant& WithProxyPhoneNumber(const char* value) { SetProxyPhoneNumber(value); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::String m_proxyPhoneNumber;
    bool m_proxyPhoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
