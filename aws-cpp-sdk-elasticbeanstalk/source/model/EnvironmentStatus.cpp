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

        static const int Aborting_HASH = HashingUtils::HashString("Aborting");
        static const int Launching_HASH = HashingUtils::HashString("Launching");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int LinkingFrom_HASH = HashingUtils::HashString("LinkingFrom");
        static const int LinkingTo_HASH = HashingUtils::HashString("LinkingTo");
        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Terminating_HASH = HashingUtils::HashString("Terminating");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
