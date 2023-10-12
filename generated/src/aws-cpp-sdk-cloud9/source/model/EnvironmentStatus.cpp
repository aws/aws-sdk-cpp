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

        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t creating_HASH = ConstExprHashingUtils::HashString("creating");
        static constexpr uint32_t connecting_HASH = ConstExprHashingUtils::HashString("connecting");
        static constexpr uint32_t ready_HASH = ConstExprHashingUtils::HashString("ready");
        static constexpr uint32_t stopping_HASH = ConstExprHashingUtils::HashString("stopping");
        static constexpr uint32_t stopped_HASH = ConstExprHashingUtils::HashString("stopped");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EnvironmentStatus::NOT_SET:
            return {};
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
