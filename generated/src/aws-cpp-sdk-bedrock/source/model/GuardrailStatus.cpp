/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace GuardrailStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int VERSIONING_HASH = HashingUtils::HashString("VERSIONING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        GuardrailStatus GetGuardrailStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GuardrailStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GuardrailStatus::UPDATING;
          }
          else if (hashCode == VERSIONING_HASH)
          {
            return GuardrailStatus::VERSIONING;
          }
          else if (hashCode == READY_HASH)
          {
            return GuardrailStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GuardrailStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GuardrailStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailStatus>(hashCode);
          }

          return GuardrailStatus::NOT_SET;
        }

        Aws::String GetNameForGuardrailStatus(GuardrailStatus enumValue)
        {
          switch(enumValue)
          {
          case GuardrailStatus::NOT_SET:
            return {};
          case GuardrailStatus::CREATING:
            return "CREATING";
          case GuardrailStatus::UPDATING:
            return "UPDATING";
          case GuardrailStatus::VERSIONING:
            return "VERSIONING";
          case GuardrailStatus::READY:
            return "READY";
          case GuardrailStatus::FAILED:
            return "FAILED";
          case GuardrailStatus::DELETING:
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

      } // namespace GuardrailStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
