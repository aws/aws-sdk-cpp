/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PortalState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace PortalStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PortalState GetPortalStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PortalState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return PortalState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PortalState::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PortalState::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PortalState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortalState>(hashCode);
          }

          return PortalState::NOT_SET;
        }

        Aws::String GetNameForPortalState(PortalState enumValue)
        {
          switch(enumValue)
          {
          case PortalState::CREATING:
            return "CREATING";
          case PortalState::UPDATING:
            return "UPDATING";
          case PortalState::DELETING:
            return "DELETING";
          case PortalState::ACTIVE:
            return "ACTIVE";
          case PortalState::FAILED:
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

      } // namespace PortalStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
