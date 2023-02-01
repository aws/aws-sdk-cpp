/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccessDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AccessDirectionMapper
      {

        static const int inbound_HASH = HashingUtils::HashString("inbound");
        static const int outbound_HASH = HashingUtils::HashString("outbound");


        AccessDirection GetAccessDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == inbound_HASH)
          {
            return AccessDirection::inbound;
          }
          else if (hashCode == outbound_HASH)
          {
            return AccessDirection::outbound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDirection>(hashCode);
          }

          return AccessDirection::NOT_SET;
        }

        Aws::String GetNameForAccessDirection(AccessDirection enumValue)
        {
          switch(enumValue)
          {
          case AccessDirection::inbound:
            return "inbound";
          case AccessDirection::outbound:
            return "outbound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDirectionMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
