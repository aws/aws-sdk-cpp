/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/InstanceLimitsHandling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaignsV2
  {
    namespace Model
    {
      namespace InstanceLimitsHandlingMapper
      {

        static const int OPT_IN_HASH = HashingUtils::HashString("OPT_IN");
        static const int OPT_OUT_HASH = HashingUtils::HashString("OPT_OUT");


        InstanceLimitsHandling GetInstanceLimitsHandlingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPT_IN_HASH)
          {
            return InstanceLimitsHandling::OPT_IN;
          }
          else if (hashCode == OPT_OUT_HASH)
          {
            return InstanceLimitsHandling::OPT_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceLimitsHandling>(hashCode);
          }

          return InstanceLimitsHandling::NOT_SET;
        }

        Aws::String GetNameForInstanceLimitsHandling(InstanceLimitsHandling enumValue)
        {
          switch(enumValue)
          {
          case InstanceLimitsHandling::NOT_SET:
            return {};
          case InstanceLimitsHandling::OPT_IN:
            return "OPT_IN";
          case InstanceLimitsHandling::OPT_OUT:
            return "OPT_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceLimitsHandlingMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
