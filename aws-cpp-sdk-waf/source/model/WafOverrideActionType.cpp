/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/WafOverrideActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace WafOverrideActionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");


        WafOverrideActionType GetWafOverrideActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return WafOverrideActionType::NONE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return WafOverrideActionType::COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafOverrideActionType>(hashCode);
          }

          return WafOverrideActionType::NOT_SET;
        }

        Aws::String GetNameForWafOverrideActionType(WafOverrideActionType enumValue)
        {
          switch(enumValue)
          {
          case WafOverrideActionType::NONE:
            return "NONE";
          case WafOverrideActionType::COUNT:
            return "COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WafOverrideActionTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
