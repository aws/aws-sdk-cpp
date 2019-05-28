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

#include <aws/chime/model/PhoneNumberType.h>
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
      namespace PhoneNumberTypeMapper
      {

        static const int Local_HASH = HashingUtils::HashString("Local");
        static const int TollFree_HASH = HashingUtils::HashString("TollFree");


        PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Local_HASH)
          {
            return PhoneNumberType::Local;
          }
          else if (hashCode == TollFree_HASH)
          {
            return PhoneNumberType::TollFree;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberType>(hashCode);
          }

          return PhoneNumberType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberType(PhoneNumberType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberType::Local:
            return "Local";
          case PhoneNumberType::TollFree:
            return "TollFree";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
