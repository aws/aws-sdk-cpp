/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourceTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ResourceTypeFilterMapper
      {

        static const int LOG_GROUPS_HASH = HashingUtils::HashString("LOG_GROUPS");


        ResourceTypeFilter GetResourceTypeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_GROUPS_HASH)
          {
            return ResourceTypeFilter::LOG_GROUPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeFilter>(hashCode);
          }

          return ResourceTypeFilter::NOT_SET;
        }

        Aws::String GetNameForResourceTypeFilter(ResourceTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeFilter::LOG_GROUPS:
            return "LOG_GROUPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeFilterMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
