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

        static const int ATTACHMENTS_HASH = HashingUtils::HashString("ATTACHMENTS");
        static const int CONFIGURATIONS_HASH = HashingUtils::HashString("CONFIGURATIONS");
        static const int SETTINGS_HASH = HashingUtils::HashString("SETTINGS");
        static const int STATISTICS_HASH = HashingUtils::HashString("STATISTICS");
        static const int TAGS_HASH = HashingUtils::HashString("TAGS");


        ClusterField GetClusterFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
