/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DQStopJobOnFailureTiming.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DQStopJobOnFailureTimingMapper
      {

        static const int Immediate_HASH = HashingUtils::HashString("Immediate");
        static const int AfterDataLoad_HASH = HashingUtils::HashString("AfterDataLoad");


        DQStopJobOnFailureTiming GetDQStopJobOnFailureTimingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Immediate_HASH)
          {
            return DQStopJobOnFailureTiming::Immediate;
          }
          else if (hashCode == AfterDataLoad_HASH)
          {
            return DQStopJobOnFailureTiming::AfterDataLoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DQStopJobOnFailureTiming>(hashCode);
          }

          return DQStopJobOnFailureTiming::NOT_SET;
        }

        Aws::String GetNameForDQStopJobOnFailureTiming(DQStopJobOnFailureTiming enumValue)
        {
          switch(enumValue)
          {
          case DQStopJobOnFailureTiming::Immediate:
            return "Immediate";
          case DQStopJobOnFailureTiming::AfterDataLoad:
            return "AfterDataLoad";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DQStopJobOnFailureTimingMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
