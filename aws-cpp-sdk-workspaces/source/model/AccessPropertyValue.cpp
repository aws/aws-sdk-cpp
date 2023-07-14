/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccessPropertyValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace AccessPropertyValueMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        AccessPropertyValue GetAccessPropertyValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AccessPropertyValue::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return AccessPropertyValue::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessPropertyValue>(hashCode);
          }

          return AccessPropertyValue::NOT_SET;
        }

        Aws::String GetNameForAccessPropertyValue(AccessPropertyValue enumValue)
        {
          switch(enumValue)
          {
          case AccessPropertyValue::ALLOW:
            return "ALLOW";
          case AccessPropertyValue::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessPropertyValueMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
