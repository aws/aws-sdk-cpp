/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlossaryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace GlossaryStatusMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        GlossaryStatus GetGlossaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return GlossaryStatus::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return GlossaryStatus::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlossaryStatus>(hashCode);
          }

          return GlossaryStatus::NOT_SET;
        }

        Aws::String GetNameForGlossaryStatus(GlossaryStatus enumValue)
        {
          switch(enumValue)
          {
          case GlossaryStatus::NOT_SET:
            return {};
          case GlossaryStatus::DISABLED:
            return "DISABLED";
          case GlossaryStatus::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlossaryStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
