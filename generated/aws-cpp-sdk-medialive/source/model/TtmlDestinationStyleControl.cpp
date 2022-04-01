/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TtmlDestinationStyleControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace TtmlDestinationStyleControlMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        TtmlDestinationStyleControl GetTtmlDestinationStyleControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return TtmlDestinationStyleControl::PASSTHROUGH;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return TtmlDestinationStyleControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TtmlDestinationStyleControl>(hashCode);
          }

          return TtmlDestinationStyleControl::NOT_SET;
        }

        Aws::String GetNameForTtmlDestinationStyleControl(TtmlDestinationStyleControl enumValue)
        {
          switch(enumValue)
          {
          case TtmlDestinationStyleControl::PASSTHROUGH:
            return "PASSTHROUGH";
          case TtmlDestinationStyleControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TtmlDestinationStyleControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
