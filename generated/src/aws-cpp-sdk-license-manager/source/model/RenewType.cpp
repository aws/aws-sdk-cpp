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

        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");
        static constexpr uint32_t Weekly_HASH = ConstExprHashingUtils::HashString("Weekly");
        static constexpr uint32_t Monthly_HASH = ConstExprHashingUtils::HashString("Monthly");


        RenewType GetRenewTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
