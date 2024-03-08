/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/RenewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace RenewTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Weekly_HASH = HashingUtils::HashString("Weekly");
        static const int Monthly_HASH = HashingUtils::HashString("Monthly");


        RenewType GetRenewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return RenewType::None;
          }
          else if (hashCode == Weekly_HASH)
          {
            return RenewType::Weekly;
          }
          else if (hashCode == Monthly_HASH)
          {
            return RenewType::Monthly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenewType>(hashCode);
          }

          return RenewType::NOT_SET;
        }

        Aws::String GetNameForRenewType(RenewType enumValue)
        {
          switch(enumValue)
          {
          case RenewType::NOT_SET:
            return {};
          case RenewType::None:
            return "None";
          case RenewType::Weekly:
            return "Weekly";
          case RenewType::Monthly:
            return "Monthly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenewTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
