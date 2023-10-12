/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ClusterField.h>
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
      namespace ClusterFieldMapper
      {

        static constexpr uint32_t ATTACHMENTS_HASH = ConstExprHashingUtils::HashString("ATTACHMENTS");
        static constexpr uint32_t CONFIGURATIONS_HASH = ConstExprHashingUtils::HashString("CONFIGURATIONS");
        static constexpr uint32_t SETTINGS_HASH = ConstExprHashingUtils::HashString("SETTINGS");
        static constexpr uint32_t STATISTICS_HASH = ConstExprHashingUtils::HashString("STATISTICS");
        static constexpr uint32_t TAGS_HASH = ConstExprHashingUtils::HashString("TAGS");


        ClusterField GetClusterFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHMENTS_HASH)
          {
            return ClusterField::ATTACHMENTS;
          }
          else if (hashCode == CONFIGURATIONS_HASH)
          {
            return ClusterField::CONFIGURATIONS;
          }
          else if (hashCode == SETTINGS_HASH)
          {
            return ClusterField::SETTINGS;
          }
          else if (hashCode == STATISTICS_HASH)
          {
            return ClusterField::STATISTICS;
          }
          else if (hashCode == TAGS_HASH)
          {
            return ClusterField::TAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterField>(hashCode);
          }

          return ClusterField::NOT_SET;
        }

        Aws::String GetNameForClusterField(ClusterField enumValue)
        {
          switch(enumValue)
          {
          case ClusterField::NOT_SET:
            return {};
          case ClusterField::ATTACHMENTS:
            return "ATTACHMENTS";
          case ClusterField::CONFIGURATIONS:
            return "CONFIGURATIONS";
          case ClusterField::SETTINGS:
            return "SETTINGS";
          case ClusterField::STATISTICS:
            return "STATISTICS";
          case ClusterField::TAGS:
            return "TAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterFieldMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
