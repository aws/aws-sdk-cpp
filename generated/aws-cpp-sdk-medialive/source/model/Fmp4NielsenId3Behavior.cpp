/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Fmp4NielsenId3Behavior.h>
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
      namespace Fmp4NielsenId3BehaviorMapper
      {

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        Fmp4NielsenId3Behavior GetFmp4NielsenId3BehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return Fmp4NielsenId3Behavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return Fmp4NielsenId3Behavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Fmp4NielsenId3Behavior>(hashCode);
          }

          return Fmp4NielsenId3Behavior::NOT_SET;
        }

        Aws::String GetNameForFmp4NielsenId3Behavior(Fmp4NielsenId3Behavior enumValue)
        {
          switch(enumValue)
          {
          case Fmp4NielsenId3Behavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case Fmp4NielsenId3Behavior::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Fmp4NielsenId3BehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
