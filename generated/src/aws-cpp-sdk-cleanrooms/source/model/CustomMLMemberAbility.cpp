/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CustomMLMemberAbility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace CustomMLMemberAbilityMapper
      {

        static const int CAN_RECEIVE_MODEL_OUTPUT_HASH = HashingUtils::HashString("CAN_RECEIVE_MODEL_OUTPUT");
        static const int CAN_RECEIVE_INFERENCE_OUTPUT_HASH = HashingUtils::HashString("CAN_RECEIVE_INFERENCE_OUTPUT");


        CustomMLMemberAbility GetCustomMLMemberAbilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAN_RECEIVE_MODEL_OUTPUT_HASH)
          {
            return CustomMLMemberAbility::CAN_RECEIVE_MODEL_OUTPUT;
          }
          else if (hashCode == CAN_RECEIVE_INFERENCE_OUTPUT_HASH)
          {
            return CustomMLMemberAbility::CAN_RECEIVE_INFERENCE_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomMLMemberAbility>(hashCode);
          }

          return CustomMLMemberAbility::NOT_SET;
        }

        Aws::String GetNameForCustomMLMemberAbility(CustomMLMemberAbility enumValue)
        {
          switch(enumValue)
          {
          case CustomMLMemberAbility::NOT_SET:
            return {};
          case CustomMLMemberAbility::CAN_RECEIVE_MODEL_OUTPUT:
            return "CAN_RECEIVE_MODEL_OUTPUT";
          case CustomMLMemberAbility::CAN_RECEIVE_INFERENCE_OUTPUT:
            return "CAN_RECEIVE_INFERENCE_OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomMLMemberAbilityMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
