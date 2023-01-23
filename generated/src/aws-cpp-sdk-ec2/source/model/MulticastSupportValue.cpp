/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MulticastSupportValue.h>
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
      namespace MulticastSupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        MulticastSupportValue GetMulticastSupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return MulticastSupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return MulticastSupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MulticastSupportValue>(hashCode);
          }

          return MulticastSupportValue::NOT_SET;
        }

        Aws::String GetNameForMulticastSupportValue(MulticastSupportValue enumValue)
        {
          switch(enumValue)
          {
          case MulticastSupportValue::enable:
            return "enable";
          case MulticastSupportValue::disable:
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

      } // namespace MulticastSupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
