/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HierarchyGroupMatchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace HierarchyGroupMatchTypeMapper
      {

        static const int EXACT_HASH = HashingUtils::HashString("EXACT");
        static const int WITH_CHILD_GROUPS_HASH = HashingUtils::HashString("WITH_CHILD_GROUPS");


        HierarchyGroupMatchType GetHierarchyGroupMatchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return HierarchyGroupMatchType::EXACT;
          }
          else if (hashCode == WITH_CHILD_GROUPS_HASH)
          {
            return HierarchyGroupMatchType::WITH_CHILD_GROUPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HierarchyGroupMatchType>(hashCode);
          }

          return HierarchyGroupMatchType::NOT_SET;
        }

        Aws::String GetNameForHierarchyGroupMatchType(HierarchyGroupMatchType enumValue)
        {
          switch(enumValue)
          {
          case HierarchyGroupMatchType::NOT_SET:
            return {};
          case HierarchyGroupMatchType::EXACT:
            return "EXACT";
          case HierarchyGroupMatchType::WITH_CHILD_GROUPS:
            return "WITH_CHILD_GROUPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HierarchyGroupMatchTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
