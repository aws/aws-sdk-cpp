﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/ClusterStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DSQL
  {
    namespace Model
    {
      namespace ClusterStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ClusterStatus GetClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ClusterStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ClusterStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ClusterStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ClusterStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ClusterStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ClusterStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterStatus>(hashCode);
          }

          return ClusterStatus::NOT_SET;
        }

        Aws::String GetNameForClusterStatus(ClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterStatus::NOT_SET:
            return {};
          case ClusterStatus::CREATING:
            return "CREATING";
          case ClusterStatus::ACTIVE:
            return "ACTIVE";
          case ClusterStatus::UPDATING:
            return "UPDATING";
          case ClusterStatus::DELETING:
            return "DELETING";
          case ClusterStatus::DELETED:
            return "DELETED";
          case ClusterStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStatusMapper
    } // namespace Model
  } // namespace DSQL
} // namespace Aws
