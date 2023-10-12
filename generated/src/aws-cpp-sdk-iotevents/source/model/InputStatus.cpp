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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        InputStatus GetInputStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case InputStatus::NOT_SET:
            return {};
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
