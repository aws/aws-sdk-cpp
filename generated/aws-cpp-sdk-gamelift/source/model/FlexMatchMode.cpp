/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FlexMatchMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace FlexMatchModeMapper
      {

        static const int STANDALONE_HASH = HashingUtils::HashString("STANDALONE");
        static const int WITH_QUEUE_HASH = HashingUtils::HashString("WITH_QUEUE");


        FlexMatchMode GetFlexMatchModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDALONE_HASH)
          {
            return FlexMatchMode::STANDALONE;
          }
          else if (hashCode == WITH_QUEUE_HASH)
          {
            return FlexMatchMode::WITH_QUEUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlexMatchMode>(hashCode);
          }

          return FlexMatchMode::NOT_SET;
        }

        Aws::String GetNameForFlexMatchMode(FlexMatchMode enumValue)
        {
          switch(enumValue)
          {
          case FlexMatchMode::STANDALONE:
            return "STANDALONE";
          case FlexMatchMode::WITH_QUEUE:
            return "WITH_QUEUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlexMatchModeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
