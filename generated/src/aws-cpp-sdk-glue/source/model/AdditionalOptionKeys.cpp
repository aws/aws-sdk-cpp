/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AdditionalOptionKeys.h>
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
      namespace AdditionalOptionKeysMapper
      {

        static const int performanceTuning_caching_HASH = HashingUtils::HashString("performanceTuning.caching");
        static const int observations_scope_HASH = HashingUtils::HashString("observations.scope");


        AdditionalOptionKeys GetAdditionalOptionKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == performanceTuning_caching_HASH)
          {
            return AdditionalOptionKeys::performanceTuning_caching;
          }
          else if (hashCode == observations_scope_HASH)
          {
            return AdditionalOptionKeys::observations_scope;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalOptionKeys>(hashCode);
          }

          return AdditionalOptionKeys::NOT_SET;
        }

        Aws::String GetNameForAdditionalOptionKeys(AdditionalOptionKeys enumValue)
        {
          switch(enumValue)
          {
          case AdditionalOptionKeys::NOT_SET:
            return {};
          case AdditionalOptionKeys::performanceTuning_caching:
            return "performanceTuning.caching";
          case AdditionalOptionKeys::observations_scope:
            return "observations.scope";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalOptionKeysMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
