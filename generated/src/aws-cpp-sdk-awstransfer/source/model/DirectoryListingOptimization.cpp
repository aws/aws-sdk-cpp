/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DirectoryListingOptimization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace DirectoryListingOptimizationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DirectoryListingOptimization GetDirectoryListingOptimizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DirectoryListingOptimization::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DirectoryListingOptimization::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryListingOptimization>(hashCode);
          }

          return DirectoryListingOptimization::NOT_SET;
        }

        Aws::String GetNameForDirectoryListingOptimization(DirectoryListingOptimization enumValue)
        {
          switch(enumValue)
          {
          case DirectoryListingOptimization::NOT_SET:
            return {};
          case DirectoryListingOptimization::ENABLED:
            return "ENABLED";
          case DirectoryListingOptimization::DISABLED:
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

      } // namespace DirectoryListingOptimizationMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
