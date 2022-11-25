/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnlimitedSupportedInstanceFamily.h>
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
      namespace UnlimitedSupportedInstanceFamilyMapper
      {

        static const int t2_HASH = HashingUtils::HashString("t2");
        static const int t3_HASH = HashingUtils::HashString("t3");
        static const int t3a_HASH = HashingUtils::HashString("t3a");
        static const int t4g_HASH = HashingUtils::HashString("t4g");


        UnlimitedSupportedInstanceFamily GetUnlimitedSupportedInstanceFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == t2_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t2;
          }
          else if (hashCode == t3_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t3;
          }
          else if (hashCode == t3a_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t3a;
          }
          else if (hashCode == t4g_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t4g;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnlimitedSupportedInstanceFamily>(hashCode);
          }

          return UnlimitedSupportedInstanceFamily::NOT_SET;
        }

        Aws::String GetNameForUnlimitedSupportedInstanceFamily(UnlimitedSupportedInstanceFamily enumValue)
        {
          switch(enumValue)
          {
          case UnlimitedSupportedInstanceFamily::t2:
            return "t2";
          case UnlimitedSupportedInstanceFamily::t3:
            return "t3";
          case UnlimitedSupportedInstanceFamily::t3a:
            return "t3a";
          case UnlimitedSupportedInstanceFamily::t4g:
            return "t4g";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnlimitedSupportedInstanceFamilyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
