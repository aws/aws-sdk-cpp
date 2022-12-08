/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
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

  class UpdatePhoneNumberRequestItem
  {
  public:
    AWS_CHIMESDKVOICE_API UpdatePhoneNumberRequestItem();
    AWS_CHIMESDKVOICE_API UpdatePhoneNumberRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API UpdatePhoneNumberRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    
    inline UpdatePhoneNumberRequestItem& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    
    inline UpdatePhoneNumberRequestItem& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    
    inline UpdatePhoneNumberRequestItem& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    
    inline UpdatePhoneNumberRequestItem& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    
    inline UpdatePhoneNumberRequestItem& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }

    
    inline void SetCallingName(const Aws::String& value) { m_callingNameHasBeenSet = true; m_callingName = value; }

    
    inline void SetCallingName(Aws::String&& value) { m_callingNameHasBeenSet = true; m_callingName = std::move(value); }

    
    inline void SetCallingName(const char* value) { m_callingNameHasBeenSet = true; m_callingName.assign(value); }

    
    inline UpdatePhoneNumberRequestItem& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    
    inline UpdatePhoneNumberRequestItem& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    
    inline UpdatePhoneNumberRequestItem& WithCallingName(const char* value) { SetCallingName(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
