/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StaticSourcesSupportValue.h>
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
      namespace StaticSourcesSupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        StaticSourcesSupportValue GetStaticSourcesSupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return StaticSourcesSupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return StaticSourcesSupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StaticSourcesSupportValue>(hashCode);
          }

          return StaticSourcesSupportValue::NOT_SET;
        }

        Aws::String GetNameForStaticSourcesSupportValue(StaticSourcesSupportValue enumValue)
        {
          switch(enumValue)
          {
          case StaticSourcesSupportValue::NOT_SET:
            return {};
          case StaticSourcesSupportValue::enable:
            return "enable";
          case StaticSourcesSupportValue::disable:
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

      } // namespace StaticSourcesSupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
