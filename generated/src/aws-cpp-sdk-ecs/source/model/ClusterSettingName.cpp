/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ClusterSettingName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ClusterSettingNameMapper
      {

        static const int containerInsights_HASH = HashingUtils::HashString("containerInsights");


        ClusterSettingName GetClusterSettingNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == containerInsights_HASH)
          {
            return ClusterSettingName::containerInsights;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterSettingName>(hashCode);
          }

          return ClusterSettingName::NOT_SET;
        }

        Aws::String GetNameForClusterSettingName(ClusterSettingName enumValue)
        {
          switch(enumValue)
          {
          case ClusterSettingName::containerInsights:
            return "containerInsights";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterSettingNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
