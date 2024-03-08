/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/VendorGuidance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace VendorGuidanceMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DISCONTINUED_HASH = HashingUtils::HashString("DISCONTINUED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VendorGuidance GetVendorGuidanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VendorGuidance::ACTIVE;
          }
          else if (hashCode == DISCONTINUED_HASH)
          {
            return VendorGuidance::DISCONTINUED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VendorGuidance::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VendorGuidance>(hashCode);
          }

          return VendorGuidance::NOT_SET;
        }

        Aws::String GetNameForVendorGuidance(VendorGuidance enumValue)
        {
          switch(enumValue)
          {
          case VendorGuidance::NOT_SET:
            return {};
          case VendorGuidance::ACTIVE:
            return "ACTIVE";
          case VendorGuidance::DISCONTINUED:
            return "DISCONTINUED";
          case VendorGuidance::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VendorGuidanceMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
