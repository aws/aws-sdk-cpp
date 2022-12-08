/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberAssociationName.h>
#include <aws/core/utils/DateTime.h>
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

  class PhoneNumberAssociation
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation();
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumberAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    
    inline PhoneNumberAssociation& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    
    inline PhoneNumberAssociation& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    
    inline PhoneNumberAssociation& WithValue(const char* value) { SetValue(value); return *this;}


    
    inline const PhoneNumberAssociationName& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const PhoneNumberAssociationName& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(PhoneNumberAssociationName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline PhoneNumberAssociation& WithName(const PhoneNumberAssociationName& value) { SetName(value); return *this;}

    
    inline PhoneNumberAssociation& WithName(PhoneNumberAssociationName&& value) { SetName(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetAssociatedTimestamp() const{ return m_associatedTimestamp; }

    
    inline bool AssociatedTimestampHasBeenSet() const { return m_associatedTimestampHasBeenSet; }

    
    inline void SetAssociatedTimestamp(const Aws::Utils::DateTime& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = value; }

    
    inline void SetAssociatedTimestamp(Aws::Utils::DateTime&& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = std::move(value); }

    
    inline PhoneNumberAssociation& WithAssociatedTimestamp(const Aws::Utils::DateTime& value) { SetAssociatedTimestamp(value); return *this;}

    
    inline PhoneNumberAssociation& WithAssociatedTimestamp(Aws::Utils::DateTime&& value) { SetAssociatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    PhoneNumberAssociationName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_associatedTimestamp;
    bool m_associatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
