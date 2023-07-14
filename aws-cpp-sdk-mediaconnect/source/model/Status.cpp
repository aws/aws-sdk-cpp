/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDBY_HASH)
          {
            return Status::STANDBY;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return Status::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return Status::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return Status::DELETING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return Status::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return Status::STOPPING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return Status::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::STANDBY:
            return "STANDBY";
          case Status::ACTIVE:
            return "ACTIVE";
          case Status::UPDATING:
            return "UPDATING";
          case Status::DELETING:
            return "DELETING";
          case Status::STARTING:
            return "STARTING";
          case Status::STOPPING:
            return "STOPPING";
          case Status::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
