/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static const int error_HASH = HashingUtils::HashString("error");
        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int connecting_HASH = HashingUtils::HashString("connecting");
        static const int ready_HASH = HashingUtils::HashString("ready");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int deleting_HASH = HashingUtils::HashString("deleting");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == error_HASH)
          {
            return EnvironmentStatus::error;
          }
          else if (hashCode == creating_HASH)
          {
            return EnvironmentStatus::creating;
          }
          else if (hashCode == connecting_HASH)
          {
            return EnvironmentStatus::connecting;
          }
          else if (hashCode == ready_HASH)
          {
            return EnvironmentStatus::ready;
          }
          else if (hashCode == stopping_HASH)
          {
            return EnvironmentStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return EnvironmentStatus::stopped;
          }
          else if (hashCode == deleting_HASH)
          {
            return EnvironmentStatus::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentStatus>(hashCode);
          }

          return EnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentStatus::error:
            return "error";
          case EnvironmentStatus::creating:
            return "creating";
          case EnvironmentStatus::connecting:
            return "connecting";
          case EnvironmentStatus::ready:
            return "ready";
          case EnvironmentStatus::stopping:
            return "stopping";
          case EnvironmentStatus::stopped:
            return "stopped";
          case EnvironmentStatus::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStatusMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
