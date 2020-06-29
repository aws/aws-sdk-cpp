/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/InputStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace InputStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        InputStatus GetInputStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return InputStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return InputStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InputStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InputStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputStatus>(hashCode);
          }

          return InputStatus::NOT_SET;
        }

        Aws::String GetNameForInputStatus(InputStatus enumValue)
        {
          switch(enumValue)
          {
          case InputStatus::CREATING:
            return "CREATING";
          case InputStatus::UPDATING:
            return "UPDATING";
          case InputStatus::ACTIVE:
            return "ACTIVE";
          case InputStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputStatusMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
