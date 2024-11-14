/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AcceleratorName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace AcceleratorNameMapper
      {

        static const int t4_HASH = HashingUtils::HashString("t4");
        static const int a10g_HASH = HashingUtils::HashString("a10g");
        static const int l4_HASH = HashingUtils::HashString("l4");
        static const int l40s_HASH = HashingUtils::HashString("l40s");


        AcceleratorName GetAcceleratorNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == t4_HASH)
          {
            return AcceleratorName::t4;
          }
          else if (hashCode == a10g_HASH)
          {
            return AcceleratorName::a10g;
          }
          else if (hashCode == l4_HASH)
          {
            return AcceleratorName::l4;
          }
          else if (hashCode == l40s_HASH)
          {
            return AcceleratorName::l40s;
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
          case AcceleratorName::t4:
            return "t4";
          case AcceleratorName::a10g:
            return "a10g";
          case AcceleratorName::l4:
            return "l4";
          case AcceleratorName::l40s:
            return "l40s";
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
  } // namespace deadline
} // namespace Aws
