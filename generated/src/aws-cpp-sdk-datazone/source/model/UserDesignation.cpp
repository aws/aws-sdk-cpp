/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserDesignation.h>
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
      namespace UserDesignationMapper
      {

        static const int PROJECT_OWNER_HASH = HashingUtils::HashString("PROJECT_OWNER");
        static const int PROJECT_CONTRIBUTOR_HASH = HashingUtils::HashString("PROJECT_CONTRIBUTOR");
        static const int PROJECT_CATALOG_VIEWER_HASH = HashingUtils::HashString("PROJECT_CATALOG_VIEWER");
        static const int PROJECT_CATALOG_CONSUMER_HASH = HashingUtils::HashString("PROJECT_CATALOG_CONSUMER");
        static const int PROJECT_CATALOG_STEWARD_HASH = HashingUtils::HashString("PROJECT_CATALOG_STEWARD");


        UserDesignation GetUserDesignationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECT_OWNER_HASH)
          {
            return UserDesignation::PROJECT_OWNER;
          }
          else if (hashCode == PROJECT_CONTRIBUTOR_HASH)
          {
            return UserDesignation::PROJECT_CONTRIBUTOR;
          }
          else if (hashCode == PROJECT_CATALOG_VIEWER_HASH)
          {
            return UserDesignation::PROJECT_CATALOG_VIEWER;
          }
          else if (hashCode == PROJECT_CATALOG_CONSUMER_HASH)
          {
            return UserDesignation::PROJECT_CATALOG_CONSUMER;
          }
          else if (hashCode == PROJECT_CATALOG_STEWARD_HASH)
          {
            return UserDesignation::PROJECT_CATALOG_STEWARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserDesignation>(hashCode);
          }

          return UserDesignation::NOT_SET;
        }

        Aws::String GetNameForUserDesignation(UserDesignation enumValue)
        {
          switch(enumValue)
          {
          case UserDesignation::NOT_SET:
            return {};
          case UserDesignation::PROJECT_OWNER:
            return "PROJECT_OWNER";
          case UserDesignation::PROJECT_CONTRIBUTOR:
            return "PROJECT_CONTRIBUTOR";
          case UserDesignation::PROJECT_CATALOG_VIEWER:
            return "PROJECT_CATALOG_VIEWER";
          case UserDesignation::PROJECT_CATALOG_CONSUMER:
            return "PROJECT_CATALOG_CONSUMER";
          case UserDesignation::PROJECT_CATALOG_STEWARD:
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

      } // namespace UserDesignationMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
