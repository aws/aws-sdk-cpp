/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ManagementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ManagementTypeMapper
      {

        static const int AUTO_MANAGED_HASH = HashingUtils::HashString("AUTO_MANAGED");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        ManagementType GetManagementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_MANAGED_HASH)
          {
            return ManagementType::AUTO_MANAGED;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return ManagementType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagementType>(hashCode);
          }

          return ManagementType::NOT_SET;
        }

        Aws::String GetNameForManagementType(ManagementType enumValue)
        {
          switch(enumValue)
          {
          case ManagementType::AUTO_MANAGED:
            return "AUTO_MANAGED";
          case ManagementType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagementTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
