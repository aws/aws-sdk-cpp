/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
