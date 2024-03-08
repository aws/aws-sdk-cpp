/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int SUPER_USER_HASH = HashingUtils::HashString("SUPER_USER");
        static const int APP_USER_HASH = HashingUtils::HashString("APP_USER");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUPER_USER_HASH)
          {
            return UserType::SUPER_USER;
          }
          else if (hashCode == APP_USER_HASH)
          {
            return UserType::APP_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserType>(hashCode);
          }

          return UserType::NOT_SET;
        }

        Aws::String GetNameForUserType(UserType enumValue)
        {
          switch(enumValue)
          {
          case UserType::NOT_SET:
            return {};
          case UserType::SUPER_USER:
            return "SUPER_USER";
          case UserType::APP_USER:
            return "APP_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserTypeMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
