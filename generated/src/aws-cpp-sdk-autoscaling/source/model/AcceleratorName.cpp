/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AcceleratorName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace AcceleratorNameMapper
      {

        static const int a100_HASH = HashingUtils::HashString("a100");
        static const int v100_HASH = HashingUtils::HashString("v100");
        static const int k80_HASH = HashingUtils::HashString("k80");
        static const int t4_HASH = HashingUtils::HashString("t4");
        static const int m60_HASH = HashingUtils::HashString("m60");
        static const int radeon_pro_v520_HASH = HashingUtils::HashString("radeon-pro-v520");
        static const int vu9p_HASH = HashingUtils::HashString("vu9p");


        AcceleratorName GetAcceleratorNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == a100_HASH)
          {
            return AcceleratorName::a100;
          }
          else if (hashCode == v100_HASH)
          {
            return AcceleratorName::v100;
          }
          else if (hashCode == k80_HASH)
          {
            return AcceleratorName::k80;
          }
          else if (hashCode == t4_HASH)
          {
            return AcceleratorName::t4;
          }
          else if (hashCode == m60_HASH)
          {
            return AcceleratorName::m60;
          }
          else if (hashCode == radeon_pro_v520_HASH)
          {
            return AcceleratorName::radeon_pro_v520;
          }
          else if (hashCode == vu9p_HASH)
          {
            return AcceleratorName::vu9p;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceleratorName>(hashCode);
          }

          return AcceleratorName::NOT_SET;
        }

        Aws::String GetNameForAcceleratorName(AcceleratorName enumValue)
        {
          switch(enumValue)
          {
          case AcceleratorName::NOT_SET:
            return {};
          case AcceleratorName::a100:
            return "a100";
          case AcceleratorName::v100:
            return "v100";
          case AcceleratorName::k80:
            return "k80";
          case AcceleratorName::t4:
            return "t4";
          case AcceleratorName::m60:
            return "m60";
          case AcceleratorName::radeon_pro_v520:
            return "radeon-pro-v520";
          case AcceleratorName::vu9p:
            return "vu9p";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorNameMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
