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

#include <aws/connect/model/PhoneType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace PhoneTypeMapper
      {

        static const int SOFT_PHONE_HASH = HashingUtils::HashString("SOFT_PHONE");
        static const int DESK_PHONE_HASH = HashingUtils::HashString("DESK_PHONE");


        PhoneType GetPhoneTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOFT_PHONE_HASH)
          {
            return PhoneType::SOFT_PHONE;
          }
          else if (hashCode == DESK_PHONE_HASH)
          {
            return PhoneType::DESK_PHONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneType>(hashCode);
          }

          return PhoneType::NOT_SET;
        }

        Aws::String GetNameForPhoneType(PhoneType enumValue)
        {
          switch(enumValue)
          {
          case PhoneType::SOFT_PHONE:
            return "SOFT_PHONE";
          case PhoneType::DESK_PHONE:
            return "DESK_PHONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
