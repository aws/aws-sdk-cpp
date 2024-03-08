/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Igmpv2SupportValue.h>
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
      namespace Igmpv2SupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        Igmpv2SupportValue GetIgmpv2SupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return Igmpv2SupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return Igmpv2SupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Igmpv2SupportValue>(hashCode);
          }

          return Igmpv2SupportValue::NOT_SET;
        }

        Aws::String GetNameForIgmpv2SupportValue(Igmpv2SupportValue enumValue)
        {
          switch(enumValue)
          {
          case Igmpv2SupportValue::NOT_SET:
            return {};
          case Igmpv2SupportValue::enable:
            return "enable";
          case Igmpv2SupportValue::disable:
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

      } // namespace Igmpv2SupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
