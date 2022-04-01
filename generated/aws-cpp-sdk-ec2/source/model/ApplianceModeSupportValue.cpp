/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ApplianceModeSupportValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ApplianceModeSupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        ApplianceModeSupportValue GetApplianceModeSupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return ApplianceModeSupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return ApplianceModeSupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplianceModeSupportValue>(hashCode);
          }

          return ApplianceModeSupportValue::NOT_SET;
        }

        Aws::String GetNameForApplianceModeSupportValue(ApplianceModeSupportValue enumValue)
        {
          switch(enumValue)
          {
          case ApplianceModeSupportValue::enable:
            return "enable";
          case ApplianceModeSupportValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplianceModeSupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
