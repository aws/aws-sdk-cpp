/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentDependencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace ComponentDependencyTypeMapper
      {

        static const int HARD_HASH = HashingUtils::HashString("HARD");
        static const int SOFT_HASH = HashingUtils::HashString("SOFT");


        ComponentDependencyType GetComponentDependencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HARD_HASH)
          {
            return ComponentDependencyType::HARD;
          }
          else if (hashCode == SOFT_HASH)
          {
            return ComponentDependencyType::SOFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentDependencyType>(hashCode);
          }

          return ComponentDependencyType::NOT_SET;
        }

        Aws::String GetNameForComponentDependencyType(ComponentDependencyType enumValue)
        {
          switch(enumValue)
          {
          case ComponentDependencyType::NOT_SET:
            return {};
          case ComponentDependencyType::HARD:
            return "HARD";
          case ComponentDependencyType::SOFT:
            return "SOFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentDependencyTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
