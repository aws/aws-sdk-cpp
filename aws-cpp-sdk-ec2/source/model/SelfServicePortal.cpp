/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SelfServicePortal.h>
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
      namespace SelfServicePortalMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        SelfServicePortal GetSelfServicePortalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return SelfServicePortal::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return SelfServicePortal::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelfServicePortal>(hashCode);
          }

          return SelfServicePortal::NOT_SET;
        }

        Aws::String GetNameForSelfServicePortal(SelfServicePortal enumValue)
        {
          switch(enumValue)
          {
          case SelfServicePortal::enabled:
            return "enabled";
          case SelfServicePortal::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelfServicePortalMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
