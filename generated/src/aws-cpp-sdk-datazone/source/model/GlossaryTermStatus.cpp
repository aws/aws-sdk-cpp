/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlossaryTermStatus.h>
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
      namespace GlossaryTermStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        GlossaryTermStatus GetGlossaryTermStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return GlossaryTermStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GlossaryTermStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlossaryTermStatus>(hashCode);
          }

          return GlossaryTermStatus::NOT_SET;
        }

        Aws::String GetNameForGlossaryTermStatus(GlossaryTermStatus enumValue)
        {
          switch(enumValue)
          {
          case GlossaryTermStatus::NOT_SET:
            return {};
          case GlossaryTermStatus::ENABLED:
            return "ENABLED";
          case GlossaryTermStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlossaryTermStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
