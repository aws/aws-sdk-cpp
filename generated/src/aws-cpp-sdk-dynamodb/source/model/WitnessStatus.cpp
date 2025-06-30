/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/WitnessStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace WitnessStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        WitnessStatus GetWitnessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WitnessStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WitnessStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WitnessStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WitnessStatus>(hashCode);
          }

          return WitnessStatus::NOT_SET;
        }

        Aws::String GetNameForWitnessStatus(WitnessStatus enumValue)
        {
          switch(enumValue)
          {
          case WitnessStatus::NOT_SET:
            return {};
          case WitnessStatus::CREATING:
            return "CREATING";
          case WitnessStatus::DELETING:
            return "DELETING";
          case WitnessStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WitnessStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
