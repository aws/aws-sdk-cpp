/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DiskIopsConfigurationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DiskIopsConfigurationModeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int USER_PROVISIONED_HASH = HashingUtils::HashString("USER_PROVISIONED");


        DiskIopsConfigurationMode GetDiskIopsConfigurationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return DiskIopsConfigurationMode::AUTOMATIC;
          }
          else if (hashCode == USER_PROVISIONED_HASH)
          {
            return DiskIopsConfigurationMode::USER_PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskIopsConfigurationMode>(hashCode);
          }

          return DiskIopsConfigurationMode::NOT_SET;
        }

        Aws::String GetNameForDiskIopsConfigurationMode(DiskIopsConfigurationMode enumValue)
        {
          switch(enumValue)
          {
          case DiskIopsConfigurationMode::NOT_SET:
            return {};
          case DiskIopsConfigurationMode::AUTOMATIC:
            return "AUTOMATIC";
          case DiskIopsConfigurationMode::USER_PROVISIONED:
            return "USER_PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskIopsConfigurationModeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
