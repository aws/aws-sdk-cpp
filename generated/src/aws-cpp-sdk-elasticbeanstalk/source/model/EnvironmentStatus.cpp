/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static constexpr uint32_t Aborting_HASH = ConstExprHashingUtils::HashString("Aborting");
        static constexpr uint32_t Launching_HASH = ConstExprHashingUtils::HashString("Launching");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t LinkingFrom_HASH = ConstExprHashingUtils::HashString("LinkingFrom");
        static constexpr uint32_t LinkingTo_HASH = ConstExprHashingUtils::HashString("LinkingTo");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");
        static constexpr uint32_t Terminating_HASH = ConstExprHashingUtils::HashString("Terminating");
        static constexpr uint32_t Terminated_HASH = ConstExprHashingUtils::HashString("Terminated");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Aborting_HASH)
          {
            return EnvironmentStatus::Aborting;
          }
          else if (hashCode == Launching_HASH)
          {
            return EnvironmentStatus::Launching;
          }
          else if (hashCode == Updating_HASH)
          {
            return EnvironmentStatus::Updating;
          }
          else if (hashCode == LinkingFrom_HASH)
          {
            return EnvironmentStatus::LinkingFrom;
          }
          else if (hashCode == LinkingTo_HASH)
          {
            return EnvironmentStatus::LinkingTo;
          }
          else if (hashCode == Ready_HASH)
          {
            return EnvironmentStatus::Ready;
          }
          else if (hashCode == Terminating_HASH)
          {
            return EnvironmentStatus::Terminating;
          }
          else if (hashCode == Terminated_HASH)
          {
            return EnvironmentStatus::Terminated;
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
          case EnvironmentStatus::Aborting:
            return "Aborting";
          case EnvironmentStatus::Launching:
            return "Launching";
          case EnvironmentStatus::Updating:
            return "Updating";
          case EnvironmentStatus::LinkingFrom:
            return "LinkingFrom";
          case EnvironmentStatus::LinkingTo:
            return "LinkingTo";
          case EnvironmentStatus::Ready:
            return "Ready";
          case EnvironmentStatus::Terminating:
            return "Terminating";
          case EnvironmentStatus::Terminated:
            return "Terminated";
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
  } // namespace ElasticBeanstalk
} // namespace Aws
