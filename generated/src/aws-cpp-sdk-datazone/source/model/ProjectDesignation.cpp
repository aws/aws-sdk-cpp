/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectDesignation.h>
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
      namespace ProjectDesignationMapper
      {

        static const int OWNER_HASH = HashingUtils::HashString("OWNER");
        static const int CONTRIBUTOR_HASH = HashingUtils::HashString("CONTRIBUTOR");
        static const int PROJECT_CATALOG_STEWARD_HASH = HashingUtils::HashString("PROJECT_CATALOG_STEWARD");


        ProjectDesignation GetProjectDesignationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNER_HASH)
          {
            return ProjectDesignation::OWNER;
          }
          else if (hashCode == CONTRIBUTOR_HASH)
          {
            return ProjectDesignation::CONTRIBUTOR;
          }
          else if (hashCode == PROJECT_CATALOG_STEWARD_HASH)
          {
            return ProjectDesignation::PROJECT_CATALOG_STEWARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectDesignation>(hashCode);
          }

          return ProjectDesignation::NOT_SET;
        }

        Aws::String GetNameForProjectDesignation(ProjectDesignation enumValue)
        {
          switch(enumValue)
          {
          case ProjectDesignation::NOT_SET:
            return {};
          case ProjectDesignation::OWNER:
            return "OWNER";
          case ProjectDesignation::CONTRIBUTOR:
            return "CONTRIBUTOR";
          case ProjectDesignation::PROJECT_CATALOG_STEWARD:
            return "PROJECT_CATALOG_STEWARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectDesignationMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
