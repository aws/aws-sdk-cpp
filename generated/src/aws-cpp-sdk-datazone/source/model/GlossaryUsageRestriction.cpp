/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlossaryUsageRestriction.h>
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
      namespace GlossaryUsageRestrictionMapper
      {

        static const int ASSET_GOVERNED_TERMS_HASH = HashingUtils::HashString("ASSET_GOVERNED_TERMS");


        GlossaryUsageRestriction GetGlossaryUsageRestrictionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_GOVERNED_TERMS_HASH)
          {
            return GlossaryUsageRestriction::ASSET_GOVERNED_TERMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlossaryUsageRestriction>(hashCode);
          }

          return GlossaryUsageRestriction::NOT_SET;
        }

        Aws::String GetNameForGlossaryUsageRestriction(GlossaryUsageRestriction enumValue)
        {
          switch(enumValue)
          {
          case GlossaryUsageRestriction::NOT_SET:
            return {};
          case GlossaryUsageRestriction::ASSET_GOVERNED_TERMS:
            return "ASSET_GOVERNED_TERMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlossaryUsageRestrictionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
