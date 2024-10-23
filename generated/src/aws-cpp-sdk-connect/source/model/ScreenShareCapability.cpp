/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ScreenShareCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ScreenShareCapabilityMapper
      {

        static const int SEND_HASH = HashingUtils::HashString("SEND");


        ScreenShareCapability GetScreenShareCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return ScreenShareCapability::SEND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScreenShareCapability>(hashCode);
          }

          return ScreenShareCapability::NOT_SET;
        }

        Aws::String GetNameForScreenShareCapability(ScreenShareCapability enumValue)
        {
          switch(enumValue)
          {
          case ScreenShareCapability::NOT_SET:
            return {};
          case ScreenShareCapability::SEND:
            return "SEND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScreenShareCapabilityMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
