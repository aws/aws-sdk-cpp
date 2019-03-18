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

#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace PhoneNumberProductTypeMapper
      {

        static const int BusinessCalling_HASH = HashingUtils::HashString("BusinessCalling");
        static const int VoiceConnector_HASH = HashingUtils::HashString("VoiceConnector");


        PhoneNumberProductType GetPhoneNumberProductTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BusinessCalling_HASH)
          {
            return PhoneNumberProductType::BusinessCalling;
          }
          else if (hashCode == VoiceConnector_HASH)
          {
            return PhoneNumberProductType::VoiceConnector;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberProductType>(hashCode);
          }

          return PhoneNumberProductType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberProductType(PhoneNumberProductType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberProductType::BusinessCalling:
            return "BusinessCalling";
          case PhoneNumberProductType::VoiceConnector:
            return "VoiceConnector";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberProductTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
