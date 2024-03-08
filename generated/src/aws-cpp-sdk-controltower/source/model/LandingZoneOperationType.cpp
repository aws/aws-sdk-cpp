/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace LandingZoneOperationTypeMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int RESET_HASH = HashingUtils::HashString("RESET");


        LandingZoneOperationType GetLandingZoneOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return LandingZoneOperationType::DELETE_;
          }
          else if (hashCode == CREATE_HASH)
          {
            return LandingZoneOperationType::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return LandingZoneOperationType::UPDATE;
          }
          else if (hashCode == RESET_HASH)
          {
            return LandingZoneOperationType::RESET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LandingZoneOperationType>(hashCode);
          }

          return LandingZoneOperationType::NOT_SET;
        }

        Aws::String GetNameForLandingZoneOperationType(LandingZoneOperationType enumValue)
        {
          switch(enumValue)
          {
          case LandingZoneOperationType::NOT_SET:
            return {};
          case LandingZoneOperationType::DELETE_:
            return "DELETE";
          case LandingZoneOperationType::CREATE:
            return "CREATE";
          case LandingZoneOperationType::UPDATE:
            return "UPDATE";
          case LandingZoneOperationType::RESET:
            return "RESET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LandingZoneOperationTypeMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
